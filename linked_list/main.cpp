#include "Linkedlist.h"

int main()
{
    Linkedlist<int> l;
    std::cout << std::endl;
    std::cout << "print function before link-list is initiated" << std::endl;
    l.print();
    std::cout << std::endl;

    std::cout << "push back 5" << std::endl;
    l.push_back(5);
    l.print();
    std::cout << "push back 6" << std::endl;
    l.push_back(6);
    l.print();
    std::cout << std::endl;


    std::cout << "push front 3" << std::endl;
    l.push_front(3);
    l.print();
    std::cout << "push front 2" << std::endl;
    l.push_front(2);
    l.print();
    std::cout << std::endl;


    std::cout << "insert 4 after 3" << std::endl;
    l.insert_after(4,3);
    l.print();
    std::cout << "insert 7 after 7" << std::endl;
    l.insert_after(7,7);
    std::cout << std::endl;


    std::cout << "insert 1 before 2" << std::endl;
    l.insert_before(1,2);
    l.print();
    std::cout << "insert 7 before 8" << std::endl;
    l.insert_before(7,8);
    std::cout << std::endl;


    std::cout << "pop front (remove front node)" << std::endl;
    l.pop_front();
    l.print();
    std::cout << std::endl;


    std::cout << "pop back(remove back node" << std::endl;
    l.pop_back();
    l.print();
    std::cout << std::endl;


    std::cout << "remove target 3" << std::endl;
     l.remove_target(3);
     l.print();
    std::cout << std::endl;
    std::cout << "remove target 6" << std::endl;
     l.remove_target(6);
    std::cout << std::endl;


    std::cout << "search for 4 (both address and data inside address)" << std::endl
                << l.search(4) << std::endl << std::endl;
    std::cout << "search for 7 (both address and data inside address)" << std::endl
              << l.search(7) << std::endl << std::endl;

    std::cout << "testing front and back ( first line is printed out linked list, second line is front and back" << std::endl;
    l.print();
    std::cout << l.front() << " " << l.back() << std::endl;

    return 0;
}
