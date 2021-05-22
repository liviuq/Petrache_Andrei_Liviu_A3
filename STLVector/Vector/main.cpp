#include <iostream>
#include <vector>
using namespace std;
//int main()
//{
//	vector<int> v;
//	v.push_back(1); v.push_back(2);
//	int x = v[0];
//	int y = v.at(1);
//
//	return 0;
//}
//class Integer
//{
//private:
//	int value;
//public:
//	Integer() :value(0) {}
//	Integer(int v) : value(v) {}
//	Integer(const Integer& v) : value(v.value) {}
//	void set(int v) { value = v; }
//	int get() { return value; }
//
//};
//
//int main()
//{
//	vector<Integer> v;
//	Integer i(5);
//	v.push_back(i);
//	i.set(6);
//	printf("i=%d , v[0]=%d\n", i.get(), v[0].get());
//	return 0;
//}

//class Integer
//{
//	int Value;
//public:
//	Integer() : Value(0) { printf("[%p] Default ctor\n", this); }
//	Integer(int v) : Value(v) { printf("[%p] Value ctor(%d)\n", this, v); }
//	Integer(const Integer& v) : Value(v.Value) {
//		printf("[%p] Copy ctor from (%p,%d)\n",
//
//			this, &v, v.Value);
//	}
//
//	Integer& operator= (const Integer& i) {
//		Value = i.Value; printf("[%p] op= (%p,%d)\n",
//
//			this, &i, i.Value); return *this;
//	}
//
//	void Set(int v) { Value = v; }
//	int Get() { return Value; }
//};
//void main(void)
//{
//	vector<Integer> v;
//	Integer i(5);
//	for (int tr = 0; tr < 5; tr++)
//	{
//		i.Set(1000 + tr);
//		v.push_back(i);
//	}
//}

int main()
{
	vector<int> vect(100, 0);
	vector<int>::iterator i;

	for (i = vect.begin(); i < vect.end(); i++)
		(*i) = 5;

	for (i = vect.begin(); i < vect.end(); i++)
		cout << (*i) << " ";
	return 0;
}