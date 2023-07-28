#include <iostream>
int main (int argc, char *argv[])
{
    int len;
    cout << "Enter length of array : ";
    cin >> len;

    int arr[len];

    cout << "Enter " << len << " number : ";
    for(int i = 0; i < len; i++){
        cin >> arr[i];
    }

    for(int j = 0; j < len; j++){
        for(int i = 0; i < len-1; i++){
            int temp;
            temp = arr[i];
            if(arr[i] > arr[i+1]){
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
    }

    for(int i = 0; i < len; i++){
        cout << arr[i] << ", ";
    }
    return 0;
}
