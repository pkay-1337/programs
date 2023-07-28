#include <iostream>
int main (int argc, char *argv[])
{
    int len,i;
    cout << "Enter length of array : ";
    cin >> len;

    int arr[len];

    cout << "Enter " << len << " number : ";
    for(int i = 0; i < len; i++){
        cin >> arr[i];
    }

    for(int j = 0; j < len-1; j++){
        int temp = arr[j]; 
        int min = arr[j];
        int swapIndex = j;
        for(i = j; i < len; i++){
            if(min > arr[i]){
                min = arr[i];
                swapIndex = i;
            }
        }
        arr[j] = min;
        arr[swapIndex] = temp;
    }

    for(int i = 0; i < len; i++){
        cout << arr[i] << ", ";
    }
    cout << endl;
    return 0;
}
