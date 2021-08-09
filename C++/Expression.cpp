#include <iostream>

using namespace std;

 int main()
 {
 	int a, b, c;
 	cin >> a >> b >> c;

 	int e1 = a + (b * c);
 	int e2 = a * (b + c);
 	int e3 = (a * b * c);
 	int e4 = (a + b) * c;
 	int e5 = (a * b) + c;
 	int e6 = (a + b + c);

 	if(e1 >= e2 && e1 >= e3 && e1 >= e4 && e1 >= e5 && e1 >= e6)
 		cout << e1;
 	else if(e2 >= e1 && e2 >= e3 && e2 >= e4 && e2 >= e5 && e2 >= e6)
 		cout << e2;
 	else if(e3 >= e1 && e3 >= e2 && e3 >= e4 && e3 >= e5 && e3 >= e6)
 		cout << e3;
 	else if(e4 >= e1 && e4 >= e2 && e4 >= e3 && e4 >= e5 && e4 >= e6)
 		cout << e4;
 	else if(e5 >= e1 && e5 >= e2 && e5 >= e3 && e5 >= e4 && e5 >= e6)
 		cout << e5;
 	else
 		cout << e6;

 	return 0;
 }
