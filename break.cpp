#include<iostream>
using namespace std;

/* void findingElement (int arr[], int size, int key)
{
    for (int i; i < size; i++)
    {
        if (arr[i] == key){
            cout << "Element found in the position: " << (i+1);
            break;
        }
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(arr)/sizeof(arr[0]);
    int key = 4;

    findingElement(arr, size, key);
}
*/

void findingElementMore (int arr[], int size, int key)
{
    for (int i; i < size; i++)
    {
        if (arr[i] == key)
        {
            cout << "Found you at " << i+1;
            break;
        }
    }
}

int main()
{
    int sizeOfArray = 100;
    int arr[sizeOfArray];

    for (int i; i < sizeOfArray; i++){
        arr[i] = rand() % 100;
    }

    int key = 98;

    findingElementMore(arr, sizeOfArray, key);
}
