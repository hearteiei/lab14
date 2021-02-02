#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int &,int &,int &,int &);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(a,b,c,d);
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}
void shuffle(int &x,int&y,int &z,int &h){
 int u =rand()%6;
 int m;
 switch(u){
	 case 1:
	 m=x; x=y; y=m;
	 break;
	 case 2:
	 m=x; x=z; z=m;
	 break;
	 case 3:
	 m=x; x=h; h=m;
	 break;
	 case 4:
	 m=y; y=z; z=m;
	 break;
	 case 5:
	 m=y; y=h; h=m;
	 break;
	 case 6:
	 m=z; z=h; h=m;
	 break;
 }
}
