/**
 * Unit Tests for TicTacToeBoard
**/

#include <gtest/gtest.h>
#include "TicTacToeBoard.h"
 
class TicTacToeBoardTest : public ::testing::Test
{
	protected:
		TicTacToeBoardTest(){} //constructor runs before each test
		virtual ~TicTacToeBoardTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor) 
};

/* EXAMPLE TEST FORMAT
TEST(TicTacToeBoardTest, unitTestName)
{
	ASSERT_TRUE(true);
}
*/

TEST(TicTacToeBoard, oneTurn)
{
  TicTacToeBoard T;
	ASSERT_EQ(T.toggleTurn == 'O');
}

TEST(TicTacToeBoard, twoTurn)
{
  TicTacToeBoard T;
  T.toggleTurn;
	ASSERT_EQ(T.toggleTurn == 'X');
}

TEST(TicTacToeBoard, threeTurn)
{
  TicTacToeBoard T;
  T.toggleTurn;
  T.toggleTurn;
	ASSERT_EQ(T.toggleTurn == 'O');
}