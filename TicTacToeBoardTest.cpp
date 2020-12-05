/**
 * Unit Tests for TicTacToeBoard
**/

#include <gtest/gtest.h>
#include "TicTacToeBoard.h"
#include <iostream> 
class TicTacToeBoardTest : public ::testing::Test
{
	protected:
		TicTacToeBoardTest(){} //constructor runs before each test
		virtual ~TicTacToeBoardTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor) 
};

// EXAMPLE TEST FORMAT
TEST(TicTacToeBoardTest, unitTestName)
{
	TicTacToeBoard Board;
	ASSERT_TRUE(0==Board.toggleTurn());
}
TEST(TicTacToeBoardTest, invalidPlace)
{
	TicTacToeBoard testBoard;
	ASSERT_EQ(testBoard.placePiece(4,1), Invalid);
}
TEST(TicTacToeBoardTest, validPlace)
{
	TicTacToeBoard testBoard;
	ASSERT_EQ(testBoard.placePiece(2,1), Invalid);
}
TEST(TicTacToeBoard, boardDraw)
{
	TicTacToeBoard board; 
	board.placePiece(0,2);
	board.placePiece(1,2);
	board.placePiece(1,0);
	board.placePiece(2,1);
	board.placePiece(0,0);
	board.placePiece(0,1);
	board.placePiece(1,1);
	board.placePiece(2,2);
	board.placePiece(2,0);

	ASSERT_EQ(board.getWinner(), Blank);

}
TEST(TicTacToeBoard, incomplete_boardDraw)
{
	TicTacToeBoard board; 
	board.placePiece(0,2);
	board.placePiece(1,2);
	board.placePiece(1,0);
	board.placePiece(2,1);
	board.placePiece(0,0);
	board.placePiece(0,1);
	board.placePiece(1,1);

	ASSERT_EQ(board.getWinner(), Blank);

}


