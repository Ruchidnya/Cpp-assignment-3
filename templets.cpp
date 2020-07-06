#include <iostream>
using namespace std;

template <typename t>

t divide(t num1, t num2)
{
	return ( num1/num2 );
}

int main()
{
	int n1,n2;
	float n3,n4;

	//For int
	cout << "Enter 2 numbers for int" << endl;
	cin >> n1 >> n2;
	try
	{
		if(n2!=0)
		{
			cout << "With int, division is = " << divide<int>(n1,n2) << endl;
		}
		else
		{
			throw 0;
		}
	}
	catch(int x)
	{
		cout << "Denominator cannot be zero" << endl;
	}
	
	//For float
	cout << "Enter 2 numbers for float" << endl;
        cin >> n3 >> n4;
        try
        {
                if(n4!=0)
                {
                        cout << "With float, division is = " << divide<float>(n3,n4) << endl;
                }
                else
                {
                        throw 0;
                }
        }
        catch(int x)
        {
                cout << "Denominator cannot be zero" << endl;
        }
	
}



