#include <vector>
#include <iostream>
using namespace std; 
/* Luke Favret and Daisy Flotron
This program is a simple game of tic tac toe */


enum class SquareType { X, O, Empty};

void displayNumBoard() //displays the board with number values in positions to make move selection easier
{
    int arr[3][3]={1,2,3,4,5,6,7,8,9}; 
    for (int i=0; i<3;  i++) {
        for (int j=0; j<3; j++) {
            cout<<" "<<arr[i][j]<<" |"; 
        }
        cout<<endl;
    }
}

class Board {
public: 
    Board(); 
    void CreateBoard(); 
    void DisplayBoard(); 
    void GetPlayerChoice(); 
    bool PlaceMarker(int player); 
private: 
    SquareType board[3][3]; 
    int rows; 
    int columns; 
    int move; 
    int player; //1 = X : 2 = 0 

}; 
Board::Board()
{
    int rows=3; 
    int columns=3; 
    int move=0; 
    char player=' '; 
    for(int i = 0; i < rows; i ++){ //Set all values in board to Empty
        cout<<"in for 1"; 
        for(int j = 0; j < columns; j++){
            board[i][j] = SquareType::Empty;
            cout<<"in for"; 
        }
    }
}

//Creates board and sets all spots to Empty. Returns pointer to board.
void Board::CreateBoard(){ //arrays passed by ref so no need to return it 
    cout<<"in CB"<<endl;
                            //had to move for loops into constructor 
    //return board[3][3];
}
void Board::DisplayBoard() //arrays passed by ref so correct vals are printed
{
    SquareType val; 
    for (int i=0; i<3; i++){
        for (int  j=0;  j<3; j++) {
            val=board[i][j]; 
            if (val==SquareType::Empty) {
                cout<<"   |"; 
            }
            else if (val==SquareType::O) {
                cout<<" O |"; 
            }
            else if (val==SquareType::X) {
                cout<<" X |"; 
            }

        }
        cout<<endl;
    }
}

void Board::GetPlayerChoice() //prompts user to determine wheater 
{
    char ans; 
    int playerMove; 
    int input; //holds users imput is x or 0
        cout<<"Please enter if player X or 0, enter 1 for X and 2 for O"<<endl; 
        cin>>input; 
        if (input==1)
        {
            cout<<"in if"<<endl;
            player=1; 
        }
        if (input==2)
        {
            player=2; 
        }
        cout<<"player is "<<player<<endl;
        DisplayBoard();
        cout<<"Please make a valid sqare selection, input corresponding number value"<<endl;
        displayNumBoard(); 
        cin>>playerMove; 
        move=playerMove; 
        bool TF; 
        TF=PlaceMarker(player); 
        cout<<"move is "<<move<<endl;
        cout<<"player is "<<player<<endl;
        if (TF==true)
        {
            cout<<"Move sucessfully made"<<endl;
        }
        else if (TF==false) 
        {
            cout<<"Error, move not made"<<endl;
        }
        DisplayBoard(); 
        return; 

}


bool Board::PlaceMarker (int player){
    cout<<"in PM"<<endl;
    //DisplayBoard(); 
    if (move==1) {
        if (player==1) {
        board[0][0]=SquareType::X; 
        return true; }
        if (player==2) {
            board[0][0]=SquareType::O;
            return true;
        }
    }
     if (move==2) {
        if (player==1) {
        board[0][1]=SquareType::X; 
        return true; }
        if (player==2) {
            board[0][1]=SquareType::O; 
            return true;
        }
    }
     if (move==3) {
        if (player==1) {

        board[0][2]=SquareType::X; 
        return true; }
        if (player==2) {
            board[0][2]=SquareType::O; 
            return true;
        }
    if (move==4) {
        if (player==1) {
        board[1][0]=SquareType::X; 
        return true; }
        if (player==2) {
            board[1][0]=SquareType::O; 
            return true;
        }
    }
    if (move==5) {
        if (player==1) {
        board[1][1]=SquareType::X; 
        return true; }
        if (player==2) {
            board[1][1]=SquareType::O; 
            return true;
        }
    }
    if (move==6) {
        if (player==1) {
        board[1][2]=SquareType::X; 
        return true; }
        if (player==2) {
            board[1][2]=SquareType::O; 
            return true;
        }
    }
    if (move==7) {
        if (player==1) {
        board[2][0]=SquareType::X; 
        return true; }
        if (player==2) {
            board[2][0]=SquareType::O; 
            return true;
        }
    }
    if (move==8) {
        if (player==1) {
        board[2][1]=SquareType::X; 
        return true; }
        if (player==2) {
            board[2][1]=SquareType::O; 
            return true;
        }
    }
    if (move==9) {
        if (player==1) {
        board[2][2]=SquareType::X; 
        return true; }
        if (player==2) {
            board[2][2]=SquareType::O; 
            return true;
        }
    }

    }
    return false; 
    
}
int main() {

    Board game; 
    game.CreateBoard();
    game.DisplayBoard(); 
    cout<<"Hello, welcome to TicTacToe"<<endl;
    game.GetPlayerChoice(); 
     
    
    //PlaceMarker(move, person); 
}