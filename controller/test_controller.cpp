#include "test_controller.h"

Controller setUp()
{
        Repository admin_repo = Repository{30, "/Users/vanpana/Google Drive/Uni/An 1/Semestrul 2 - Mac/OOP/LMDB/data/movies.csv"};
        Controller ctrl = Controller{admin_repo};
        return ctrl;
}

void test_add()
{
    Controller ctrl = setUp();
    ctrl.add("asd","asd",123,123,"asd");
    assert(ctrl.getLength() == 8);
}

void test_del()
{
    Controller ctrl = setUp();
    ctrl.del("Pulp Fiction");
    assert(ctrl.getLength() == 6);

}

void test_update()
{
    Controller ctrl = setUp();
    ctrl.update("Pulp Fiction","asd",123,123,"asd");
    assert(ctrl.getItems()[ctrl.getPosition("Pulp Fiction")].getGenre() == "asd");

}

void test_ctrl_all()
{
    test_add();
    test_del();
    test_update();
}