#include<iostream>
using namespace std;

char square[10] = {'0','1','2','3','4','5','6' ,'7', '8', '9'};

int checkwin();
void board();

int main(){

    int player = 1, i, choice;
    char mark;
    do{
        board();
        player = (player%2)?1:2;

        cout << "Player" << player << ", enter a number: ";
        cin >> choice;

        mark=(player==1)?'X':'O';
        

    }(i==-1)
}