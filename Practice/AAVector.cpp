    #include <iostream>
    #include <vector>
    using namespace std;


    int main() {

        vector <int> vector1 = {1,2,3,};
        vector <int> vector2(5,23);
        vector <int> vector3(vector2);

        for(int i = 0; i< vector1.size(); i++)
            cout << vector1[i] << " ";

        cout << endl;

        for(int i = 0; i< vector2.size(); i++)
            cout << vector2[i] << " ";
        cout << endl;

        for(int i = 0; i< vector3.size(); i++)
            cout << vector3[i] << " ";
        cout << endl;

        int arr[] = {23,27,3,4,5,6,7,8,9};
        vector<int> vector4(arr, arr + sizeof(arr)/sizeof(int));

       

        cout<<endl<<"-----------------------------------"<<endl;

        for(int value: vector4) {
            cout<< value<< " ";

        }
        cout << endl;

        int firstE = vector4.front();
        int lastE = vector4.back();

        cout<<firstE<<"--"<<lastE<<endl;

        vector4.push_back(12);
        for(auto it = vector4.begin();  it!=vector4.end(); it++ ) {
            cout << *it <<" ";
        }        
        vector4.pop_back();
        vector4.pop_back();
        cout << endl;
        for(int v: vector4) {
            cout << v <<" ";
        }
        cout << endl;

        vector4.insert(vector4.begin()+2,56);
        for(int v: vector4) {
            cout << v <<" ";
        }

        vector4.erase(vector4.begin()+7);
        cout << endl;
        for(auto it = vector4.begin();  it!=vector4.end(); it++ ) {
            cout << *it <<" ";
        } 
        cout << endl;
        cout << "Size of vector4: " << vector4.size() << endl; 

        vector4.resize(10);
        cout << "Size of vector4: " << vector4.size() << endl; 
        for(int v: vector4) {
            cout << v <<" ";
        }
        cout << endl;
        vector4.pop_back();
        vector4.pop_back();
        cout << "Size of vector4: " << vector4.size() << endl; 
          for(int v: vector3) {
            cout << v <<" ";
        }
        cout << endl;
        cout << "Size of vector3: " << vector3.size() << endl; 
        vector3.clear();
        cout << "Size of vector3: " << vector3.size() << endl; 
        bool isEmpty = vector3.empty();
        bool isEmpty2 = vector4.empty();
        cout<< isEmpty << "  "<<isEmpty2<<endl;
        sort(vector4.begin(),vector4.end());
          for(int v: vector4) {
            cout << v <<" ";
        }

        return 0;
    }