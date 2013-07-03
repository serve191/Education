#include "cubs.h"


void gotoxy(short x, short y)
{
    COORD coord = {x, y};
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(h, coord);
}

using namespace std;

enum ConsoleColor {Black, Blue, Green, Cyan, Red, Magenta, Brown, LightGray, DarkGray, LightBlue, 
LightGreen, LightCyan, LightRed, LightMagenta, Yellow, White };

void SetColor(int text, int background=Black)
{
     HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
     SetConsoleTextAttribute(hStdOut, (WORD)((background << 4) | text));
}


/*
���� �������. �������: ������� ��� ��������� ������ �� ���������� �� 1 �� 6. 
���� ���������� � �����������, ������ ��������� ����������. 
��������� ���, � ���� ����� �������� ����� �� ������ ���� ������� ������. 
������������� ����������� ��������� ������� ���� ��������� ��� �����������. 
������ ������������ � ������� ��������. 
� ����� ���� ���������� �������� ������� ����� �� ������� ��� ����� ����������. 
���������: ������ ������� ��������� �������. 
*/

void main()
{
	setlocale(LC_ALL,"ru");
	srand(time(NULL));
/*
char a='*';
while(!(_kbhit()))
{
	cout<<a;
	Sleep(10);
}
*/
SetColor(Yellow);
gotoxy(8,1);
cout<<"___________________"<<endl;
SetColor(White);
gotoxy(7,2);
cout<<"/                  / \\"<<endl;
gotoxy(6,3);
cout<<"/                  /   \\"<<endl;
gotoxy(5,4);
cout<<"/                  /     \\"<<endl;
gotoxy(4,5);
cout<<"/                  /       \\"<<endl;
gotoxy(3,6);
cout<<"/                  /         \\"<<endl;
gotoxy(2,7);
cout<<"/                  /           \\"<<endl;        
gotoxy(1,8);
SetColor(Yellow);
cout<<"/__________________/             \\"<<endl;      
SetColor(White);
gotoxy(1,9);
cout<<"\\                  \\              /"<<endl;        
gotoxy(2,10);
cout<<"\\                  \\            /"<<endl;
gotoxy(3,11);
cout<<"\\                  \\          /"<<endl;
gotoxy(4,12);
cout<<"\\                  \\        /"<<endl;
gotoxy(5,13);
cout<<"\\                  \\      /"<<endl;
gotoxy(6,14);
cout<<"\\                  \\    /"<<endl;
gotoxy(7,15);
cout<<"\\                  \\  /"<<endl;
gotoxy(8,16);
cout<<"\\__________________\\/"<<endl;

SetColor(Yellow);
gotoxy(48,1);
cout<<"___________________"<<endl;
SetColor(White);
gotoxy(47,2);
cout<<"/                  / \\"<<endl;
gotoxy(46,3);
cout<<"/                  /   \\"<<endl;
gotoxy(45,4);
cout<<"/                  /     \\"<<endl;
gotoxy(44,5);
cout<<"/                  /       \\"<<endl;
gotoxy(43,6);
cout<<"/                  /         \\"<<endl;
gotoxy(42,7);
cout<<"/                  /           \\"<<endl;        
gotoxy(41,8);
SetColor(Yellow);
cout<<"/__________________/             \\"<<endl;      
SetColor(White);
gotoxy(41,9);
cout<<"\\                  \\              /"<<endl;        
gotoxy(42,10);
cout<<"\\                  \\            /"<<endl;
gotoxy(43,11);
cout<<"\\                  \\          /"<<endl;
gotoxy(44,12);
cout<<"\\                  \\        /"<<endl;
gotoxy(45,13);
cout<<"\\                  \\      /"<<endl;
gotoxy(46,14);
cout<<"\\                  \\    /"<<endl;
gotoxy(47,15);
cout<<"\\                  \\  /"<<endl;
gotoxy(48,16);
cout<<"\\__________________\\/"<<endl;







int ok;
	while(Raund<=5)
	{
		if(Raund==1)
		{
			gotoxy(5,20);
			cout<<"��� ������ �������? (PC - 1, USER - 2) :";
			cin>>ok;
		}

		if(ok==1)
		{
			My_C();
			My_Step();
		}
		else if(ok==2)
		{
			My_Step();
			My_C();
		}
		Raund++;
//		system("cls");
		if(Raund==6)
		{
			gotoxy(5,20);
			if(sum1>sum2) cout<<"������� � � � � � � � � �               \n"<<endl;
			else if(sum1<sum2)cout<<"������� ������������                \n"<<endl;
			else if(sum1==sum2)cout<<"�������� � � � � �                 \n"<<endl;
		}

	}

	gotoxy(5,40);
}


