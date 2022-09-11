#include<iostream>
using namespace std;



int main()
{
    /* code */
    int arr1[3][3]={{1,2,3},{1,2,3},{1,2,3}};
    int arr2[3][3]={{1,2,3},{1,2,3},{1,2,3}};;
    int arr3[3][3];
    // for (int i = 0,j=0; i <= 2,j<=2; i++,j++)
    // {
    //     arr3[i][j]=((arr1[i][j]*arr2[0][i])+(arr1[i][j]*arr2[1][i])+(arr1[i][j]*arr2[2][i]));
    // }
    // for (int k = 0,s=0; k <=2,s<=2; k++,s++)
    // {
    //     /* code */
    //     cout<<arr3[k][s]<<"\t";
    // }
    for (int x = 0; x <= 2; x++)
    {
        for (int y = 0; y <=2; y++)
        {
           arr3[x][y]=((arr1[x][y]*arr2[0][y])+(arr1[x][y]*arr2[1][y])+(arr1[x][y]*arr2[2][y])); 
        }
        
    }
    for(int q=0;q<=2;q++)
    {
        for(int w=0;w<=2;w++)
        {
          cout<<arr3[q][w]<<"\t";  
        }
        cout<<endl;
    }
    return 0;
}

 
