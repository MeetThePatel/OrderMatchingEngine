#include <OrderMatchingEngine/server/userlist.h>
#include <gtest/gtest.h>

TEST (UserListSuite, EmptyUserList) { EXPECT_NO_THROW (UserList userlist {};); }