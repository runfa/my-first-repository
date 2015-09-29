//æ≤Ã¨≥…‘±
#include<iostream>
using namespace std;
class Server
{
public:
	Server(char letterName);
	static int getTurn();
	void servrOne();
	static bool stillOpen();
private:
	static int turn;
	static int lastServed;
	static bool nowOpen;
	char name;
};
int Server::turn=0;
int Server::lastServed=0;
bool Server::nowOpen=true;
int main()
{
	Server s1('a'),s2('b');
	int number,count;
	do
	{
		cout<<"how many int your group? ";
		cin>>number;
		cout<<"your turns are: ";
			for(count=0;count<number;count++)
				cout<<Server::getTurn()<<' ';
			cout<<endl;
			s1.servrOne();
			s2.servrOne();
	}while(Server::stillOpen());
	cout<<"now closing service.\n";
	cin.get();
	cin.get();
	return 0;
}
Server::Server(char letterName):name(letterName)
{}
int Server::getTurn()
{
	turn++;
	return turn;
}
bool Server::stillOpen()
{
	return nowOpen;
}
void Server::servrOne()
{
	if(nowOpen&&lastServed<turn)
	{
		;lastServed++;
		cout<<"server "<<name<<" now serving "
			<<lastServed<<endl;
	}
	if(lastServed>=turn)
		nowOpen=false;
}