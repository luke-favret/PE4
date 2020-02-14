#include <vector>
#include <iostream>
using namespace std; //We shouldn't use this technically 
/* Luke Favret and Daisy Flotron
This program is a simple game of tic tac toe */


enum class SquareType { X, O, Empty};

void DisplayBoard(SquareType* board)
{ 
    SquareType val; 
    for (int i=0; i<3; i++){
        for (int  j=0;  j<3; j++) {
            val=board[i * 3 + j]; 
            if (val==SquareType::X) {
                cout<<" X |"; 
            }
            if (val==SquareType::O) {
                cout<<" 0 |"; 
            }
            if (val==SquareType::Empty) {
                cout<<"   |"; 
            }

        }
        cout<<endl;
    }
}
//Creates board and sets all spots to Empty. Returns pointer to board.
//Because of how declaring an array on the heap works, we can't do array[i][j]
//Instead we declare a 1d array and then pretend it's 2d
//Where each row consists of # of columns elements
//So to access something in row 2, column 1 we do array[2 * 3 + 1]
SquareType* CreateBoard(){  
    SquareType* board = new SquareType[3 * 3]; //creates 
    for(int i = 0; i < 3; i ++){ //Set all values in board to Empty
        for(int j = 0; j < 3; j++){
            board[i*3 + j] = SquareType::Empty;
        }
    }
    return board;
}

//sets spot to entered SquareType
void PlaceMarker(int row, int col, SquareType move, SquareType* board){
    board[row * 3 + col] = move;
}


int main(){

    SquareType* board = CreateBoard();
    DisplayBoard(board); 
}