#include <iostream>

using namespace std;

template<typename T1, typename T2, typename T3>

T3 my_sum(T1 n1, T2 n2) {
	return n1 + n2;
}

int main() {
	//암시적 사용이 불가한 이유 
	//int value = my_sum(10,20);

	//명시적 사용 가능 

	int value = my_sum<int, int, int>(10, 20);

	float value2 = my_sum<float, float, float>(10.3f, 12.3f);


	cout << value << endl;

	cout << value2 << endl;

	return 0;
}