int My_C()
{
	int b,t;
		temp=rand()%6+1;
		t=temp;
		temp=rand()%6+1;
		b=temp;
		sum1+=(t+b);
		Graph(t);
		Graph1(b);
	gotoxy(5,20);
	cout<<"����� "<<Raund<<" ���� ���������� : "<<sum1<<"                   "<<endl;
	cout<<"...\n";
	Cubic();
	_getch();

	return sum1;
}

int My_Step()
{
	int q,tmp;
		temp=rand()%6+1;
		tmp=temp;
		temp=rand()%6+1;
		q=temp;
		sum2+=(tmp+q);
		Graph(tmp);
		Graph1(q);

	gotoxy(5,20); 
	cout<<"����� "<<Raund<<" ���� ������ : "<<sum2<<"                      "<<endl;
	cout<<"...\n";
//	Cubic();

	_getch();
	return sum2;
}


void Cubic()
{
	while(!(_kbhit()))
	{
		gotoxy(13,4);
		cout<<"_"<<endl;
		gotoxy(12,5);
		cout<<"/_/"<<endl;
//		!(_kbhit());
		gotoxy(53,4);
		cout<<"_"<<endl;
		gotoxy(52,5);
		cout<<"/_/"<<endl;
		Sleep(100);

		gotoxy(8,2);
cout<<"                  "<<endl;
gotoxy(7,3);
cout<<"                  "<<endl;
gotoxy(6,4);
cout<<"                  "<<endl;
gotoxy(5,5);
cout<<"                  "<<endl;
gotoxy(4,6);
cout<<"                  "<<endl;
gotoxy(3,7);
cout<<"                  "<<endl;

gotoxy(48,2);
cout<<"                  "<<endl;
gotoxy(47,3);
cout<<"                  "<<endl;
gotoxy(46,4);
cout<<"                  "<<endl;
gotoxy(45,5);
cout<<"                  "<<endl;
gotoxy(44,6);
cout<<"                  "<<endl;
gotoxy(43,7);
cout<<"                  "<<endl;



		gotoxy(20,2);
		cout<<"_"<<endl;
		gotoxy(19,3);
		cout<<"/_/"<<endl;

		gotoxy(6,6);
		cout<<"_"<<endl;
		gotoxy(5,7);
		cout<<"/_/"<<endl;
//		!(_kbhit());
		gotoxy(60,2);
		cout<<"_"<<endl;
		gotoxy(59,3);
		cout<<"/_/"<<endl;

		gotoxy(46,6);
		cout<<"_"<<endl;
		gotoxy(45,7);
		cout<<"/_/"<<endl;
		Sleep(100);

		gotoxy(8,2);
cout<<"                  "<<endl;
gotoxy(7,3);
cout<<"                  "<<endl;
gotoxy(6,4);
cout<<"                  "<<endl;
gotoxy(5,5);
cout<<"                  "<<endl;
gotoxy(4,6);
cout<<"                  "<<endl;
gotoxy(3,7);
cout<<"                  "<<endl;

gotoxy(48,2);
cout<<"                  "<<endl;
gotoxy(47,3);
cout<<"                  "<<endl;
gotoxy(46,4);
cout<<"                  "<<endl;
gotoxy(45,5);
cout<<"                  "<<endl;
gotoxy(44,6);
cout<<"                  "<<endl;
gotoxy(43,7);
cout<<"                  "<<endl;



		gotoxy(20,2);
		cout<<"_"<<endl;
		gotoxy(19,3);
		cout<<"/_/"<<endl;

		gotoxy(13,4);
		cout<<"_"<<endl;
		gotoxy(12,5);
		cout<<"/_/"<<endl;

		gotoxy(6,6);
		cout<<"_"<<endl;
		gotoxy(5,7);
		cout<<"/_/"<<endl;
//		!(_kbhit());
		gotoxy(60,2);
		cout<<"_"<<endl;
		gotoxy(59,3);
		cout<<"/_/"<<endl;

		gotoxy(53,4);
		cout<<"_"<<endl;
		gotoxy(52,5);
		cout<<"/_/"<<endl;

		gotoxy(46,6);
		cout<<"_"<<endl;
		gotoxy(45,7);
		cout<<"/_/"<<endl;
		Sleep(100);

		gotoxy(8,2);
cout<<"                  "<<endl;
gotoxy(7,3);
cout<<"                  "<<endl;
gotoxy(6,4);
cout<<"                  "<<endl;
gotoxy(5,5);
cout<<"                  "<<endl;
gotoxy(4,6);
cout<<"                  "<<endl;
gotoxy(3,7);
cout<<"                  "<<endl;

gotoxy(48,2);
cout<<"                  "<<endl;
gotoxy(47,3);
cout<<"                  "<<endl;
gotoxy(46,4);
cout<<"                  "<<endl;
gotoxy(45,5);
cout<<"                  "<<endl;
gotoxy(44,6);
cout<<"                  "<<endl;
gotoxy(43,7);
cout<<"                  "<<endl;



		gotoxy(9,2);
		cout<<"_"<<endl;
		gotoxy(8,3);
		cout<<"/_/"<<endl;
		gotoxy(20,2);
		cout<<"_"<<endl;
		gotoxy(19,3);
		cout<<"/_/"<<endl;

		gotoxy(6,6);
		cout<<"_"<<endl;
		gotoxy(5,7);
		cout<<"/_/"<<endl;
		gotoxy(16,6);
		cout<<"_"<<endl;
		gotoxy(15,7);
		cout<<"/_/"<<endl;
//		!(_kbhit());
		gotoxy(49,2);
		cout<<"_"<<endl;
		gotoxy(48,3);
		cout<<"/_/"<<endl;
		gotoxy(60,2);
		cout<<"_"<<endl;
		gotoxy(59,3);
		cout<<"/_/"<<endl;

		gotoxy(46,6);
		cout<<"_"<<endl;
		gotoxy(45,7);
		cout<<"/_/"<<endl;
		gotoxy(56,6);
		cout<<"_"<<endl;
		gotoxy(55,7);
		cout<<"/_/"<<endl;
		Sleep(100);

		gotoxy(8,2);
cout<<"                  "<<endl;
gotoxy(7,3);
cout<<"                  "<<endl;
gotoxy(6,4);
cout<<"                  "<<endl;
gotoxy(5,5);
cout<<"                  "<<endl;
gotoxy(4,6);
cout<<"                  "<<endl;
gotoxy(3,7);
cout<<"                  "<<endl;

gotoxy(48,2);
cout<<"                  "<<endl;
gotoxy(47,3);
cout<<"                  "<<endl;
gotoxy(46,4);
cout<<"                  "<<endl;
gotoxy(45,5);
cout<<"                  "<<endl;
gotoxy(44,6);
cout<<"                  "<<endl;
gotoxy(43,7);
cout<<"                  "<<endl;



		gotoxy(9,2);
		cout<<"_"<<endl;
		gotoxy(8,3);
		cout<<"/_/"<<endl;
		gotoxy(20,2);
		cout<<"_"<<endl;
		gotoxy(19,3);
		cout<<"/_/"<<endl;

		gotoxy(13,4);
		cout<<"_"<<endl;
		gotoxy(12,5);
		cout<<"/_/"<<endl;

		gotoxy(6,6);
		cout<<"_"<<endl;
		gotoxy(5,7);
		cout<<"/_/"<<endl;
		gotoxy(16,6);
		cout<<"_"<<endl;
		gotoxy(15,7);
		cout<<"/_/"<<endl;
//		!(_kbhit());
		gotoxy(49,2);
		cout<<"_"<<endl;
		gotoxy(48,3);
		cout<<"/_/"<<endl;
		gotoxy(60,2);
		cout<<"_"<<endl;
		gotoxy(59,3);
		cout<<"/_/"<<endl;

		gotoxy(53,4);
		cout<<"_"<<endl;
		gotoxy(52,5);
		cout<<"/_/"<<endl;

		gotoxy(46,6);
		cout<<"_"<<endl;
		gotoxy(45,7);
		cout<<"/_/"<<endl;
		gotoxy(56,6);
		cout<<"_"<<endl;
		gotoxy(55,7);
		cout<<"/_/"<<endl;
		Sleep(100);

		gotoxy(8,2);
cout<<"                  "<<endl;
gotoxy(7,3);
cout<<"                  "<<endl;
gotoxy(6,4);
cout<<"                  "<<endl;
gotoxy(5,5);
cout<<"                  "<<endl;
gotoxy(4,6);
cout<<"                  "<<endl;
gotoxy(3,7);
cout<<"                  "<<endl;

gotoxy(48,2);
cout<<"                  "<<endl;
gotoxy(47,3);
cout<<"                  "<<endl;
gotoxy(46,4);
cout<<"                  "<<endl;
gotoxy(45,5);
cout<<"                  "<<endl;
gotoxy(44,6);
cout<<"                  "<<endl;
gotoxy(43,7);
cout<<"                  "<<endl;

		
		gotoxy(9,2);
		cout<<"_"<<endl;
		gotoxy(8,3);
		cout<<"/_/"<<endl;
		gotoxy(20,2);
		cout<<"_"<<endl;
		gotoxy(19,3);
		cout<<"/_/"<<endl;

		gotoxy(14,2);
		cout<<"_"<<endl;
		gotoxy(13,3);
		cout<<"/_/"<<endl;

		gotoxy(11,6);
		cout<<"_"<<endl;
		gotoxy(10,7);
		cout<<"/_/"<<endl;

		gotoxy(6,6);
		cout<<"_"<<endl;
		gotoxy(5,7);
		cout<<"/_/"<<endl;
		gotoxy(16,6);
		cout<<"_"<<endl;
		gotoxy(15,7);
		cout<<"/_/"<<endl;
//		!(_kbhit());
		gotoxy(49,2);
		cout<<"_"<<endl;
		gotoxy(48,3);
		cout<<"/_/"<<endl;
		gotoxy(60,2);
		cout<<"_"<<endl;
		gotoxy(59,3);
		cout<<"/_/"<<endl;

		gotoxy(54,2);
		cout<<"_"<<endl;
		gotoxy(53,3);
		cout<<"/_/"<<endl;

		gotoxy(51,6);
		cout<<"_"<<endl;
		gotoxy(50,7);
		cout<<"/_/"<<endl;

		gotoxy(46,6);
		cout<<"_"<<endl;
		gotoxy(45,7);
		cout<<"/_/"<<endl;
		gotoxy(46,6);
		cout<<"_"<<endl;
		gotoxy(45,7);
		cout<<"/_/"<<endl;

		gotoxy(57,6);
		cout<<"_"<<endl;
		gotoxy(56,7);
		cout<<"/_/"<<endl;
		Sleep(100);

		gotoxy(8,2);
cout<<"                  "<<endl;
gotoxy(7,3);
cout<<"                  "<<endl;
gotoxy(6,4);
cout<<"                  "<<endl;
gotoxy(5,5);
cout<<"                  "<<endl;
gotoxy(4,6);
cout<<"                  "<<endl;
gotoxy(3,7);
cout<<"                  "<<endl;

gotoxy(48,2);
cout<<"                  "<<endl;
gotoxy(47,3);
cout<<"                  "<<endl;
gotoxy(46,4);
cout<<"                  "<<endl;
gotoxy(45,5);
cout<<"                  "<<endl;
gotoxy(44,6);
cout<<"                  "<<endl;
gotoxy(43,7);
cout<<"                  "<<endl;

	}
}


