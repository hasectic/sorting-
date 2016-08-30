#include <iostream>
#include <queue>
using namespace std;
int main ()
{
  queue<int> q;

  q.push(12);
  q.push(75); 
    q.push(1);
  q.push(7); 
    // this is now the back
   //q.pop();
   int x=q.back();
   while(!q.empty()){
   	 	cout<<q.front()<<" ";
   	cout<<q.back()<<" ";
   	
	   q.pop();
   }

  return 0;
}
