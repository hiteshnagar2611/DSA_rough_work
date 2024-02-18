#include <iostream>

using namespace std;

void digit(int num){
    //base case
    if(num==0){
        return ;
    }
    

    //recursive relation
    digit(num/10);

    // case 1
    cout<< num % 10 << " ";
}

int main(){
    int num = 5432;

    digit(num);

    return 0;
}