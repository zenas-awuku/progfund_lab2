#include <iostream>

using namespace std;

void bubble_sort(int array[], int size) {

    for (int i = 0; i < size; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if (array[i] > array[j])
            {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
        
    }
    
}

int main() {
    int array[] {12, 5,1,4,3};
    int size = 5;

    bubble_sort(array, size);

    for(auto element : array) {
        cout << element << endl;
    }
}