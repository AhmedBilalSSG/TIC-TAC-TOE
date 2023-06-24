#include <iostream>
using namespace std;
int final(char square[]);
int Table(char square[]);
int Display(){
cout<<"                                   *************************************************************************************************************"<<endl;
cout<<"                                   |                                                                                                           |"<<endl;
cout<<"                                   |  ||||||||   ||   ||||||||         ||||||||   ||||||||   ||||||||          ||||||||   ||||||||   ||||||||  |"<<endl;
cout<<"                                   |     ||      ||   ||                  ||      ||    ||   ||                   ||      ||    ||   ||        |"<<endl;
cout<<"                                   |     ||      ||   ||        ||||      ||      ||||||||   ||         ||||      ||      ||    ||   |||||     |"<<endl;
cout<<"                                   |     ||      ||   ||                  ||      ||    ||   ||                   ||      ||    ||   ||        |"<<endl;
cout<<"                                   |     ||      ||   ||||||||            ||      ||    ||   ||||||||             ||      ||||||||   ||||||||  |"<<endl;
cout<<"                                   |                                                                                                           |"<<endl;
cout<<"                                   *************************************************************************************************************"<<endl;
}


int Table(char square[10]){
    cout << endl;
    cout << "                                                                     _____________________________________"<<endl;
    cout << "                                                                     |           |           |           |" << endl;
    cout << "                                                                     |           |           |           |" << endl;
    cout << "                                                                     |     " << square[1] << "     |     "<<square[2]<<"     |     " << square[3] << "     |     "<<endl;
    cout << "                                                                     |           |           |           |" << endl;
    cout << "                                                                     |___________|___________|___________|" << endl;
    cout << "                                                                     |           |           |           |" << endl;
    cout << "                                                                     |           |           |           |" << endl;
    cout << "                                                                     |     " << square[4] << "     |     " << square[5] << "     |     "   << square[6] <<"     |     "<< endl;
    cout << "                                                                     |           |           |           |" << endl;
    cout << "                                                                     |___________|___________|___________|" << endl;
    cout << "                                                                     |           |           |           |" << endl;
    cout << "                                                                     |           |           |           |" << endl;
    cout << "                                                                     |     " << square[7] << "     |     " << square[8] << "     |     " << square[9] <<"     |     "<< endl;
    cout << "                                                                     |           |           |           |" << endl;
    cout << "                                                                     |___________|___________|___________|" << endl << endl;
} 

int final(char square[10])
{
    if (square[1] == square[2] && square[2] == square[3])

        return 1;
    else if (square[4] == square[5] && square[5] == square[6])

        return 1;
    else if (square[7] == square[8] && square[8] == square[9])

        return 1;
    else if (square[1] == square[4] && square[4] == square[7])

        return 1;
    else if (square[2] == square[5] && square[5] == square[8])

        return 1;
    else if (square[3] == square[6] && square[6] == square[9])

        return 1;
    else if (square[1] == square[5] && square[5] == square[9])

        return 1;
    else if (square[3] == square[5] && square[5] == square[7])

        return 1;
    else if (square[1] != '1' && square[2] != '2' && square[3] != '3' && square[4] != '4' && square[5] != '5' && square[6] != '6' && square[7] != '7' && square[8] != '8' && square[9] != '9')
        return 0;
    else
        return -1;
}

