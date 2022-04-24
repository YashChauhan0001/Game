#include <iostream>
#include <stdlib.h>
#include <process.h>
#include <conio.h>
#include <stdio.h>
#include <string>
using namespace std;

void art()
{


cout<<" _____         _            _                                     _"<<endl;
cout<<"| __  |___ _ _|_|___ ___   | |_ ___ _ _ ___ ___ ___ _____ ___ ___| |_"<<endl;
cout<<"| __ -| . |_'_| |   | . |  |  _| . | | |  _|   | .'|     | -_|   |  _|"<<endl;
cout<<"|_____|___|_,_|_|_|_|_  |  |_| |___|___|_| |_|_|__,|_|_|_|___|_|_|_|  "<<endl;
cout<<"                    |___|                                             "<<endl;
cout<<endl;

}
class atk
{
    int attack;
    int damage;
public: int atck();
}a;
int atk::atck()
 {
     cout<<"Choose your attack..."<<endl;
     cout<<"1.Fist Hammer\t2.Upper Cut\t3.Twister(Special move)"<<endl;
     cin>>attack;
     switch(attack)
     {
	 case 1:damage=(rand()%9)+5;
		break;
	 case 2:damage=(rand()%13)+10;
		break;
	 case 3:damage=(rand()%19)+16;
		break;
	 default:cout<<"ILLEGAL MOVE...!!!\tYOU ARE DISQUALIFIED"<<endl;
		 exit(0);
     }
      return damage;
 }
class def
{
    int Defense;
    int damage;
public:
int defnc();
}d;
int def::defnc()
{

     cout<<"Choose your Defense..."<<endl;
     cout<<"1.Block\t2.Duck"<<endl;
     cin>>Defense;
     switch(Defense)
     {
	 case 1:damage=(rand()%8)+5;
		break;
	 case 2:damage=(rand()%5)+2;
		break;
	 default:cout<<"ILLEGAL MOVE...!!!\tYOU ARE DISQUALIFIED"<<endl;
		 exit(0);
     }
      return damage;
}
void art1()
{
cout<<" _______ ___ _______ _______ _______ _______ _______ _______ _______ "<<endl;
cout<<"|       |   |       |       |   _   |       |       |       |       |"<<endl;
cout<<"|_     _|   |       |_     _|  |_|  |       |_     _|   _   |    ___|"<<endl;
cout<<"  |   | |   |       | |   | |       |       | |   | |  | |  |   |___ "<<endl;
cout<<"  |   | |   |      _| |   | |       |      _| |   | |  |_|  |    ___|"<<endl;
cout<<"  |   | |   |     |_  |   | |   _   |     |_  |   | |       |   |___ "<<endl;
cout<<"  |___| |___|_______| |___| |__| |__|_______| |___| |_______|_______|"<<endl;
}

