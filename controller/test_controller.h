#ifndef LMDB_TEST_CONTROLLER_H
#define LMDB_TEST_CONTROLLER_H

#include <assert.h>
#include "../repository/repository.h"
#include "controller.h"

Controller setUp();

void test_add();

void test_del();

void test_update();

void test_ctrl_all();

#endif
