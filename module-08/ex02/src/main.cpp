#include <iostream>
#include <string>
#include <list>
#include "mutantstack.cpp"

int main(void)
{
	{
		std::cout << "================ mutant stack test ================" << std::endl;

		MutantStack<int> mstack;

		mstack.push(5);
		mstack.push(17);

		std::cout << "top : " << mstack.top() << std::endl;

		mstack.pop();
		std::cout << "top : " << mstack.top() << std::endl;
		std::cout << "size : " << mstack.size() << std::endl;

		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);

		MutantStack<int>::iterator it = mstack.begin();

		for (; it != mstack.end(); it++)
		{
			std::cout << "value : " << *it << std::endl;
		}

		std::cout << "================ list test ================" << std::endl;

		std::list<int> list;

		list.push_back(5);
		list.push_back(17);

		std::cout << "top : " << list.back() << std::endl;

		list.pop_back();
		std::cout << "top : " << list.back() << std::endl;
		std::cout << "size : " << list.size() << std::endl;

		list.push_back(3);
		list.push_back(5);
		list.push_back(737);
		list.push_back(0);

		std::list<int>::iterator l_it = list.begin();

		for (; l_it != list.end(); l_it++)
		{
			std::cout << "value : " << *l_it << std::endl;
		}

		std::cout << "================ copy constructor test ================" << std::endl;
		MutantStack<int> s_copy(mstack);
		MutantStack<int> s_oper = mstack;

		s_copy.pop();
		s_copy.pop();
		s_copy.pop();
		s_copy.push(42);
		s_copy.push(43);
		s_copy.push(44);

		MutantStack<int>::iterator c_iter = s_copy.begin();
		for (; c_iter != s_copy.end(); c_iter++)
		{
			std::cout << *c_iter << std::endl;
		}

		std::cout << "-------------------------------------------------------" << std::endl;

		s_oper.pop();
		s_oper.pop();
		s_oper.pop();
		s_oper.push(52);
		s_oper.push(53);
		s_oper.push(54);

		MutantStack<int>::iterator o_iter = s_oper.begin();
		for (; o_iter != s_oper.end(); o_iter++)
		{
			std::cout << *o_iter << std::endl;
		}

		std::cout << "================ reverse iterator test================" << std::endl;
		MutantStack<int> reverse;
		reverse.push(1);
		reverse.push(2);
		reverse.push(3);
		reverse.push(4);
		reverse.push(5);

		MutantStack<int>::reverse_iterator r_iter = reverse.rbegin();

		for (; r_iter != reverse.rend(); r_iter++)
		{
			std::cout << "value : " << *r_iter << std::endl;
		}
	}
	return 0;
}
