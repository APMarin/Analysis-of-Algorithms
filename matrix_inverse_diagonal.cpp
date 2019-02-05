#include <iostream>

using namespace std;

int main()
{
    int matrix[3][3]= {0};
    int columns,rows,n=0;

    cout<<"Digite el tamaño de su matriz (Los arreglos se llenaran de numeros aleatorios): ";
    cin>>n;
    n-=1;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            matrix[i][j]=rand()%500;
        }
    }
    cout<<"Matriz actual:\n";
    for(columns=0; columns<=n; columns++)
    {
        for(rows=0; rows<=n; rows++)
        {
            cout<<matrix[columns][rows]<<"\t";
        }
        cout<<"\n";
    }
    cout<<"\nDiagonal de matriz:\n";
    for(columns=0; columns<=n; columns++)
    {
        for(rows=0; rows<=n; rows++)
        {
            if(columns==rows)
            {
                cout<<matrix[columns][rows]<<"\t";
            }
            else
                cout<<"\t";
        }
        cout<<"\n";
    }
    cout<<"\nDiagonal inversa de matriz: \n";
    for(columns=n; columns>=0; columns--)
    {
        for(rows=0; rows<=n; rows++)
        {
            if(n-rows==(columns))
            {
                cout<<matrix[rows][columns]<<"\t";
            }
            else
                cout<<"\t";
        }
        cout<<"\n";
    }
    return 0;
}
