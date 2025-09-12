#include <iostream>
using namespace std;

// Brute force function to count frequency of a number
int hashh(int num, int a[], int size){
    int cnt = 0;
    for(int i = 0; i < size; i++){
        if(a[i] == num){
            cnt += 1;
        }
    }
    return cnt;
}

int main(){
    int size;

    cout << "Enter size of the array: ";
    cin >> size;

    int a[size];

    cout << "Enter " << size << " elements:\n";
    for(int i = 0; i < size; i++){
        cin >> a[i];
    }

    int num;
    cout << "Enter number to count its frequency: ";
    cin >> num;

    int count = hashh(num, a, size);

    cout << "Frequency of " << num << " is: " << count << endl;

    return 0;
}
