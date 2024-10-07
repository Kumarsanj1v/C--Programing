#include <iostream>
#include <vector>
using namespace std;

int main() {
    //Initialization of vector type
    vector <int> vec = {1,2,4,2,6,7,8};
    vector <int> vec1(5,10);
    vector <int> vec2(vec1);
    
    //initialization from an array
    int array[] = {2,5,1,7,3,5,8,9,10};
    vector <int> vec3(array,array + sizeof(array)/sizeof(int));


//diplaing vector elements
    for(int i=0;i<vec.size(); i++)
    std::cout << vec[i]<<" ";
    std::cout << endl;

    for(auto it=vec1.begin(); it!=vec1.end(); it++)
    std::cout << *it <<" ";
    std::cout << endl;
    
    for(int value: vec2)
    std::cout << value <<" ";
    std::cout << endl;

    for(auto it = vec3.begin(); it != vec3.end(); it++)
    std::cout << *it << " ";
    std::cout << endl;
    
    //Accessing vector elements
    int firstE = vec3[0];
    int lastE = vec3.back();    

    std::cout << "First Element of vec3: " << firstE << endl;
    std::cout << "Last Element of vec3 : " <<lastE << endl;
    
    // Modifying elements. Adding an element at the back
    vec3.push_back(60);

    for(auto it = vec3.begin(); it != vec3.end(); it++)
    std::cout << *it << " ";
    std::cout << endl;

    //modifying elements. removing the last element;
    vec3.pop_back();

    for(auto it = vec3.begin(); it != vec3.end(); it++)
    std::cout << *it << " ";
    std::cout << endl;

    //inserting & erasing an element

    vec3.insert(vec3.begin() +2,7);
    vec3.erase(vec3.begin()+7);

    for(int value: vec3)
    std::cout << value <<" ";
    std::cout << endl;
    std::cout << " Size of vector before resizing: " << vec3.size() << endl;
    //resizing a vector

    vec3.resize(10);
    cout<< "vec3 vector size: " << vec3.size() << endl;
    vec3.resize(20);
    cout<< "vec3 vector size: " << vec3.size() << endl;

    //clearing & checking if empty
    vec3.clear();
    cout<< "vec3 vector size: " << vec3.size() << endl;
    bool isEmpty = vec3.empty();
    
    std::cout << isEmpty << endl;
    vector <int> vec4(array, array + sizeof(array)/sizeof(int));

    for(int value: vec4)
    std::cout << value <<" ";
    std::cout << endl;

    //capacity and size
    size_t t = vec.size();
    std::cout << endl << t << endl;
    size_t capacity = vec.capacity();
    std::cout << endl << capacity << endl;

    sort(vec4.begin(), vec4.end());
    for(int value: vec4)
    std::cout << value <<" ";
    std::cout << endl;
    return 0;
    
   


}


