/**
 * Simple use of std::queue.
 * 
 * @author
 *   Wade Fagen-Ulmschneider <waf@illinois.edu>
 */

#include <iostream>
#include <queue>

// NOTE - QUEUE IS FIFO, STACK IS LIFO

int main() {
  // Create a std::queue:
  std::queue<std::string> q;
  
  std::cout << "Queue size: " << q.size() << std::endl;

  // Add several strings to the queue:
  std::cout << "Add several strings to the queue" << std::endl;
  q.push( "Orange" );
  q.push( "Blue" );
  q.push( "Illinois" );
  std::cout << "Queue size: " << q.size() << std::endl;

  // Print the front of the queue out and pop it off:
  std::cout << "Print the front of the queue out and pop it off" << std::endl;
  std::cout << "First pop(): " << q.front() << std::endl;
  q.pop();
  std::cout << "Queue size: " << q.size() << std::endl;

  // Add another string and then print ouf the front of the queue:
  std::cout << "Add another string and then print out the front of the queue (but don't pop it)" << std::endl;
  q.push( "Illini" );
  std::cout << "Second pop would be: " << q.front() << std::endl;
  std::cout << "Queue size: " << q.size() << std::endl;

  return 0;
}