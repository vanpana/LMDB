#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "../repository/repository.h"
#include "../controller/controller.h"
using testing::Eq;
using namespace std;

class ControllerTest : public testing::Test
{
public:
    Repository *admin_repo;
    Controller *ctrl;

        void SetUp() override
        {
            admin_repo = new Repository{30, "/Users/vanpana/Google Drive/Uni/An 1/Semestrul 2 - Mac/OOP/LMDB/data/movies.csv"};
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
    ctrl->add("","",0,0,"");
    ASSERT_EQ(ctrl->getLength(), initlength + 1);
}

TEST_F(ControllerTest, test_update)
{
    ctrl->add("asd","",0,0,"");
    ctrl->update("asd","",0,2,"");
    ASSERT_EQ(ctrl->getItems()[ctrl->getLength() - 1].getLikes(), 2);
    ASSERT_EQ(ctrl->update("www","",0,0,""), 0);
}

TEST_F(ControllerTest, test_delete)
{
    int initlength = ctrl->getLength();
    ctrl->add("asd","",0,0,"");
    ctrl->del("asd");
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