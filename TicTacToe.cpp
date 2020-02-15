#include <vector>
#include <iostream>
using namespace std; 
/* Luke Favret and Daisy Flotron
This program is a simple game of tic tac toe */

//Tic Tac Toe (Symbolic) board is made of an array of these classes
enum class SquareType { X, O, Empty}; 

//displays the board with number values in positions to make move selection easier
void displayNumBoard() 
{
    int arr[3][3]={1,2,3,4,5,6,7,8,9}; 
    for (int i=0; i<3;  i++) {
        for (int j=0; j<3; j++) {
            cout<<" "<<arr[i][j]<<" |"; 
        }
        cout<<endl;
    }
}

//used to manage game playing and the board 
class Board {
public: 
    Board(); 
    void CreateBoard(); 
    void DisplayBoard(); 
    void GetPlayerChoice(); 
    bool PlaceMarker(int player); 
private: 
    SquareType board_[3][3]; 
    int rows_; 
    int columns_; 
    int move_; 
    int player_; //1 = X : 2 = 0 

}; 
Board::Board() //constructor, creates board using nested for, sets board to empty 
{
    rows_=3; 
    columns_=3; 
    move_=0; 
    player_=' '; 
    for(int i = 0; i < rows_; i ++){ //Set all values in board to Empty
        cout<<"in for 1"; 
        for(int j = 0; j < columns_; j++){
            board_[i][j] = SquareType::Empty;
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

/*Prints the board in symbolic form*/
void Board::DisplayBoard() 
{
    SquareType val; 
    for (int i=0; i<3; i++){
        for (int  j=0;  j<3; j++) {
            val=board_[i][j]; 
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

/*Prompts user to state which player they are, then displays a number board 
corresponding to spots on the symbolic board, then prompts suer to pick spot to move*/
void Board::GetPlayerChoice() 
{
    char ans; 
    int playerMove; 
    int input; //holds users imput is x or 0
        cout<<"Please enter 1 for X and 2 for O"<<endl; 
        cin>>input; 
        if (input==1)
        {
            cout<<"in if"<<endl;
            player_=1; 
        }
        if (input==2)
        {
            player_=2; 
        }
        cout<<"player is "<<player_<<endl;
        
        cout<<"Please make a valid sqare selection, input corresponding number value"<<endl;
        displayNumBoard(); 
        cin>>playerMove; 
        move_=playerMove; 
        bool TF; 
        TF=PlaceMarker(player_); 
        DisplayBoard();
        cout<<"move is "<<move_<<endl;
        cout<<"player is "<<player_<<endl;
        if (TF==true)
        {
            cout<<"Move sucessfully made"<<endl;
        }
        else if (TF==false) 
        {
            cout<<"Error, move not made"<<endl;
        }
        //DisplayBoard(); 
        return; 

}

//moves and X or O on the board in the diesired postion of user from getplayerchoice function
bool Board::PlaceMarker (int player){
   // cout<<"in PM"<<endl; test 
    //DisplayBoard(); 
    // switch statement to put approperiate X or O into correct position inputted by user, returns true when set
    switch (move_) {
    case 1: {
        if (player==1) {
        board_[0][0]=SquareType::X; 
        return true; }
        if (player==2) {
            board_[0][0]=SquareType::O;
            return true;
        }
    }
     case 2: {
        if (player==1) {
        board_[0][1]=SquareType::X; 
        return true; }
        if (player==2) {
            board_[0][1]=SquareType::O; 
            return true;
        }
    }
     case 3:  {
        if (player==1) {

        board_[0][2]=SquareType::X; 
        return true; }
        if (player==2) {
            board_[0][2]=SquareType::O; 
            return true;
        }
    case 4:   {
        if (player==1) {
        board_[1][0]=SquareType::X; 
        return true; }
        if (player==2) {
            board_[1][0]=SquareType::O; 
            return true;
        }
    }
    case 5: {
        if (player==1) {
        board_[1][1]=SquareType::X; 
        return true; }
        if (player==2) {
            board_[1][1]=SquareType::O; 
            return true;
        }
    }
    case 6: {
        if (player==1) {
        board_[1][2]=SquareType::X; 
        return true; }
        if (player==2) {
            board_[1][2]=SquareType::O; 
            return true;
        }
    }
    case 7:  {
        if (player==1) {
        board_[2][0]=SquareType::X; 
        return true; }
        if (player==2) {
            board_[2][0]=SquareType::O; 
            return true;
        }
    }
    case 8: {
        if (player==1) {
        board_[2][1]=SquareType::X; 
        return true; }
        if (player==2) {
            board_[2][1]=SquareType::O; 
            return true;
        }
    }
    case 9: {
        if (player==1) {
        board_[2][2]=SquareType::X; 
        return true; }
        if (player==2) {
            board_[2][2]=SquareType::O; 
            return true;
        }
    }

    }
}
    return false; //returns false if playee input no (0-9)
    
}
int main() {

    Board game; 
    game.DisplayBoard(); //displays blank board 
    cout<<"Hello, welcome to TicTacToe"<<endl;
    game.GetPlayerChoice(); 
    //small for to handle turn taking for game calling class functions

    game.GetPlayerChoice(); //hard coded to go back and fourth until one player can win 
    game.GetPlayerChoice(); 
    game.GetPlayerChoice(); 
    game.GetPlayerChoice(); 
    game.GetPlayerChoice(); 
    
     
    
    //PlaceMarker(move, person); 

}