int main(){
char square[10] = {'o','1','2','3','4','5','6','7','8','9'};
int player = 1,i,choice;
int x;
cout<<"                                                            ----------------------------------------------------------    "<<endl;                    
cout<<"                                                             ________________________ MENU ___________________________    "<<endl;
cout<<"                                                           = |                                                       | =  "<<endl;
cout<<"                                                           = |            Click 0 to Play SinglePlayer               | =  "<<endl;
cout<<"                                                           = |                                                       | =  "<<endl;
cout<<"                                                           = |            Click 1 to Play MultiPlayer                | =  "<<endl;
cout<<"                                                           = |                                                       | =  "<<endl;
cout<<"                                                           = |            Click 2 to Exit                            | =  "<<endl;
cout<<"                                                           = |                                                       | =  "<<endl;
cout<<"                                                             |||||||||||||||||||||||||||||||||||||||||||||||||||||||||    "<<endl;
cout<<"                                                            -----------------------------------------------------------   "<<endl;   
cin>>x;
switch(x){
    case 0: if (x=1)
    cout<<Display();
    char c1[20];
    cout<<endl<<"Enter your Name :";
    cin>>c1;
    cout<<"                                                                 "<<c1<<" = X"<<"            VS             "<<"CPU = O" <<endl;
    
char mark;
do{
Table (square);

if(player%2==1)
player=1;
else
player=2;


// CPU
if(player==2){
cout << "CPU" << player<<endl;
cout<<endl;
choice=rand()%9;
mark='O';
int turn=1;
int placed=0;
while(placed==0)
{
if (choice == 1 && square[1] == '1'){
square[1] = mark;
placed=1;
}
else if (choice == 2 && square[2] == '2'){

square[2] = mark;
placed=1;
}
else if (choice == 3 && square[3] == '3'){

square[3] = mark;
placed=1;
}
else if (choice == 4 && square[4] == '4'){

placed=1;
square[4] = mark;
}
else if (choice == 5 && square[5] == '5'){

square[5] = mark;
placed=1;
}
else if (choice == 6 && square[6] == '6'){

square[6] = mark;
placed=1;
}
else if (choice == 7 && square[7] == '7'){

square[7] = mark;
placed=1;
}
else if (choice == 8 && square[8] == '8'){

square[8] = mark;
placed=1;
}
else if (choice == 9 && square[9] == '9'){

square[9] = mark;
placed=1;
}

else
{
choice=rand()%9;
}
}
i=final(square);
player++;
Table(square);
}
// player 1
else if(player==1)
{
cout << c1 << " enter a number:  ";
cin >> choice;
mark='X';

if (choice == 1 && square[1] == '1')

square[1] = mark;
else if (choice == 2 && square[2] == '2')

square[2] = mark;
else if (choice == 3 && square[3] == '3')

square[3] = mark;
else if (choice == 4 && square[4] == '4')

square[4] = mark;
else if (choice == 5 && square[5] == '5')

square[5] = mark;
else if (choice == 6 && square[6] == '6')

square[6] = mark;
else if (choice == 7 && square[7] == '7')

square[7] = mark;
else if (choice == 8 && square[8] == '8')

square[8] = mark;
else if (choice == 9 && square[9] == '9')

square[9] = mark;
else
{
cout<<"Invalid move ";
player--;
}
i=final(square);
player++;
}
}
while(i==-1);
 if (player==1){
        cout<<"Cpu"<<" ";
        }
        else if(player==2){
        cout<<c1<<" ";
        }
if(i==1)
cout<<player<<"                                                                           |--| Won the Game |--|"<<endl;
else
cout<<"                                                                                     |--| GAME DRAW |--|";
break;


case 1:if(x=1){
    cout<<Display();
    cout<<endl<<"NOTE:Player Name should be only 20 Character"<<endl;
    char name1[20],name2[20];

   cout<<"Enter Name of Player 1: "; 
   cin>>name1;

   cout<<"Enter Name of Player 2: ";
   cin>>name2;

    cout<<"                                                                 "<<name1<<" = X"<<"            VS             "<<name2<<" = O" <<endl;
    Table(square);
	int player = 1,i,choice;
    char mark;
    do
    {
        Table(square);
        player=(player%2)?1:2;
        if (player==1){
        cout<<name1<<" ";
        }
        else if(player==2){
        cout<<name2<<" ";
        }
        cout<< player << " enter a number where you want to Mark:  ";
        cin >> choice;

        mark=(player == 1) ? 'X' : 'O';

        if (choice == 1 && square[1] == '1')

            square[1] = mark;
        else if (choice == 2 && square[2] == '2')

            square[2] = mark;
        else if (choice == 3 && square[3] == '3')

            square[3] = mark;
        else if (choice == 4 && square[4] == '4')

            square[4] = mark;
        else if (choice == 5 && square[5] == '5')

            square[5] = mark;
        else if (choice == 6 && square[6] == '6')

            square[6] = mark;
        else if (choice == 7 && square[7] == '7')

            square[7] = mark;
        else if (choice == 8 && square[8] == '8')

            square[8] = mark;
        else if (choice == 9 && square[9] == '9')

            square[9] = mark;
        else
        {
            cout<<"Invalid move ";
            player--;
        }
        i=final(square);

        player++;
    }
    while(i==-1);
    Table(square);
    if (player==1){
        cout<<name1<<" ";
        }

        else if(player==2){
        cout<<name2<<" ";
        }
    if(i==1)

    cout<<player<<"                                                                     |--| Won the Game |--|"<<endl;
    else
        cout<<"                                                                           |--| GAME DRAW |--|";
    }
    break;

    case 2:
    cout<<"Exited"<<endl;
    break;
    default:
    cout<<"You have Chosen a Wrong Option"<<endl;
    
}
    system("pause");
    return 0;
}