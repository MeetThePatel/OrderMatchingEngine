#include <OrderMatchingEngine/server/userlist.h>

auto UserList::newUser (std::shared_ptr<User> user) -> std::shared_ptr<User> {
  UUID uuid = user->getUUID ();
  std::cout << "Created new user: " << user->getUsername () << " ("
            << user->getUUID () << ")" << std::endl;
  _userList.insert (std::make_pair (user->getUUID (), std::move (user)));
  return {_userList[uuid]};
}

/// This may require exception handling, or at least existence checking via
/// UserList::doesUserExist
auto UserList::getUser (UUID uuid) -> std::shared_ptr<User> {
  return {_userList[uuid]};
}

auto UserList::doesUserExist (UUID uuid) -> bool {
  return _userList.contains (uuid);
}
