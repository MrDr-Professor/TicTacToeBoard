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

TEST(TicTacToeBoardTest, oneTurn)
{
  TicTacToeBoard T;
	ASSERT_EQ(T.toggleTurn(), 'O');
}

TEST(TicTacToeBoardTest, twoTurn)
{
  TicTacToeBoard T;
  T.toggleTurn();
	ASSERT_EQ(T.toggleTurn(), 'X');
}

TEST(TicTacToeBoardTest, threeTurn)
{
  TicTacToeBoard T;
  T.toggleTurn();
  T.toggleTurn();
	ASSERT_EQ(T.toggleTurn(), 'O');
}

TEST(TicTacToeBoardTest, onePlace)
{
  TicTacToeBoard T;
	ASSERT_EQ(T.placePiece(0, 0), 'X');
}

TEST(TicTacToeBoardTest, twoPlace)
{
  TicTacToeBoard T;
  T.placePiece(0, 0);
	ASSERT_EQ(T.placePiece(0, 1), 'O');
}

TEST(TicTacToeBoardTest, samePlaceX)
{
  TicTacToeBoard T;
  T.placePiece(0, 0);
	ASSERT_EQ(T.placePiece(0, 0), 'X');
}

TEST(TicTacToeBoardTest, samePlaceO)
{
  TicTacToeBoard T;
  T.placePiece(0, 0);
  T.placePiece(0, 1);
	ASSERT_EQ(T.placePiece(0, 1), 'X');
}

TEST(TicTacToeBoardTest, full)
{
  TicTacToeBoard T;
  T.placePiece(0, 0);
  T.placePiece(0, 2);
  T.placePiece(0, 1);
  T.placePiece(1, 0);
  T.placePiece(1, 2);
  T.placePiece(1, 1);
  T.placePiece(2, 0);
  T.placePiece(2, 2);
  T.placePiece(2, 1);
	ASSERT_EQ(T.placePiece(0, 0), 'O');
}