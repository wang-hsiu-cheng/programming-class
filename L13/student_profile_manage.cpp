//Example for L13
#include <iostream>
#include <sstream>
using namespace std;

class Student {
private:
    int age, standard;
    string first_name, last_name;
public:
    void set_age(int age){
        this->age = age;
    }
    void set_standard(int standard){
        this->standard = standard;
    }
    void set_first_name(string first_name){
        this->first_name = first_name;
    }
    void set_last_name(string last_name){
        this->last_name = last_name;
    }
    int get_age(){
        return age;
    }
    int get_standard(){
        return standard;
    }
    string get_first_name(){
        return first_name;
    }
    string get_last_name(){
        return last_name;
    }
    friend ostream& operator <<(ostream& outs, const Student &data){
        outs << data.age << ',' << data.first_name << ',' << data.last_name << ',' << data.standard;
        return outs;
    }
};

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st;
    
    return 0;
}