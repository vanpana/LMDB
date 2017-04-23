#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "../repository/repository.h"
#include "../controller/controller.h"
#include "../common/util.h"

using testing::Eq;
using namespace std;

class ControllerTest : public testing::Test
{
public:
    FileRepository *admin_repo;
    Controller *ctrl;

        void SetUp() override
        {
            admin_repo = new FileRepository{"/Users/vanpana/Google Drive/Uni/An 1/Semestrul 2 - Mac/OOP/LMDB/data/movies.csv"};
            ctrl = new Controller{*admin_repo};
        }

        void TearDown() override
        {
            delete admin_repo;
            delete ctrl;
        }
};

TEST_F(ControllerTest, test_add)
{
    int initlength = ctrl->getLength();
    ctrl->add("Titlu","Gen",2010,700,"http://www.google.com");
    ASSERT_EQ(ctrl->getLength(), initlength + 1);

    ASSERT_ANY_THROW(ctrl->add("","Gen",2010,700,"http://www.google.com"));
    ASSERT_ANY_THROW(ctrl->add("Titlu","",2010,700,"http://www.google.com"));
    ASSERT_ANY_THROW(ctrl->add("Titlu","Gen",0,700,"http://www.google.com"));
    ASSERT_ANY_THROW(ctrl->add("Titlu2","Gen",2017,-1,"http://www.google.com"));
    ASSERT_ANY_THROW(ctrl->add("Titlu","Gen",2017,700,"google.com"));
}

TEST_F(ControllerTest, test_update)
{
    ctrl->add("Titlu","Gen",2010,700,"http://www.google.com");
    ctrl->update("Titlu","Gen",2010,730,"http://www.google.com");
    ASSERT_EQ(ctrl->getItems()[ctrl->getLength() - 1].getLikes(), 730);

    ASSERT_EQ(ctrl->update("www","",0,0,""), 0);
}

TEST_F(ControllerTest, test_delete)
{
    int initlength = ctrl->getLength();
    ctrl->add("Titlu","Gen",2010,700,"http://www.google.com");
    ctrl->del("Titlu");
    ASSERT_EQ(ctrl->getLength(), initlength);

    ASSERT_EQ(ctrl->del("www"), 0);
}

TEST_F(ControllerTest, test_getPosition)
{
    string name = ctrl->getItems()[0].getTitle();
    ASSERT_EQ(ctrl->getPosition(name), 0);

    ASSERT_EQ(ctrl->getPosition("www"), -1);
}

TEST_F(ControllerTest, test_getArray)
{
    int initlength = ctrl->getLength();
    ASSERT_EQ(ctrl->getLength(), initlength);

}

TEST_F(ControllerTest, test_sort)
{
    vector<Movie> testsort = sortByGenre(ctrl->getItems());
    ASSERT_EQ(1,1);
}