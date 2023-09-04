#include <iostream>
using namespace std;
/**
 * 1)
 *  ARRAY [30] INT DESORDENADOS
 *
 *
 *
 */
int main()
{
    int aux;
    int arr[] = {30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    for (int i = 0; i < 30; i++)
    {
        for (int j = 0; j < 29; j++)
        {
            if (arr[j] > arr[j + 1])
            {

                aux = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = aux;
            }
        }
    }
    for (int l = 0; l < 30; l++)
    {
        cout << arr[l] << " ";
    }
}