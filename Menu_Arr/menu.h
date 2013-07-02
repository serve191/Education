#include <iostream>;
#include <ctime>;
#include <windows.h>;
#include <stdio.h>
#include <conio.h>;
#include <stdlib.h>

using namespace std;

void PrintMenu();
int InitMass(int K[][6],const int R, const int C);
int Add_Remove_El(int C[][6],const int n, const int m);
int Sort_el(int A[][6],const int R, const int C);
int Plus(int K[][6],const int R, const int C);
int choice, vars;
const int ROW = 5, COL = 6;
int K[ROW][COL];
int k=0;
