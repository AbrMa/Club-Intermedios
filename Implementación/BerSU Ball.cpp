#include <iostream>
#include <set>
#include <deque>
using namespace std;
void print_messages(deque<int> Q);
int main()
{
	int n,k,aux;
	deque<int> messages;
	set<int> exist;
	cin >> n >> k;
	while (n--)
	{
		cin >> aux;
		if (exist.count(aux) == 0)
		{
			exist.insert(aux);
			if (messages.size() < k)
				messages.push_front(aux);
			else
			{
				messages.push_front(aux);
				exist.erase(messages.back());
				messages.pop_back();
			}
		}
	}
	cout << messages.size() << endl;
	print_messages(messages);
	return 0;
}
void print_messages(deque<int> Q)
{
	while (!Q.empty())
	{
		cout << Q.front() << " ";
		Q.pop_front();
	}
	cout << endl;
}
