#include<iostream>
using namespace std;

//uses one memory for the biggest location

union Square{
	int width;
	int height;
};

int getArea(int width,int height){
	return width*height;
}

int main(){
	Square sqr;
	sqr.width=10;
	cout<< getArea(sqr.width,sqr.height)<<endl;
	return 0;
}