char board[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
void gameplay(char mark_x_o, int box_no,int player)
{   cout << "Player " << player << ", enter a box number to mark x/o: ";
    cin >> box_no;
    while (cin.fail() || box_no < 1 || box_no > 9 || box_no!=board[box_no]-'0')
    {
	cin.clear();
	cin.ignore();
	cout << "Invalid Move!" << endl;
	cout << "Player " << player << ", enter a number to mark_x_o: ";
	cin >> box_no;
    }

    mark_x_o = player == 1 ? 'X' : 'O';

    if (box_no == 1 && board[1] == '1')
	board[1] = mark_x_o;

    else if (box_no == 2 && board[2] == '2')
	board[2] = mark_x_o;

    else if (box_no == 3 && board[3] == '3')
	board[3] = mark_x_o;

    else if (box_no == 4 && board[4] == '4')
	board[4] = mark_x_o;

    else if (box_no == 5 && board[5] == '5')
	board[5] = mark_x_o;

    else if (box_no == 6 && board[6] == '6')
	board[6] = mark_x_o;

    else if (box_no == 7 && board[7] == '7')
	board[7] = mark_x_o;

    else if (box_no == 8 && board[8] == '8')
	board[8] = mark_x_o;

    else if (box_no == 9 && board[9] == '9')
	board[9] = mark_x_o;
}
int check_win()
{
	if (board[1] == board[2] && board[2] == board[3])
		return 1;

	else if (board[4] == board[5] && board[5] == board[6])
		return 1;

	else if (board[7] == board[8] && board[8] == board[9])
		return 1;

	else if (board[1] == board[4] && board[4] == board[7])
		return 1;

	else if (board[2] == board[5] && board[5] == board[8])
		return 1;

	else if (board[3] == board[6] && board[6] == board[9])
		return 1;

	else if (board[1] == board[5] && board[5] == board[9])
		return 1;

	else if (board[3] == board[5] && board[5] == board[7])
		return 1;

	else{
	int flag = 1;
	for (int i=1;i<9;i++)
	{ if (i==board[i]-'0')
	    {  flag=0;
		break;
	    }
	}

		if (flag==1) return 0;
    }

	return -1;
}
void board_status()
{    cout << endl;
	cout << "Player 1(X) & Player 2 (O)" << endl << endl;

	cout << "       |       |       " << endl;

	cout << "      " << board[1] << "|      " << board[2] << "|     " << board[3] << endl;

	cout << "_______|_______|________" << endl;
	cout << "       |       |        " << endl;

	cout << "      " << board[4] << "|      " << board[5] << "|     " << board[6] << endl;

	cout << "_______|_______|________" << endl;
	cout << "       |       |        " << endl;

	cout << "      " << board[7] << "|      " << board[8] << "|     " << board[9] << endl;

	cout << "       |       |        " << endl << endl;
}
void title()
{ system("color 0A");
system("CLS");
cout<<" _______  _______  __   __  _______  ___      _______  __    _  ______ "<<endl;
cout<<"|       ||   _   ||  |_|  ||       ||   |    |   _   ||  |  | ||      |   "<<endl;
cout<<"|    ___||  |_|  ||       ||    ___||   |    |  |_|  ||   |_| ||  _    |  "<<endl;
cout<<"|   | __ |       ||       ||   |___ |   |    |       ||       || | |   |  "<<endl;
cout<<"|   ||  ||       ||       ||    ___||   |___ |       ||  _    || |_|   |  "<<endl;
cout<<"|   |_| ||   _   || ||_|| ||   |___ |       ||   _   || | |   ||       |  "<<endl;
cout<<"|_______||__| |__||_|   |_||_______||_______||__| |__||_|  |__||______|  "<<endl;


}
void F()
{ system("color E1");
    system("CLS");char name[40];
     art();
    int flag=0,hop=100,hoo=100,damp,damo,ch,ch1;
    cout<<"Enter your name Player:\t";
    cin>>name;
    cout<<name<<"'s health:100 [A][N][D] Opponent's health:100"<<endl;
    cout<<endl<<"Choose your opponent:"<<endl;
    cout<<"1.)Bucky   2.)Jim  3.)Steve   4.)Manny"<<endl;
    cin>>ch;
    system("color E1");
    system("CLS");
    switch(ch)
    {
       O1:case 1:cout<<"-------------------------------------"<<endl;
		cout<<name<<"\tVS\tBucky"<<endl;
	       cout<<"What do you want to do?"<<endl;
	       cout<<"1.Attack\t2.Defense"<<endl;
	       cin>>ch1;
	       switch(ch1)
	       {
		   case 1:damp=a.atck();
			  damo=(rand()%damp)+damp-1;
			if(hop<=damp)
			  {
			      cout<<"<<<<YOU ARE DEAD.>>>>"<<name<<endl;
			      exit(0);
			  }
			   if(hoo<=damo)
			  {
			      cout<<"YOU WIN.."<<name<<endl;
			      break;
			  }
			  if(hop>damp)
			  {
			      hop=hop-damp;
			      hoo=hoo-damo;
			      cout<<"YOUR HEALTH:\t"<<hop<<"  OPPONENT'S HEALTH:\t"<<hoo<<endl;
			      goto O1;
			  }
			  break;
		    case 2:damp=d.defnc();
			   damo=(rand()%8)+3;
			   if(hop<=damp)
			  {
			      cout<<"<<<<YOU ARE DEAD.>>>>"<<name<<endl;
			      exit(0);
			  }
			   if(hoo<=damo)
			  {
			    cout<<"YOU WIN.."<<name<<endl;
			      break;
			  }
			  if(hop>damp)
			  {
			      hop=hop-damp;
			      hoo=hoo-damo;
			      cout<<"YOUR HEALTH:\t"<<hop<<"  OPPONENT'S HEALTH:\t"<<hoo<<endl;
			      goto O1;
			  }
			  break;
	       }
	       break;
	    O2:case 2:cout<<"-------------------------------------"<<endl;
	    cout<<name<<"\tVS\tP.E.K.A"<<endl;
	       cout<<"What do you want to do?"<<endl;
	       cout<<"1.Attack\t2.Defense"<<endl;
	       cin>>ch1;
	       switch(ch1)
	       {
		   case 1:damp=a.atck();
			  damo=(rand()%damp)+damp-1;
			  if(hop<=damp)
			  {
			      cout<<"<<<<YOU ARE DEAD.>>>>"<<name<<endl;
			      exit(0);
			  }
			   if(hoo<=damo)
			  {
			     cout<<"YOU WIN.."<<name<<endl;
			      break;
			  }
			  if(hop>damp)
			  {
			      hop=hop-damp;
			      hoo=hoo-damo;
			      cout<<"YOUR HEALTH:\t"<<hop<<"  OPPONENT'S HEALTH:\t"<<hoo<<endl;
			      goto O2;
			  }
			  break;
		    case 2:damp=d.defnc();
			   damo=(rand()%8)+3;
			   if(hop<=damp)
			  {
			      cout<<"<<<<YOU ARE DEAD.>>>>"<<name<<endl;
			      exit(0);
			  }
			   if(hoo<=damo)
			  {
			       cout<<"YOU WIN.."<<name<<endl;
			      break;
			  }
			  if(hop>damp)
			  {
			      hop=hop-damp;
			      hoo=hoo-damo;
			      cout<<"YOUR HEALTH:\t"<<hop<<"  OPPONENT'S HEALTH:\t"<<hoo<<endl;
			      goto O2;
			  }
			  break;
	       }
	       break;
	      O3:case 3:cout<<"-------------------------------------"<<endl;
	      cout<<name<<"\tVS\tSteve"<<endl;
	       cout<<"What do you want to do?"<<endl;
	       cout<<"1.Attack\t2.Defense"<<endl;
	       cin>>ch1;
	       switch(ch1)
	       {
		   case 1:damp=a.atck();
			  damo=(rand()%damp)+damp-1;
			  if(hop<=damp)
			  {
			      cout<<"<<<<YOU ARE DEAD.>>>>"<<name<<endl;
			      exit(0);
			  }
			   if(hoo<=damo)
			  {
			       cout<<"YOU WIN.."<<name<<endl;
			      break;
			  }
			  if(hop>damp)
			  {
			      hop=hop-damp;
			      hoo=hoo-damo;
			      cout<<"YOUR HEALTH:\t"<<hop<<"  OPPONENT'S HEALTH:\t"<<hoo<<endl;
			      goto O3;
			  }
			  break;
		    case 2:damp=d.defnc();
			   damo=(rand()%8)+3;
			   if(hop<=damp)
			  {
			      cout<<"<<<<YOU ARE DEAD.>>>>"<<name<<endl;
			      exit(0);
			  }
			   if(hoo<=damo)
			  {
			       cout<<"YOU WIN.."<<name<<endl;
			      break;
			  }
			  if(hop>damp)
			  {
			      hop=hop-damp;
			      hoo=hoo-damo;
			      cout<<"YOUR HEALTH:\t"<<hop<<"  OPPONENT'S HEALTH:\t"<<hoo<<endl;
			      goto O3;
			  }
			  break;
	       }
	       break;
	      O4:case 4:cout<<"-------------------------------------"<<endl;
	      cout<<name<<"\tVS\tThanos"<<endl;
	       cout<<"What do you want to do?"<<endl;
	       cout<<"1.Attack\t2.Defense"<<endl;
	       cin>>ch1;
	       switch(ch1)
	       {
		   case 1:damp=a.atck();
			  damo=(rand()%damp)+damp-1;
			  if(hop<=damp)
			  {
			      cout<<"<<<<YOU ARE DEAD.>>>>"<<name<<endl;
			      exit(0);
			  }
			   if(hoo<=damo)
			  {
			       cout<<"YOU WIN.."<<name<<endl;
			      break;
			  }
			  if(hop>damp)
			  {
			      hop=hop-damp;
			      hoo=hoo-damo;
			      cout<<"YOUR HEALTH:\t"<<hop<<"  OPPONENT'S HEALTH:\t"<<hoo<<endl;
			      goto O4;
			  }
			  break;
		    case 2:damp=d.defnc();
			   damo=(rand()%8)+3;
			   if(hop<=damp)
			  {
			      cout<<"<<<<YOU ARE DEAD.>>>>"<<name<<endl;
			      exit(0);
			  }
			   if(hoo<=damo)
			  {
			       cout<<"YOU WIN.."<<name<<endl;
			      break;
			  }
			  if(hop>damp)
			  {
			      hop=hop-damp;
			      hoo=hoo-damo;
			      cout<<"YOUR HEALTH:\t"<<hop<<"  OPPONENT'S HEALTH:\t"<<hoo<<endl;
			      goto O4;
			  }
			  break;
	       }
	       break;
	    default:cout<<"Wrong choice!!!!"<<endl;
		    exit(0);

    }
}
void T()
{
    system("color 9F");
    art1();
	int player = 1;
	int i, box_no;

	char mark_x_o;

    cout<<endl<<endl;

	do
	{       system("CLS");
		board_status();
		player = player % 2 ? 1 : 2;
	gameplay(mark_x_o,box_no,player);
		i = check_win();
		player++;

	}while (i == -1);

	board_status();
	 system("color ED");
      system("CLS");
	if (i == 1)
		{cout << "~~~Player " << --player << " Won" << endl;}
	else
		cout << "~~~Game Draw!~~~" << endl;
}
int main()
{system("CLS"); int sy;
 title();
 cout<<endl<<"Enter your choice of game:"<<endl;
 cout<<"1.)Boxing\t2.)TicTacToe"<<endl;
 cin>>sy;
 switch(sy)
 {
 case 1:system("CLS");
	F();
	break;
 case 2:system("CLS");
	T();
	break;
default:cout<<"Wrong choice!!!!!";
	 exit(0);
 }
 cout<<endl;
 system("PAUSE");
cout<<endl<<"I hope you enjoyed....see you next time"<<endl;
getch();
}
