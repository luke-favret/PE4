Daisy Flotron and Luke Favret 
PE4
TicTacToe.cpp 

Uses board class to impliment required functions. 
void CreateBoard(); 
void DisplayBoard(); 
void GetPlayerChoice(); 
bool PlaceMarker(int player); 

This is a very simple tic tac toe game where users can choose to fill the board as the like to play the game. 
GetPlayerCHoice is called from main and after it take in players input choice and assigns the move private member of board
then GPC calls PlaceMaker directly and placmaker returns true is value is set and false if value not set. 
This will continue until game has been won. 