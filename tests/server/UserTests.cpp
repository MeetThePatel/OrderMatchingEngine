#include <OrderMatchingEngine/server/user.h>
#include <gtest/gtest.h>

TEST (Server_UserSuite, GetUsername) {
  User user {"username"};
  ASSERT_EQ (user.getUsername (), "username");
}

TEST (Server_UserSuite, SetUsername) {
  User user {"username"};
  user.setUsername ("modified username");
  ASSERT_EQ (user.getUsername (), "modified username");
}