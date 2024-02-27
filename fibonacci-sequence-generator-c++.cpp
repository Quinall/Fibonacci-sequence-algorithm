#include<iostream>
#include<vector>

using namespace std;

vector<int> fibonacci(int n)
{
	vector<int> obliczenia(2,1);
	for(int i=2;i<n;i++)
	{
		int przenies=0;
		for(int j=0; j<obliczenia.size() || przenies; j++)
		{
			if(j==obliczenia.size()) obliczenia.push_back(0);
			int sum;
			if (j > 0) {
				sum = obliczenia[j] + obliczenia[j-1] + przenies;
			} else {
				sum = obliczenia[j] + przenies;
			}
			przenies = sum/10;
			obliczenia[j]=sum%10;
		}
	}
	return obliczenia;
}

int main()
{
	int N=100;
	vector<int> wynik=fibonacci(N);
	cout<<"F("<<N<<") = ";
	for(int i=wynik.size()-1;i>=0;i--)
	cout<<wynik[i];
	cout<<endl;
	cout<<"Liczba ma "<<wynik.size()<<" cyfr"<<endl;


	
	return 0;
} 

