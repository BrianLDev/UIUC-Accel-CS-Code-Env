/**
 * Simple use of std::sueue.
 * 
 * @author
 *   Wade Fagen-Ulmschneider <waf@illinois.edu>
 */

#include <iostream>
#include <stack>

// NOTE - QUEUE IS FIFO, STACK IS LIFO

int main() {
  // Create a std::stack:
  std::stack<std::string> s;
  
  std::cout << "Stack size: " << s.size() << std::endl;

  // Add several strings to the stack:
  std::cout << "Add several strings to the stack" << std::endl;
  s.push( "Orange" );
  s.push( "Blue" );
  s.push( "Illinois" );
  std::cout << "Stack size: " << s.size() << std::endl;

  // Print the front of the stack out and pop it off:
  std::cout << "Print the front of the stack out and pop it off" << std::endl;
  std::cout << "First pop(): " << s.top() << std::endl;
  s.pop();
  std::cout << "Stack size: " << s.size() << std::endl;

  // Add another string and then print ouf the front of the stack:
  std::cout << "Add another string and then print out the front of the stack (but don't pop it)" << std::endl;
  s.push( "Illini" );
  std::cout << "Second pop would be: " << s.top() << std::endl;
  std::cout << "Stack size: " << s.size() << std::endl;

  return 0;
}