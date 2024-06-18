#include <iostream>
#include <vector>

int main()
{
    //Init the vector
    std::vector<int> list = {1,2,3};

    //Get element
    std::cout << "First element: " << list[0] << std::endl;

    //Inserting an element
    list.insert(list.begin() + 2, 5);
    for (int i = 0; i < list.size(); i++)
    {
        std::cout << list[i] << " ";
    }

    //Like python, in C++ you can pop an element via given function
    //but first you have to get its value before removing it to display
    int pop = list.back();
    std::cout << "\nPopped element: " <<pop << std::endl;
    list.pop_back();
    
    std::cout << "Size: " << list.size() << std::endl;

    for (int i = 0; i < list.size(); i++)
    {
        std::cout << list[i] << " ";
    }


    //Clear the list,only uncomment line 35 if you comment out line 36
    //(This is for readability purposes)
    //std::cout << "\n" << std::endl;
    list.clear();

    //Display empty list
    if (list.empty())
    {
        std::cout << "\nEmpty list" << std::endl;
    }
    else
    {
        for (int i = 0; i < list.size(); i++)
        {
            std::cout << list[i] << " ";
        }
    }
}