int Graph(int g)
{
	switch(g)
	{
		case 1:
		gotoxy(13,4);
		cout<<"_"<<endl;
		gotoxy(12,5);
		cout<<"/_/"<<endl;
		!(_kbhit());
		break;
		case 2:
		gotoxy(20,2);
		cout<<"_"<<endl;
		gotoxy(19,3);
		cout<<"/_/"<<endl;

		gotoxy(6,6);
		cout<<"_"<<endl;
		gotoxy(5,7);
		cout<<"/_/"<<endl;
		!(_kbhit());
		break;
		case 3:
		gotoxy(20,2);
		cout<<"_"<<endl;
		gotoxy(19,3);
		cout<<"/_/"<<endl;

		gotoxy(13,4);
		cout<<"_"<<endl;
		gotoxy(12,5);
		cout<<"/_/"<<endl;

		gotoxy(6,6);
		cout<<"_"<<endl;
		gotoxy(5,7);
		cout<<"/_/"<<endl;
		!(_kbhit());
		break;
		case 4:
		gotoxy(9,2);
		cout<<"_"<<endl;
		gotoxy(8,3);
		cout<<"/_/"<<endl;
		gotoxy(20,2);
		cout<<"_"<<endl;
		gotoxy(19,3);
		cout<<"/_/"<<endl;

		gotoxy(6,6);
		cout<<"_"<<endl;
		gotoxy(5,7);
		cout<<"/_/"<<endl;
		gotoxy(16,6);
		cout<<"_"<<endl;
		gotoxy(15,7);
		cout<<"/_/"<<endl;
		!(_kbhit());
		break;
		case 5:
		gotoxy(9,2);
		cout<<"_"<<endl;
		gotoxy(8,3);
		cout<<"/_/"<<endl;
		gotoxy(20,2);
		cout<<"_"<<endl;
		gotoxy(19,3);
		cout<<"/_/"<<endl;

		gotoxy(13,4);
		cout<<"_"<<endl;
		gotoxy(12,5);
		cout<<"/_/"<<endl;

		gotoxy(6,6);
		cout<<"_"<<endl;
		gotoxy(5,7);
		cout<<"/_/"<<endl;
		gotoxy(16,6);
		cout<<"_"<<endl;
		gotoxy(15,7);
		cout<<"/_/"<<endl;
		!(_kbhit());
		break;
		case 6:
			gotoxy(9,2);
		cout<<"_"<<endl;
		gotoxy(8,3);
		cout<<"/_/"<<endl;
		gotoxy(20,2);
		cout<<"_"<<endl;
		gotoxy(19,3);
		cout<<"/_/"<<endl;

		gotoxy(14,2);
		cout<<"_"<<endl;
		gotoxy(13,3);
		cout<<"/_/"<<endl;


		gotoxy(11,6);
		cout<<"_"<<endl;
		gotoxy(10,7);
		cout<<"/_/"<<endl;

		gotoxy(6,6);
		cout<<"_"<<endl;
		gotoxy(5,7);
		cout<<"/_/"<<endl;
		gotoxy(16,6);
		cout<<"_"<<endl;
		gotoxy(15,7);
		cout<<"/_/"<<endl;
		!(_kbhit());
//		Sleep(500);
//		_getch();
		break;
	}
//_getch();
//!(_kbhit());
//Sleep(1000);
	return 0;
	
}

