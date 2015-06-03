# Spisok
#include <iostream>
#include "list.h"
using namespace std;

int main()
{
	list<int> my_list; //Пример использования списка с типом int
	
	my_list.add(-9);	
	for(int i=0;i<5;i++)
		my_list.add(i);	
	my_list.add(54);
	
	cout << my_list.getCount() << endl;	
	for(int i=1;i<=my_list.getCount();i++)
		cout << my_list.getData(i) << " ";
	cout << endl;

	my_list.del(1);
	my_list.del(3);
	my_list.del(5);	

	cout << endl;
	cout << my_list.getCount() << endl;
	for(int i=1;i<=my_list.getCount();i++)
		cout << my_list.getData(i) << " ";
	cout << endl;

	my_list.clear();

	struct my_type
	{
		int x;
		double y;
	};

	list<my_type> my_list_2; //Пример использования списка с типом, определенным пользователем

	for(int i=1;i<=5;i++)
	{
		my_type *point = new my_type;
		point->x=i;
		point->y=i+0.2;
		my_list_2.add(*point);
	}

	cout << endl << my_list_2.getCount() << endl;
	for(int i=1;i<=my_list_2.getCount();i++)
		cout << my_list_2.getData(i).x << " " << my_list_2.getData(i).y << endl;

	my_list_2.del(3);
	my_list_2.del(1);

	cout << endl << my_list_2.getCount() << endl;
	for(int i=1;i<=my_list_2.getCount();i++)
		cout << my_list_2.getData(i).x << " " << my_list_2.getData(i).y << endl;

	my_list_2.clear();
	return 0;
}
