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

void revrse(char ch[], int size){
	int start=0;
	int end=size-1;
	
	while(strat <=end){
		if(ch[start]==' '){
			ch[start]='@';
		}
		start++;
	}
}

int main(){
	char ch[100];
	
	cin.getline(ch,50);
	
	cout<<"befor "<<ch<<endl;
	
	revrse(ch,size);
	
	cout<<"after "<<ch<<endl;
	
	return 0;
}

// time complexity == O(n)
