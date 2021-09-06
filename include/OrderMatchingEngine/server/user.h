#pragma once

#include <utility>

#include <OrderMatchingEngine/utilities/unique.h>

using std::string;

/**
 *  @brief Implementation of a User.
 *
 *  Each User has a UUID assigned to them, as User inherits from Unique.
 */
class User : public Unique {
 private:
  /**
   * @brief User's username.
   */
  string _username;

 public:
  /**
   * Constructs a new User with a UUID and a username.
   * @param username
   */
  explicit User (string username) : _username (std::move (username)) {};

  /**
   * @brief Returns the User's username.
   * @return the User's username.
   */
  auto getUsername () -> string;
};