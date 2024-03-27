# Project Title

## <bits/stdc++> in C++

It is basically a header file that includes every standard library. In programming contests, using this file is a good idea, when you want to reduce the time wasted in doing chores; especially when your rank is time sensitive.
In programming contests, people do focus more on finding the algorithm to solve a problem than on software engineering. From, software engineering perspective, it is a good idea to minimize the include. If you use it actually includes a lot of files, which your program may not need, thus increases both compile time and program size unnecessarily.

### Disadvantages of bits/stdc++

bits/stdc++.h is a non-standard header file of GNU C++ library. So, if you try to compile your code with some compiler other than GCC it might fail; e.g. MSVC do not have this header.
Using it would include a lot of unnecessary stuff and increases compilation time.
This header file is not part of the C++ standard and is therefore, non-portable, and should be avoided.
Moreover, even if there were some catch-all header in the standard, you would want to avoid it in lieu of specific headers, since the compiler has to actually read in and parse every included header (including recursively included headers) every single time that translation unit is compiled.

### Advantages of bits/stdc++

In contests, using this file is a good idea, when you want to reduce the time wasted in doing chores; especially when your rank is time sensitive.
This also reduces all the chores of writing all the necessary header files.
You don’t have to remember all the STL of GNU C++ for every function you use.

## Namespace in C++ | Set 1 (Introduction)

```
// A program to demonstrate need of namespace
int main()
{
    int value;
    value = 0;
    double value; // Error here
    value = 0.0;
}
```

### Output

```
Compiler Error:
'value' has a previous declaration as 'int value'

```

In each scope, a name can only represent one entity. So, there cannot be two variables with the same name in the same scope. Using namespaces, we can create two variables or member functions having the same name.

```
// Here we can see that more than one variables
// are being used without reporting any error.
// That is because they are declared in the
// different namespaces and scopes.
#include <iostream>
using namespace std;

// Variable created inside namespace
namespace first
{
    int val = 500;
}

// Global variable
int val = 100;

int main()
{
    // Local variable
    int val = 200;

    // These variables can be accessed from
    // outside the namespace using the scope
    // operator ::
    cout << first::val << '\n';

    return 0;
}
```

### Output

```
500
```

Definition and Creation: Namespaces allow us to group named entities that otherwise would have global scope into narrower scopes, giving them namespace scope. This allows organizing the elements of programs into different logical scopes referred to by names. Namespaces provide the space where we can define or declare identifiers i.e. names of variables, methods, classes, etc.

Namespace is a feature added in C++ and is not present in C.
A namespace is a declarative region that provides a scope to the identifiers (names of functions, variables or other user-defined data types) inside it.
Multiple namespace blocks with the same name are allowed. All declarations within those blocks are declared in the named scope.
A namespace definition begins with the keyword namespace followed by the namespace name as follows:

```
namespace namespace_name
{
   int x, y; // code declarations where
             // x and y are declared in
             // namespace_name's scope
}
```

Namespace declarations appear only at global scope.
Namespace declarations can be nested within another namespace.
Namespace declarations don’t have access specifiers (Public or Private).
No need to give a semicolon after the closing brace of the definition of namespace.
We can split the definition of namespace over several units.

```
// Let us see how namespace scope the entities including variable and functions:

#include <iostream>
using namespace std;

// first name space
namespace first_space
{
   void func()
   {
      cout << "Inside first_space" << endl;
   }
}

// second name space
namespace second_space
{
   void func()
   {
      cout << "Inside second_space" << endl;
   }
}

int main ()
{
    // Calls function from first name space.
   first_space::func();
    // Calls function from second name space.
   second_space::func();
   return 0;
}
```

### Output

```
Inside first_space
Inside second_space
```

## The using directive:

```
#include <iostream>
using namespace std;

// first name space
namespace first_space
{
   void func()
   {
      cout << "Inside first_space" << endl;
   }
}

// second name space
namespace second_space
{
   void func()
   {
      cout << "Inside second_space" << endl;
   }
}

using namespace first_space;

int main ()
{
    // This calls function from first name space.
   func();
   return 0;
}
```

### Output

```
Inside first_space
```

### Classes and Namespace: The following is a simple way to create classes in a namespace:

```
// A C++ program to demonstrate use of class
// in a namespace
#include<iostream>
using namespace std;

namespace ns
{
    // A Class in a namespace
    class geek
    {
    public:
        void display()
        {
            cout<<"ns::geek::display()"<<endl;;
        }
    };
}

int main()
{
    // Creating Object of geek Class
    ns::geek obj;

    obj.display();

    return 0;
}
```

### Output

```
ns::geek::display()
```

### Namespace provides the advantage of avoiding name collision

For example, you might be writing some code that has a function called xyz() and there is another library available in your code which also has the same function xyz(). Now the compiler has no way of knowing which version of xyz() function you are referring to within your code.
A namespace is designed to overcome this difficulty and is used as additional information to differentiate similar functions, classes, variables, etc. with the same name available in different libraries.
The best example of namespace scope is the C++ standard library (std), where all the classes, methods and templates are declared. Hence, while writing a C++ program, we usually include the directive
using namespace std;
