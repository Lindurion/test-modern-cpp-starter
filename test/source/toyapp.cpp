#include <doctest/doctest.h>
#include <toyapp/toyapp.h>
#include <toyapp/version.h>

#include <string>

TEST_CASE("ToyApp") {
  using namespace toyapp;

  ToyApp toyapp("Tests");

  CHECK(toyapp.greet(LanguageCode::EN) == "Hello, Tests!");
  CHECK(toyapp.greet(LanguageCode::DE) == "Hallo Tests!");
  CHECK(toyapp.greet(LanguageCode::ES) == "¡Hola Tests!");
  CHECK(toyapp.greet(LanguageCode::FR) == "Bonjour Tests!");
}

TEST_CASE("ToyApp version") {
  static_assert(std::string_view(TOYAPP_VERSION) == std::string_view("1.0"));
  CHECK(std::string(TOYAPP_VERSION) == std::string("1.0"));
}
