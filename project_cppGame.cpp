#include<iostream>
#include<ctime>
using namespace std;
class Game
{
private:
    char player,computer,c;
public:
    char Userchoice();
    char Ai();
    void Showchoice(char C);
    void Winner(char P,char C);
};

void Game:: Showchoice(char C)
{
    if(C=='R'||C=='r')
    {
        cout<<"CHOICE IS ROCK!";
    }
    else if(C=='p'||C=='P')
    {
        cout<<"CHOICE IS PAPER!";
    }
    else
    {
        cout<<"CHOICE IS SCISSORS!";
    }
}

char Game::Userchoice()
{
    do{
        cout<<endl<<"'r' for ROCK\n'p' for paper\n's'for scissors: \n";
        cin>>c;
    }while(c!='r' &&c!='p' && c!='s' );
     return c;
}

char Game::Ai()
{
    int num;
    srand(time(0));
    num=rand() % 3 + 1;
    switch(num)
    {
    case 1:
        return 'r';


        case 2:
        return 'p';


        case 3:
        return 's';

    }
}

void Game::Winner(char P,char C)
{
    switch(P)
    {
    case 'r':
        if(C=='r')
        {
            cout<<"\nIT'S TIE!!";
        }
        else if(C=='p')
        {
            cout<<"\nYOU LOSE!!";
        }
        else
        {
            cout<<"\nYOU WIN!!";
        }
        break;

        case 'p':
        if(C=='p')
        {
            cout<<"\nIT'S TIE!!";
        }
        else if(C=='s')
        {
            cout<<"\nYOU LOSE!!";
        }
        else
        {
            cout<<"\nYOU WIN!!";
        }
        break;


        case 's':
        if(C=='s')
        {
            cout<<"\nIT'S TIE!!";
        }
        else if(C=='r')
        {
            cout<<"\nYOU LOSE!!";
        }
        else
        {
            cout<<"\nYOU WIN!!";
        }
        break;
    }
}


int main()
{
    char User,AI,c,y;
    Game call;
    do{
    cout<<"\nS$$TONE PAPER SCISSORS GAME$$"<<endl;
    User=call.Userchoice();
    cout<<"\nYOUR ";
    call.Showchoice(User);
    AI=call.Ai();
    cout<<"\nCOMPUTER's ";
    call.Showchoice(AI);
    call.Winner(User,AI);
    cout<<endl;
    cout<<endl<<"PRESS Y TO CONTINUE...";
    cin>>y;
    }while(y=='y'||y=='Y');
    return 0;
}
