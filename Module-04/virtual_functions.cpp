

#include <iostream>

using namespace std;

class A
{
	protected:
		int a;
	public :
		~A() {};
		A() {};
		void get(int u)
		{
			a = u;
		}
		virtual int area() { cout << "area of A is by default 56" << endl; return 56;}
};

class square : public A
{
	public : 
		~square() {};
		square() {};
		int area() {cout << "square area  :  "; return ( a*4);}
};

class Circle : public A
{
	public : 
		~Circle() {};
		Circle() {};
		int area() {cout << "circle area  :  ";  return (3.14 * a*a);}
};


int main()
{
	square sq;
	A *aa = &sq;

	aa->get(2);
	cout << aa->area();

	// Circle cir;

	// cir.get(9);
	// cout << cir.area() << endl;

}

