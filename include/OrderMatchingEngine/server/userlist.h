#pragma once

#include <iostream>
#include <unordered_map>

#include <boost/container_hash/hash.hpp>
#include <boost/uuid/uuid.hpp>
#include <boost/uuid/uuid_io.hpp>

#include <OrderMatchingEngine/server/user.h>

using UUID = boost::uuids::uuid;

/**
 * @brief Associative structure from UUID to User.
 */
class UserList {
 private:
  /**
   * @brief Hashmap that returns a User from a UUID.
   */
  std::unordered_map<UUID, std::shared_ptr<User>, boost::hash<UUID>> _userList;

 public:
  /**
   * @brief Default constructor of an empty UserList.
   */
  UserList () = default;

  /**
   * @brief Creates a new User.
   * @param user : User to be inserted into the UserList.
   */
  auto newUser (std::shared_ptr<User> user) -> std::shared_ptr<User>;

  /**
   * @brief Searches UserList for a User with a given UUID.
   * @param uuid : UUID to search for.
   * @return a shared pointer to the User with the UUID provided.
   */
  auto getUser (UUID uuid) -> std::shared_ptr<User>;

  /**
   * @brief Checks if a User with a given UUID exists.
   * @param uuid : UUID to search for.
   * @return whether or not a User with the provided UUID exists.
   */
  auto doesUserExist (UUID uuid) -> bool;
};