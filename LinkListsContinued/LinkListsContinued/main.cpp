/**
* @file main.cpp
* @brief  This is a lecture program that illustrates Linked List topics from Gaddis 17.
*
* @author Bilbo B. Baggins
* @credits Gaddis Chapter 17
* @assignment Lecture 8.1
* @date 3/2/2020
*
*/
#include <iostream>
#include <fstream>
#include "linkedlist.h"

using namespace std;


int main()
{

	bilbo::List linkedList;
	linkedList.push_back(100);
	linkedList.push_back(200);
	linkedList.push_back(300);
	linkedList.push(3);
	linkedList.push(2);
	linkedList.push(1);

	cout << "walk 1" << endl;
	linkedList.walk();
	cout << "loaded:" << linkedList.load("nums.txt") << " nodes" << endl;
	cout << "walk 2" << endl;
	linkedList.walk();

	cout << "size of list:" << linkedList.size() << endl;

	cout << "removing 200 from the list" << endl;
	linkedList.remove(200);
	cout << "size of list:" << linkedList.size() << endl;
	cout << "walk3" << endl;
	linkedList.walk();
	cout << "about to hit destructors" << endl;
	return EXIT_SUCCESS;
}