int Graph1(int g)
{
	if(g==1)
	{
		gotoxy(53,4);
		cout<<"_"<<endl;
		gotoxy(52,5);
		cout<<"/_/"<<endl;
		!(_kbhit());
	}
	else if(g==2)
	{
		gotoxy(60,2);
		cout<<"_"<<endl;
		gotoxy(59,3);
		cout<<"/_/"<<endl;

		gotoxy(46,6);
		cout<<"_"<<endl;
		gotoxy(45,7);
		cout<<"/_/"<<endl;
		!(_kbhit());
	}
	else if(g==3)
	{
		gotoxy(60,2);
		cout<<"_"<<endl;
		gotoxy(59,3);
		cout<<"/_/"<<endl;

		gotoxy(53,4);
		cout<<"_"<<endl;
		gotoxy(52,5);
		cout<<"/_/"<<endl;

		gotoxy(46,6);
		cout<<"_"<<endl;
		gotoxy(45,7);
		cout<<"/_/"<<endl;
		!(_kbhit());
	}
	else if(g==4)
	{
		gotoxy(49,2);
		cout<<"_"<<endl;
		gotoxy(48,3);
		cout<<"/_/"<<endl;
		gotoxy(60,2);
		cout<<"_"<<endl;
		gotoxy(59,3);
		cout<<"/_/"<<endl;

		gotoxy(46,6);
		cout<<"_"<<endl;
		gotoxy(45,7);
		cout<<"/_/"<<endl;
		gotoxy(56,6);
		cout<<"_"<<endl;
		gotoxy(55,7);
		cout<<"/_/"<<endl;
		!(_kbhit());	
	}
	else if(g==5)
	{
		gotoxy(49,2);
		cout<<"_"<<endl;
		gotoxy(48,3);
		cout<<"/_/"<<endl;
		gotoxy(60,2);
		cout<<"_"<<endl;
		gotoxy(59,3);
		cout<<"/_/"<<endl;

		gotoxy(53,4);
		cout<<"_"<<endl;
		gotoxy(52,5);
		cout<<"/_/"<<endl;

		gotoxy(46,6);
		cout<<"_"<<endl;
		gotoxy(45,7);
		cout<<"/_/"<<endl;
		gotoxy(56,6);
		cout<<"_"<<endl;
		gotoxy(55,7);
		cout<<"/_/"<<endl;
		!(_kbhit());
	}
	else if(g==6)
	{
		gotoxy(49,2);
		cout<<"_"<<endl;
		gotoxy(48,3);
		cout<<"/_/"<<endl;
		gotoxy(60,2);
		cout<<"_"<<endl;
		gotoxy(59,3);
		cout<<"/_/"<<endl;

		gotoxy(54,2);
		cout<<"_"<<endl;
		gotoxy(53,3);
		cout<<"/_/"<<endl;


		gotoxy(51,6);
		cout<<"_"<<endl;
		gotoxy(50,7);
		cout<<"/_/"<<endl;

		gotoxy(46,6);
		cout<<"_"<<endl;
		gotoxy(45,7);
		cout<<"/_/"<<endl;
		gotoxy(46,6);
		cout<<"_"<<endl;
		gotoxy(45,7);
		cout<<"/_/"<<endl;

		gotoxy(57,6);
		cout<<"_"<<endl;
		gotoxy(56,7);
		cout<<"/_/"<<endl;
		!(_kbhit());
//		Sleep(500);
//		_getch();
	}
//
//_getch();
//!(_kbhit());
Sleep(1000);

gotoxy(8,2);
cout<<"                  "<<endl;
gotoxy(7,3);
cout<<"                  "<<endl;
gotoxy(6,4);
cout<<"                  "<<endl;
gotoxy(5,5);
cout<<"                  "<<endl;
gotoxy(4,6);
cout<<"                  "<<endl;
gotoxy(3,7);
cout<<"                  "<<endl;

gotoxy(48,2);
cout<<"                  "<<endl;
gotoxy(47,3);
cout<<"                  "<<endl;
gotoxy(46,4);
cout<<"                  "<<endl;
gotoxy(45,5);
cout<<"                  "<<endl;
gotoxy(44,6);
cout<<"                  "<<endl;
gotoxy(43,7);
cout<<"                  "<<endl;

	return 0;	
}