#include "menu.h";


void main () 
{
	setlocale(LC_ALL,"ru");
	srand(time(NULL));

k++;
system("cls");
	do
{
	cout<<" M E N U "<<endl;
	if(k<2) cout<<" 1 - создание массива "<<endl;
	else if(k>1)
	{
		cout<<" 2 - удаление "<<endl;
		cout<<" 3 - доавление "<<endl;
		cout<<" 4 - на какое число увеличить элементы массива "<<endl;
		cout<<" 5 - сортировка "<<endl;
	}
	cin>>choice;
	if(choice<1 || choice>5)
			cout<<"...";
			_getch();
			system("cls");
}while(choice<1 || choice>5);

if(vars>0 && choice !=1)
{
	Printing(K,ROW,COL);	
}

if(choice==1){
	do
	{
		cout<<" 1 - вручную "<<endl;
		cout<<" 2 - автоматически "<<endl;
		cin>>vars;
		if(vars<1 || vars>2)
			cout<<"...";
			_getch();
			system("cls");
	}while(vars<1 || vars>2);
	InitMass(K,ROW,COL);
}

else if(choice==2 || choice==3){
	do
	{
		cout<<" 1 - строку "<<endl;
		cout<<" 2 - столбец "<<endl;
		cin>>vars;
		if(vars<1 || vars>2)
			cout<<"...";
			_getch();
	}while(vars<1 || vars>2);
	Add_Remove_El(K,ROW,COL);
}

else if(choice==4)
	{
	
		cout<<" ¬ведите на какое число увеличить элементы массива : "<<endl;
		cin>>vars;
		Plus(K,ROW,COL);
	}
else if(choice==5) Sort_el(K,ROW,COL);

}



void Printing(int K[][6],const int R, const int C){
	for(int i=0;i<ROW;i++)
	{
		cout.width(5);
		for(int j=0;j<COL;j++)
		{
			cout<<K[i][j]<<"  ";
		}
		cout<<"\n"<<endl;
	}
	cout<<"\n\n"<<endl;
}


int InitMass(int K[][6],const int R, const int C){
if(choice==1 && vars==1)
{
	int tmp;
	for(int i=0;i<R;i++){
		for(int j=0;j<C;j++){
			cout<<" ¬ведите значени€ в "<< i <<" строку : ";
			cin>>tmp;
			K[i][j]=tmp;
		}
	}


	for(int i=0; i<R;i++)
		{
			cout.width(4);
			for(int j=0; j<C;j++)
			{
				cout<<K[i][j]<<"  ";
			}
			cout<<"\n"<<endl;
		}
}
else if(choice==1 && vars==2)
{
		for(int i=0; i<ROW;i++)
		{
			cout.width(4);
			for(int j=0; j<COL;j++)
			{
				K[i][j]=rand()%25;
				cout<<K[i][j]<<"  ";
			}
			cout<<"\n"<<endl;
		}
}
main();
return 0;
}


void Plus(int K[][6],const int R, const int C){
//польззватель вводит на какое число увеличить элементы массива
	if (vars==0)return;
	for(int i=0;i<R;i++)
	{
		cout.width(5);
		for(int j=0;j<C;j++)
		{
			K[i][j]+=vars;
			cout<<K[i][j]<<"	";
		}
		cout<<"\n"<<endl;
	}
cout<<"...";
_getch();
main(); 
return;
}


void Add_Remove_El(int C[][6],const int n, const int m){
// вывести два массива
//удаление
	if(choice==2 && vars==1)
	{
		const int r=ROW-1,c=COL;
		int M[r][c];
		cout<<"\n\n\n";
		for(int i=0;i<r;i++)
		{
			cout.width(5);
			for(int j=0;j<c;j++)
			{
				M[i][j]=C[i][j];
				cout<<M[i][j]<<"  ";
			}
			cout<<"\n"<<endl;
		}

	}
	else if(choice==2 && vars==2)
	{
		const int r=ROW,c=COL-1;
		int M[r][c];
		cout<<"\n\n\n";
		for(int i=0;i<r;i++)
		{
			cout.width(5);
			for(int j=0;j<c;j++)
			{
				M[i][j]=C[i][j];
				cout<<M[i][j]<<"  ";
			}
			cout<<"\n"<<endl;
		}
	}
//добавление
	if(choice==3 && vars==1)
	{
		const int r=ROW+1,c=COL;
		int M[r][c];
		cout<<"\n\n\n";
		for(int i=0;i<r;i++)
		{
			cout.width(5);
			for(int j=0;j<c;j++)
			{
				if(i<r-1)
				{
					M[i][j]=C[i][j];
					cout<<M[i][j]<<"  ";
				}
				else
				{
					M[i][j]=rand()%25;
					cout<<M[i][j]<<"  ";
				}
		
			}
			cout<<"\n"<<endl;
		}

	}

	else if(choice==3 && vars==2)
	{
		const int r=ROW,c=COL+1;
		int M[r][c];
		cout<<"\n\n\n";
		for(int i=0;i<r;i++)
		{
			cout.width(5);
			for(int j=0;j<c;j++)
			{
				if(j<c-1)
				{
					M[i][j]=C[i][j];
					cout<<M[i][j]<<"  ";
				}
				else
				{
					M[i][j]=rand()%25;
					cout<<M[i][j]<<"	";
				}
			}
			cout<<"\n"<<endl;
		}
	}
cout<<"...";
_getch();
main(); 
return;
}


void Sort_el(int B[][6],const int size, const int m){
//сортировка
	//это заполнение
		for (int k = 0; k < size; k++)
		//k - номер текущей строки
		{
			for(int i = 0;i < m; i++)   
			{  
				for (int j = m - 1; j > i; j--)  
					if (B[k][j] < B[k][j-1])  
					{  
						int tmp = B[k][j];  
						B[k][j] = B[k][j-1];  
						B[k][j-1] = tmp;  
					}     
				cout<<"\t"<<B[k][i]<<" ";   
			}
			cout<<"\n"<<endl;
		}
cout<<"...";
_getch();
main();
}
