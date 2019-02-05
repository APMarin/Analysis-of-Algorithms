#include <iostream>
#include <windows.h>

using namespace std;
void gotoxy(int x, int y);
void printfigure(int x, int y, int x1, int y1);

int main()
{
    int rectangle1len1=2,rectangle1len2=4,rectangle1hei1=1,rectangle1hei2=4;
    int rectangle2len1=2,rectangle2len2=4,rectangle2hei1=1,rectangle2hei2=4;
    printfigure(rectangle1len1,rectangle1hei1,rectangle1len2,rectangle1hei2);
    return 0;
}

void gotoxy(int x, int y){
    HANDLE hConsola;
    COORD dwPos;
    dwPos.X = x;
    dwPos.Y = y;
    hConsola = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(hConsola,dwPos);
}
void printfigure(int x, int y, int x1, int y1)
{
    for(int i = x; i < x1;i++)
    {
        gotoxy(i,y); cout<<"_"<< endl;
        gotoxy(i,y1);cout<<"_"<< endl;
        for(int j = y; j < y1; j++)
        {
            //gotoxy(x-1,j);cout<<"|"<<endl;
            //gotoxy(x1-1,j);cout<<"|"<<endl;
        }
    }
}
