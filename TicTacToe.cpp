#include <vector>
#include <iostream>
using namespace std; //We shouldn't use this technically 
/* Luke Favret and Daisy Flotron
This program is a simple game of tic tac toe */


enum class SquareType { X, O, Empty};

void DisplayBoard()
{
    SquareType board[3][3]; 
    SquareType val; 
    for (int i=0; i<3; i++){
        for (int  j=0;  j<3; j++) {
            val=board[i][j]; 
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
SquareType* CreateBoard(int rows, int columns){ //arrays passed by ref so no need to return it 
    SquareType board[3][3]; //= new SquareType;
    for(int i = 0; i < rows; i ++){ //Set all values in board to Empty
        for(int j = 0; j < columns; j++){
            board[i][j] = SquareType::Empty;
        }
    }
    //return board[3][3];
}


int main(){
    int rows = 3;
    int columns = 3;

    SquareType* board = CreateBoard(rows, columns);
    DisplayBoard(); 
}