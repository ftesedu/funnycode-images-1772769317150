#include <iostream>
using namespace std;

template <class T>
class Sorting
{
public:
    /* Function to print an array */
    static void printArray(T *start, T *end)
    {
        int size = end - start;
        for (int i = 0; i < size - 1; i++)
            cout << start[i] << ", ";
        cout << start[size - 1];
        cout << endl;
    }

    static void selectionSort(T *start, T *end);
};


template <class T>
void Sorting<T>::selectionSort(T *start, T *end)
{
    if(start >= end-1)return;

    for(T* i = start; i<end-1;i++){
        T* min_ptr = i;
        for(T* j= i+1;j<end;j++){
            if(*j < *min_ptr){
                min_ptr = j;
            }
        }
        if(min_ptr!=i){
            T temp = *i;
            *i = *min_ptr;
            *min_ptr = temp;
        }
        printArray(start, end);
    }
}
int main(){
    int arr[]={9,2,8,1,0,-2};
    Sorting<int>::selectionSort(&arr[0],&arr[6]);
    return 0;
}

