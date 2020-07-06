#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	vector <int> v={1,2,3,4,5};
	//Sum using lambda function
	int sum=0;
	for_each( v.begin(), v.end(), [&sum](int i)
			{
			sum+=i;
			});
	cout << "Sum of elements in vector is : " << sum;
}



