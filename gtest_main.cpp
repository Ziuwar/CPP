#include  "include/cpp_class.h" // include the calculator header file
#include "gtest/gtest.h" // include the GoogleTest framework

namespace AS {
namespace cpp_eval {
namespace {

// Define a test fixture for your calculator tests
class CalculatorTest : public ::testing::Test {
protected:

    Calculator calc; // create a Calculator object to use in your tests

  /* You can remove any or all of the following functions if their bodies would
  // be empty.

  FooTest() {
     // You can do set-up work for each test here.
  }

  ~FooTest() override {
     // You can do clean-up work that doesn't throw exceptions here.
  }

  // If the constructor and destructor are not enough for setting up
  // and cleaning up each test, you can define the following methods:

  void SetUp() override {
     // Code here will be called immediately after the constructor (right
     // before each test).
  }

  void TearDown() override {
     // Code here will be called immediately after each test (right
     // before the destructor).
  }

  // Class members declared here can be used by all tests in the test suite
  // for Foo. */
};

// Define a test case to test the add function of your calculator
TEST_F(CalculatorTest, TestAddition) {
    EXPECT_EQ(calc.add(2, 2), 4); // Expect the result of adding 2 + 2 to be 4
}

// Define a test case to test the subtract function of your calculator
TEST_F(CalculatorTest, TestSubtraction) {
    EXPECT_EQ(calc.subtract(4, 2), 2); // Expect the result of subtracting 4 - 2 to be 2
}

// Define a test case to test the multiply function of your calculator
TEST_F(CalculatorTest, TestMultiplication) {
    EXPECT_EQ(calc.multiply(3, 5), 15); // Expect the result of multiplying 3 * 5 to be 15
}

// Define a test case to test the divide function of your calculator
TEST_F(CalculatorTest, TestDivision) {
    EXPECT_EQ(calc.divide(10, 2), 5); // Expect the result of dividing 10 / 2 to be 5
    EXPECT_THROW(calc.divide(10, 0), std::invalid_argument); // Expect an invalid argument exception when dividing by zero
}

}  // namespace
}  // namespace project
}  // namespace my

// Run the tests using the GoogleTest framework
int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}