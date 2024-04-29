#include <iostream>
#include <cstdlib>
#include "Array.h"

using namespace std;

int Graph[4] = {3 , 4 , 5 , 7};
int Graph2D[4][4] = {{}};

int Optimimum(int LeftIndex , int RightIndex){
    if( RightIndex - LeftIndex < 2)
        return 0;
    int min = Optimimum(LeftIndex , LeftIndex + 1) + Optimimum(LeftIndex + 1 , RightIndex) + Graph[LeftIndex] * Graph[LeftIndex + 1] * Graph[RightIndex];
    for(int k = LeftIndex + 1 ; k < RightIndex ; k++)
    {
        int a = Optimimum(LeftIndex , k) + Optimimum(k , RightIndex) + Graph[LeftIndex] * Graph[k] * Graph[RightIndex];
        if( a < min){
            min = a;
            Graph2D[LeftIndex][RightIndex] = k;
        }
    }
    return min;
}

int main(int argc, char *argv[])
{
    cout << Optimimum(0 , 3) << endl;
    for(int i = 0 ; i < 4 ; i++){
        for(int i = 0 ; i < 4 ; i++)
            cout << Graph2D[i][j] << ' ';
        cout << endl;
    }
    system("Pause");
    return 0;
}
