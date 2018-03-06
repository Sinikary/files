#include <iostream>
#include <math.h>
#include <string>
#include <sstream>
#define COLUMN_WIDTH 15


using namespace std;

template <typename T> string tostr(const T& t) { 
   ostringstream os; 
   os<<t; 
   return os.str(); 
} 

void printCell(string text){
	//высчитывает отступы до слова, чтобы поместилось в COLUMN WIDTH
	for(int i=0;i<COLUMN_WIDTH-text.length()/2;i++){
		cout<<" ";
	}
	cout<<text;
	if(text.length()%2==0){cout<<" ";};
	//высчитывает отступы после слова, чтобы поместилось в COLUMN WIDTH
	for(int i=0;i<COLUMN_WIDTH-text.length()/2;i++){
		cout<<" ";
	}
	cout<<"|";
}

void printRow(string first,string second){
	cout<<"|";
	printCell(first);
	printCell(second);
	cout<<endl;
}

void printLine(){
	for(int i=0;i<COLUMN_WIDTH*2+2;i++){
		cout<<"--";
	}
	cout<<endl;
}


float func(float x){
	return -2,4*x*x+5*x-3;
}


int main(int argc, char** argv) {
	setlocale(LC_ALL,"Russian");
	printLine();
	printRow("Аргумент", "Значение");
	for(float i=-2;i<=2;i+=0.5){
		printLine();
		printRow(tostr(i), tostr(func(i)));
	}
	printLine();
	return 0;
}
