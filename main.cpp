#include <iostream>
#include <string>
#include <cstring>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
   cout<<"---------menu--------"<<endl;
    cout<<"press 1 to play the game."<<endl;
    cout<<"press 2 for help"<<endl;
    cout<<"press 0 to exit"<<endl;
   int menu;
    cin>>menu;
    switch(menu)
    {
case 1 :
    {
    cout<<"lets play a game! \n rock,paper ,scissor!"<<endl;
    game:
char user;
cout<<endl<<"choose: r , p , s"<<endl;
cin>>user;cout<<"you: "<<user<<endl;
//letting the computer randomly choose
    char cch;
    char ch;
    srand(time(0));
    char letters[]="rsp";
    cch=letters[rand()%3];
    ch=cch;
    cout<<"computer: "<< ch<<endl;

if(user == 'r' && ch =='r')
    {
    cout<<endl<<"tied"<<endl;
    goto game;
    }
else if(user =='r'&& ch=='p')
    {
    cout<<endl<<"computer won!"<<endl;
    goto game;
    }
else if(user =='r'&& ch=='s')
    {
    cout<<endl<<"you won!"<<endl;
    goto game;
    }
    else if(user =='p'&& ch=='p')
    {
    cout<<endl<<"tied!"<<endl;
    goto game;
    }
    else if(user =='p'&& ch=='r')
    {
    cout<<endl<<"you won"<<endl;
    goto game;
    }
    else if(user =='p'&& ch=='s')
    {
    cout<<endl<<"computer won!"<<endl;
    goto game;
    }
    else if(user =='s'&& ch=='s')
    {
    cout<<endl<<"tied"<<endl;
    goto game;
    }
    else if(user =='s'&& ch=='p')
    {
    cout<<endl<<"you won!"<<endl;
    goto game;
    }
    else if(user =='s'&& ch=='r')
    {
    cout<<endl<<"computer won!"<<endl;
    goto game;}
    else{
        cout<<endl<<"please enter the right letter!!"<<endl;
        goto game;
    }
    break;
    }
case 2 :
    cout<<"how to play the game\n 1.Each round,each of two players simultaneously chooses between Rock, Paper and Scissors."<<endl;
 cout<<"2. If they choose the same, the game is a tie"<<endl;
   cout<<"3. Paper beats rock (covering rock)."<<endl;
   cout<<"4. Rock beats scissors (crushing scissors)."<<endl;
    cout<<"5. Scissors beats paper (cutting paper)."<<endl;
  cout<<"6. A player wins a round by throwing a winning symbol."<<endl;
cout<<" I wish you good luck!";
    break;
    case 0:
    cout<<"game exited";
    break;
    }
 return 0;
}
