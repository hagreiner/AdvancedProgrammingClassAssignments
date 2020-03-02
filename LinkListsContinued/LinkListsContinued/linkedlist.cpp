/**
* @file linkedlist.cpp
* @brief  This is a lecture program that illustrates the definiition of a Linked List class
* and topics from Gaddis 17.
*
* @author Bilbo B. Baggins
* @credits Gaddis Chapter 17
* @assignment Lecture 8.1
* @date 3/2/2020
*
*/#include "linkedlist.h"
#include <iostream>
#include <fstream>

using namespace bilbo;

//2.1 void List::push_back(int number)
void List::push_back(int number)
{
  //does the list have an item?
  if(head)
  {
    Node* seeker = head;
    while(seeker->next)
    {
      seeker=seeker->next;
    }
    //we should be at the end of the list
    seeker->next = new Node(number);
  }
  else
  {
    //empty
    head = new Node(number);
  }
}

//3.1 void List::walk() const
void List::walk() const //3.1
{
	Node* seeker = head;
	while (seeker)
	{
		std::cout << seeker->data << "[" << seeker << "]" << std::endl;
		seeker = seeker->next;
	}
}

//4.1 List::~List()
List::~List()
{
	Node* seeker = head;
	while (seeker)
	{
		Node* collector = seeker;
		seeker = seeker->next;
		//now that we've moved on to the next Node
		//we can delete the one we just bypassed.
		std::cout << collector->data << "~" << collector << "~" << std::endl;
		delete collector;

	}
	head = nullptr;
}

//5.1  void List::push(int number)
void List::push(int number)
{
	Node* newNode = new Node(number, head);
	head = newNode;
}

//6  
int List::size() const {
	int returnCount = 0;
	Node* seeker = head;
	while (seeker)
	{
		seeker = seeker->next;
		returnCount++;
	}
	return returnCount;
}

//7  
void List::remove(int number) {
	Node* seeker = head;
	Node* lastseeker = head;

	while (seeker)
	{
		if (seeker->data == number) {
			std::cout << seeker->data << "-" << seeker << "-" << std::endl;
			Node* nextseeker = seeker->next;
			lastseeker->next = nextseeker;
			delete seeker;
			seeker = nullptr;
			break;
		}
		lastseeker = seeker;
		seeker = seeker->next;
	}
}

//8  
int List::load(std::string fileName) {
	std::ifstream input(fileName);
	int count = 0;
	std::string inValue;
	if (input.good()) {
		while (!input.eof()) {
			getline(input, inValue);
			push_back(std::stoi(inValue));
			count++;
		}
	}
	input.close();
	return count;
}
