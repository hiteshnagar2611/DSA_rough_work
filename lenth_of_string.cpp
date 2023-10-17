#include <iostream>

using namesace std;

int getLenth(char ch[]){
	int lenght=0;
	int i=0;
	
	while(ch[i] !='\0'){
		lenght++;
		i++;
	}
	
	return lenght;
}

int main(){
	char ch[100];
	
	cin.getline(ch,50);
	
	cout<<"lenght of string is "<< getLenth(ch) <<endl;
	cout<<"lenght of string is "<< strlen(ch) <<endl; // stl function
	return 0;
}


// time complexity == O(n)
