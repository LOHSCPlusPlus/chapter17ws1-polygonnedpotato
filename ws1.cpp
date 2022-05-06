#include <iostream>
#define n Node
#define SENTINEL -999 
#define p nullptr
using namespace std;

// Part 1.1 Complete the node declaration
struct n
{
n(int);
int data;
n *next;
};
n::n(int Data){
data=
  Data;
next=
  p;
}
// Part 1.2 Define the Node constructor

//constants
// const int SENTINEL = -999;

//print function
void printList(n *head);
  
//main
int main()
{
    n *head = 
  p;
    n *tail = 
  p;
    int num = 
  0;
    cout << 
      "Enter a number to add to the list (" 
      << 
      SENTINEL 
      << 
      " to end)"
      ;
    cin 
      >> 
        num
          ;
    while 
      (num 
        != 
          SENTINEL
      ) {
        // Part 2, create a new node pointer, and append it to the list.
      n *ptr=new n(num);  
      if(
        tail==p
      ){
        head=/*new n(num)*/ptr;
      }else{
        tail->next=/*new n(num)*/ptr;
      };
      tail=/*new n(num)*/ptr;
      cout << "Enter a number to add to the list (" << SENTINEL << " to end)";
      cin >> num;
    }

	printList(head);
    
    // Part 3, delete the list
    while(head!=p){n *next=head->next;delete head;head=next;}
    tail=p;
    delete tail;
    return 0;
}

// Part 4 fill in the print function to print the list
void printList(n *head) {
  n 
  *c
  =
  head
  ;
  while
  (
  c
  !=
  p
  )
  {
  cout
  <<
  c
  ->
  data
  <<
  endl
  ;
  c
  =
  c
  ->
  next
  ;
  }
}
