//
// Created by Panaite Dorinel on 21/04/2017.
//

#include "test_watchlist.h"
#include "test_controller.h"

class WlistTest : public testing::Test
{
public:
    WatchList wlist;
    FileRepository *repo;

    void SetUp() override
    {
        wlist = WatchList("csv");
        repo = new FileRepository{"../data/movie_database.csv"};
    }

    void TearDown() override
    {
        delete repo;
    }
};

TEST_F(WlistTest, test_add)
{
    wlist.getSuggestions(repo->getItems(), "");

    int initlength = wlist.getArray().size();

    wlist.getCurrentMovie();
    wlist.add();
    ASSERT_EQ(wlist.getArray().size(), initlength + 1);
}

TEST_F(WlistTest, test_del)
{
    wlist.getSuggestions(repo->getItems(), "");

    wlist.getCurrentMovie();
    wlist.add();
    wlist.getCurrentMovie();
    wlist.add();

    int initlength = wlist.getArray().size();
    cout << wlist.getArray()[0].getTitle() << endl;
    wlist.del(wlist.getArray()[0].getTitle());

    ASSERT_EQ(wlist.getArray().size(), initlength - 1);

    ASSERT_EQ(wlist.del("foo"), 0);
}

TEST_F(WlistTest, test_getSuggestions_all)
{
    wlist.getSuggestions(repo->getItems(), "");

    ASSERT_EQ(wlist.getMaximumPos(), repo->getItems().size());
}

TEST_F(WlistTest, test_getSuggestions_needle)
{
    string testgenre = repo->getItems()[0].getGenre();
    int testcounter = 0;

    for(int i = 0; i < repo->getItems().size(); i++)
        if (repo->getItems()[i].getGenre() == testgenre)
            testcounter++;

    wlist.getSuggestions(repo->getItems(), testgenre);

    ASSERT_EQ(wlist.getMaximumPos(), testcounter);
}

TEST_F(WlistTest, test_getPosition)
{
    wlist.getSuggestions(repo->getItems(), "");

    wlist.getCurrentMovie();
    wlist.add();
    wlist.getCurrentMovie();
    wlist.add();

    int testposition = wlist.getPosition(repo->getItems()[1].getTitle() );
    ASSERT_EQ(testposition, 1);
}

TEST_F(WlistTest, test_setPosition)
{
    wlist.getSuggestions(repo->getItems(), "");

    wlist.getCurrentMovie();
    wlist.add();
    wlist.getCurrentMovie();
    wlist.add();

    wlist.setCurrentPos(1);
    wlist.setCurrentPos(-1);
}

TEST_F(WlistTest, test_loop)
{
    wlist.getSuggestions(repo->getItems(), "");
    for (int i = 0; i < wlist.getMaximumPos() + 1; i++)
        wlist.getCurrentMovie();

    ASSERT_EQ(1,1);
}