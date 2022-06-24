#include<iostream>
#include<vector>
#include<string.h>
using namespace std;
string findLongestPrefix(string s1, string s2)
{
	int a = s1.length();
	int b = s2.length();
	vector<char> vec;
	if(a>=b)
	{
		for(int i = 0;i<a;i++)
		{
			if(s1[i] == s2[i]) vec.push_back(s1[i]);
		}
		for(int i = 0;i<vec.size();i++) cout<<vec[i];
	}
	else if(a<=b)
	{
		for(int i = 0;i<b;i++)
		{
			if(s1[i] == s2[i]) vec.push_back(s1[i]);
		}
		for(int i = 0; i<vec.size(); i++) cout<<vec[i];
	}
}
int main()
{
	string s1;
	string s2;
	cin>>s1;
	cin>>s2;
	//cout<<s1<<" "<<s2;
	cout<<findLongestPrefix(s1,s2);
	return 0;
}
