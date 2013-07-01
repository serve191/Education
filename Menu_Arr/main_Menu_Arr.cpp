#include "menu.h";


void main () 
{
	setlocale(LC_ALL,"ru");
	srand(time(NULL));

PrintMenu();
InitMass(M,ROW,COL);
Add_Remove_El(M,ROW,COL);
Sort_el(M,ROW,COL);

}




void PrintMenu(){

	do
{
	cout<<" M E N U "<<endl;
	cout<<" 1 - создание массива "<<endl;
	cout<<" 2 - удаление "<<endl;
	cout<<" 3 - доавление "<<endl;
	cout<<" 4 - на какое число увеличить элементы массива "<<endl;
	cout<<" 5 - сортировка "<<endl;
	cin>>choice;
	if(choice<1 || choice>5)
			cout<<"...";
			_getch();
			system("cls");
}while(choice<1 || choice>5);

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
}

if(choice==2 || choice==3){
	do
	{
		cout<<" 1 - строку "<<endl;
		cout<<" 2 - столбец "<<endl;
		cin>>vars;
		if(vars<1 || vars>2)
			cout<<"...";
			_getch();
			system("cls");
	}while(vars<1 || vars>2);
}

if(choice==4){
	
		cout<<" ¬ведите на какое число увеличить элементы массива : "<<endl;
		cin>>vars;

	}

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

//польззватель вводит на какое число увеличить элементы массива
if(choice==4)
{
	for(int i=0;i<R;i++)
	{
		cout.width(5);
		for(int j=0;j<C;j++)
		{
			K[i][j]=rand()%25;
			cout<<K[i][j]<<"  ";
		}
		cout<<"\n"<<endl;
	}
	cout<<"\n\n"<<endl;

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

}

return 0;

}




int Add_Remove_El(int C[][6],const int n, const int m){
// общий массив
if(choice==2 || choice==3 && vars==1 || choice==2 || choice==3 && vars==2)
{
	for(int i=0;i<n;i++)
	{
		cout.width(4);
		for(int j=0;j<m;j++)
		{
			C[i][j]=rand()%25;
			cout<<C[i][j]<<"  ";
		}
		cout<<"\n"<<endl;
	}
}
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
			else{
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
			else{
				M[i][j]=rand()%25;
				cout<<M[i][j]<<"	";
			}
		
		}
		cout<<"\n"<<endl;
	}

}
return 0;
}



int Sort_el(int B[][6],const int size, const int m){

	//сортировка

if(choice==5)
{

	for (int i = 0; i < size; i++)
	{    
		cout.width(6);
			for (int j = 0; j < m; j++)
			{
				B[i][j]=rand()%25;  
				cout << B[i][j] << " ";  
			}
		cout << "\n"<<endl;
	} 
	cout << "\n\n"<<endl;

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


}
return 0;

}
