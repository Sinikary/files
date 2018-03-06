#include <iostream>
#include <math.h>

using namespace std;

class Rectangle{
	unsigned int a,b;
	
	public:
		Rectangle(unsigned int _a,unsigned int _b):a(_a),b(_b){}
		friend unsigned int square(Rectangle );
		
};

unsigned int square(Rectangle rc){
	return rc.a * rc.b;
}

int main(int argc, char** argv) {
	setlocale(LC_ALL,"Russian");
	Rectangle rc(2,4);
	cout<<"Площадь "<<square(rc)<<endl;
	return 0;
}
