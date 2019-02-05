#include <iostream>

using namespace std;

int main()
{
    int arr_num[6]={1,2,3,4,5,6};
    cout<< "Numeros a revisar:" << endl;
    for(int i=0; i<6;i++)
        cout << arr_num[i]<< " ";
    cout<<"\n"<< endl;
    for(int i=0; i<6;i++)
    {
        if(arr_num[i]%2 == 0)
            cout<<"El num: "<< arr_num[i]<<" es par"<< endl;
        else
            cout<<"El num: "<< arr_num[i]<<" es impar"<< endl;
    }
    return 0;
}
