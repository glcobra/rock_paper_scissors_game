#include <iostream>
#include <ctime>


using namespace std;


char getUserChoice()
{
    char player;
    cout<<"ROCK, PAPER, SCISSORS GAME!\n";
    do{
    cout<<"***************************\n";
    cout<<"Choose 1 from the following choices!\n";
    cout<<"'r' for rock\n";
    cout<<"''p' for paper\n";
    cout<<"'s' for scissors\n";
    cout<<"'e' for exit\n";
    cin>>player;
}
while(player!='r'&&player!='p'&&player!='s');
return player;
}
char getComputerChoice(){
srand(time(0));
int num=rand()%3+1;
switch(num)
{
    case 1: return'r';
    break;
    case 2: return's';
    break;
    case 3: return'p';
    break;
}
}
void showChoice(char choice){
switch(choice)
{
   case 'r':
       cout<<"Rock\n";
       break;
   case 'p':
    cout<<"Paper\n";
    break;
   case 's':
    cout<<"Scissors\n";
    break;
}
}
void chooseWinner(char player, char computer)
{
   switch(player)
   {
   case'r':
    if(computer=='r')
        cout<<"Tie\n";
    else if(computer=='s')
        cout<<"You win!\n";
    else
        cout<<"Computer win, more luck next time!\n";
    break;
   case'p':
    if(computer=='p')
        cout<<"Tie\n";
    else if(computer=='r')
        cout<<"You win!\n";
    else
        cout<<"Computer win, more luck next time!\n";
    break;
   case's':
    if(computer=='s')
        cout<<"Tie\n";
    else if(computer=='p')
        cout<<"You win!\n";
    else
        cout<<"Computer win, more luck next time!\n";
    break;
}
}
int main()
{
    char player;
    char computer;
    player=getUserChoice();
    cout<<"Your choice is: ";
    showChoice(player);
    computer=getComputerChoice();
    cout<<"Computer choice is:";
    showChoice(computer);
    chooseWinner(player, computer);
    return 0;
}
//char getUserChoice();
//char getComputerChoice();
//void showChoice(char choice);
//void chooseWinner(char player, char computer);
