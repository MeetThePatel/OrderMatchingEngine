#pragma once

#include <boost/uuid/uuid.hpp>
#include <boost/uuid/uuid_generators.hpp>

using UUID = boost::uuids::uuid;

/**
 *  @brief Implementation of class with a unique identifier.
 *
 *  Any class that inherits from Unique will have a UUID. This UUID can be
 * treated as unique.
 */
class Unique {
 private:
  /**
   * @brief The object's UUID.
   * The UUID is a randomly generated 128-bit number.
   */
  UUID _id;

 public:
  /**
   * @brief Default constructor returning a Unique object with a 128-bit UUID.
   */
  Unique () : _id (boost::uuids::random_generator () ()) {};

  /**
   * Returns the UUID of the object.
   * @return the UUID of the object.
   */
  [[nodiscard]] auto getUUID () const -> UUID { return _id; };
};