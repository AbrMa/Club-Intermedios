#include <iostream>
#include <string>
using namespace std;
int is_palindrome(string S)
{
	int i = 0, j = S.size() - 1;
	while (i < j)
	{
		if (S[i] != S[j])
			return 0;
		i++;
		j--;
	}
	return 1;

}
int main()
{
	string s1,s2,s3;
	cin >> s1;
	s2 = s1.substr(0,(s1.size()-1)/2);
	s3 = s1.substr((s1.size()+2)/2,s1.size()-1);
	if (is_palindrome(s1) && is_palindrome(s2) && is_palindrome(s3))
		cout << "Yes" << endl;
	else 
		cout << "No" << endl;
	return 0;
}
