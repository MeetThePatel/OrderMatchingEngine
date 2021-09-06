#include <OrderMatchingEngine/server/user.h>

auto User::getUsername () -> string { return _username; }

auto User::setUsername (string newUserName) -> void { _username = newUserName; }