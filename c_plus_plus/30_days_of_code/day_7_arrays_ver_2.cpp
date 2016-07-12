#include <iostream>
using namespace std;
int main(){
    int array_size;
    cin >> array_size;
    int array_list [array_size];
    for(int i = array_size; i >= 1; --i){
        int data;
        cin >> data;
        array_list[array_size - i] = data;
    }
    for(int j = array_size - 1; j >= 0; --j){ 
        cout << array_list[j] << " ";
    }
    return 0;
}
