#include <iostream>
/* Luke Favret and Daisy Flotron
This program is a simple game of tic tac toe */


enum class SquareType { X, O, Empty};


//Creates board and sets all spots to Empty. Returns pointer to board.
SquareType* CreateBoard(int rows, int columns){
    SquareType board[3][3] = new SquareType;
    for(int i = 0; i < rows; i ++;){ //Set all values in board to Empty
        for(int j = 0; j < columns; j++;){
            board[i][j] = SquareType::Empty;
        }
    }
    return board;
}

void DisplayBoard(SquareType* board, int row, int cols){
    for(int i = 0; i < rows; i ++){
        for(int j = 0; j < cols; j++){
            std::string print_val;
            switch(board[i][j]){ //Switches are compact if statements. If board[i][j] == Squaretype::whatevs: do thing
                case SquareType::Empty: print_val = "  ";
                case SquareType::O: print_val = "O";
                case SquareType::X: print_val = "X";
            }
            std::cout<<print_val;
        }
        std::cout<<std::endl; //end row
    }

}

int main(){
    int rows = 3;
    int columns = 3;

    SquareType* board = CreateBoard(rows, columns);
}






