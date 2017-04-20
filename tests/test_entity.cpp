//
// Created by Panaite Dorinel on 20/04/2017.
//

#include "test_entity.h"

class EntityTest : public testing::Test
{
public:
    Movie mov;

    void SetUp() override
    {
        mov = Movie{"Title", "Genre", 2017, 4242, "http://www.google.com"};
    }
};

TEST_F(EntityTest, test_title)
{
    ASSERT_EQ(mov.getTitle(), "Title");
}

TEST_F(EntityTest, test_genre)
{
    ASSERT_EQ(mov.getGenre(), "Genre");
}

TEST_F(EntityTest, test_year)
{
    ASSERT_EQ(mov.getYear(), 2017);
}

TEST_F(EntityTest, test_likes)
{
    ASSERT_EQ(mov.getLikes(), 4242);
}

TEST_F(EntityTest, test_likesinc)
{
    mov.incLikes();
    ASSERT_EQ(mov.getLikes(), 4243);
}

TEST_F(EntityTest, test_link)
{
    ASSERT_EQ(mov.getTrailer(), "http://www.google.com");
}

TEST_F(EntityTest, test_ostream)
{
    std::stringstream out;
    out << mov;
    ASSERT_EQ(out.str(),"Title,Genre,2017,4242,http://www.google.com");

    mov.str();
}