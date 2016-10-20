#include<bits/stdc++.h>
using namespace std;

bool isPalindrom(string str)
{
	int l=0;
	int h= str.length()-1;
	
	while(l<h)
	{
		if(str[l]!= str[h])
		return false;
		else
		{
			l++;
			h--;
		}
	}
	return true;
}

void minRemoval(string str)
{
	if(isPalindrom(str))
	{
		cout<<"1"<<endl;
	}
	else
	{
		cout<<"2"<<endl;
	}
}
int main()
{
	string str;
	cin>>str;
	minRemoval(str);
}
