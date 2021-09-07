#include <OrderMatchingEngine/server/userlist.h>
#include <gtest/gtest.h>

TEST (Server_UserListSuite, EmptyUserList) {
  EXPECT_NO_THROW (UserList userlist {};);
}