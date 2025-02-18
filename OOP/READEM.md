# -------------- Object Oriented Programming -------------


<br>

# ------------------ Classes & Objects -----------------
<ul>
<li>
Objects are <b> entities </b> in the real world.
</li>

<li>
class is like a <b> blueprint </b> of these entities.
</li>

</ul>

<br>
-> Object <--- Teacher --- > Change Department[ ] -> method
<br>
-> -------- N,D,S,S ---> Properties

<br>
-> entity -> Teacher
<br><br>

-> Syntax 
<br>
#include < iostream >
<br>
#include < string >
<br>
using namespace std;
<br>
-> class Teacher {
<br>
// Properties/ attributes
<br>
... string name;
<br>
... string dept;
<br>
... string subject;
<br>
... double salary;
<br>
<br>
// methods / member functions
<br>
void ChangeDept( string newDept ){
    <br>
    dept = newDept;
    <br>
}
<br>
};
<br>
int main( ){
    <br>
    Teacher t1;
    <br>
    t1.name = " Siddharth ";
    <br>
    t1.subject = " C++ ";
    <br>
    t1.dept = "Computer Science ";
    <br>
    t1.salary = 350000;
    <br>
    cout << t1.name >>
    <br>
    cout << t1.subject >>
    <br>
    cout << t1.dept >>
    <br>
    cout << t1.salary >>
    <br>
    return 0;
<br>
}
// O/P = Siddharth
<br>
-> C++
<br>
-> Computer Science
<br>
-> 350000