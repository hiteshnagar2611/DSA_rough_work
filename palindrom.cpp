#include <iostream>

using namespace std;

int getLenth(char ch[]){
	int lenght=0;
	int i=0;
	
	while(ch[i] !='\0'){
		lenght++;
		i++;
	}
	
	return lenght;
}

bool palindrom(char ch[], int size){
	int start=0;
	int end=size-1;
	
	while(strat <=end){
		if(ch[start]==ch[end]){
			return true;
		}
		else{
			return false;
			break;
		}
		start++;
		end--;
	}
	
}

int main(){
	char ch[100];
	
	cin.getline(ch,50);
	
	int size= getLenth(ch);
	
	cout<< palindrom(ch,size);
	
	return 0;
}

// time complexity == O(n)
