#include<bits/stdc++.h> // it basically includes all the library of c++ in just this line of statement
using namespace std;

//PAIRS (Generally lies in the utility library) -> They are used to store the variables in pair generally 2 variables. 
void explainPairs() {
    pair<int,int> p = {5,10};

    // And if we want to store more than 2 variables in the pair we can use the concept of nested pair  
    pair<int,pair<int,int>> pt = {1,{2,3}};

    // Declaring the pair array
    pair<int,int> arr[] ={{1,2}, {3,4}, {5,6}, {8,9}};

    cout << p.first << " " << p.second;
    cout << pt.first << " " << pt.second.first << " " << pt.second.second;
    cout << arr[1].second;
}

//VECTORS -> It is the container which is dynamic in  nature means we can increase the size as per the requirements. It store sthe element in the similar fashion as the array does 

void explainVector() {
    vector<int> v; //---->{} creates the empty container
    v.push_back(1); //---> {1}
    v.emplace_back(2); //--> {1,2} and this emplace_back is similar to push_back and also faster than push_back.

    // Defining the vector in terms of pair 
    vector<pair<int,int>> vec;
    vec.push_back({1,2});
    vec.emplace_back(1,2);// here we didnot need to place the curly bracket for pair because emplace_back is sufficient enough smart to understand automatically that it is a pair

    vector<int> v(5,100); //{100,100,100,100,100}

    vector<int> v(5);// {0,0,0,0,0}

    vector<int> v1(5,20); //{20,20,20,20,20}
    vector<int> v2(v1); // v2 is the container but a copy of v1 {20,20,20,20,20}


    // Access the elements in the vector
    vector<int>::iterator it = v.begin(); // defining the iterator so iterator generally means storing the memeory address. v.begin() --> It is the iterator that (other more iterators are end(), rend()->reverseend, rbegin()->reversebegin) points the memory address of v.begin() not the element and inorder to access the element in the memory we just write as "*" and just we write *(v.begin()) the element inside the v.begin is being accessed
    it++;
    cout << *(it) << " ";

    it =it+2;
    cout << *(it) << " ";

    // If the vector is {10,20,30,40};
    vector<int>::iterator it = v.end(); // end() will points to the memory location which is right after the end element here it is 40

    vector<int>::iterator it = v.rend(); // I will be pointing to the before 10

    vector<int>::iterator it = v.rbegin(); //It will be pointing to 40

    cout << v[0] << " ";

    cout << v.back() << " "; //The element which is at 40 it will point to that
 
    //Print the vector
    for(vector<int>::iterator it = v.begin(); it != v.end; it++) {
        cout << *(it) << " ";

        // Another vway to print the vector and shortest way is ---->
        for(auto it = v.begin(); it != v.end();it++) // auto means automatically assigning the datatype according to the data . ex. auto a = 5 means a would be assigned 5 with int datatype 
        {
            cout << *(it) << " ";
        }

        // One more way to print the vector using the forEach loop
        for (auto it : v) {
            cout << it << " ";
        }

        // {10,20,30,40}
        v.erase(v.begin() +1); // {10,30,40}

        // {10,20,30,40,50,60}
        v.erase(v.begin()+2, v.begin()+4); //{10,20,50,60} the end part is not considered so it will delete from begin+2 to before begin+4

        //Insert function
        vector<int>v(2,100);//{100,100}
        v.insert(v.begin(),300);//{300,100,100}
        v.insert(v.begin()+1,2,10);//{300,10,10,100,100}

        vector<int> copy(2,50);//{50,50}
        v.insert(v.begin(),copy.begin(),copy.end());//{50,50,300,10,10,100,10}

        // {10,20}
        cout << v.size();//how amny elements are there in vector as of now---> size is 2

        // {10,20}
        v.pop_back();// {10}

        // v1 -> {10,20}
        // v2 -> {30,40}
        v1.swap(v2) // v2 -> {10,20}
                    // v1 -> {30,40}

        v1.clear(); // erases the entire vector

        cout << v.empty(); // checks the vector is empty or not
    }
}
