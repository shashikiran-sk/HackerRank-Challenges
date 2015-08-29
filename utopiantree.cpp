#include <iostream>
using namespace std;

int height(int n) {
	int h=1;
    	while(n>0)
        {
        	h=h*2;
        	n--;
        	if(n>0)
            	{
            		h++;
            		n--;
        	}
   	}
    	return h;
}
int main() {
    	int T;
	cin >> T;
    	while (T--) {
        	int n;
        	cin >> n;
        	cout << height(n) << endl;
    	}
}
