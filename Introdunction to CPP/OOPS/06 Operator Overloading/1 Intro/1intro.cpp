/*

Polymorphism : It is the ability of an object to take many forms.

    ->  There are two types of polymorphism:
        1. Compile Time Polymorphism
        2. Run Time Polymorphism

    1. Compile Time Polymorphism : It is also known as static binding or early binding.
        ->  It is achieved by function overloading and operator overloading.
        ->  It is called compile time polymorphism because the decision of which function to call is made at compile time.
        ->  It is also called static binding because the binding of function call to function definition is done at compile time.

    2. Run Time Polymorphism : It is also known as dynamic binding or late binding.
        ->  It is achieved by function overriding.
        ->  It is called run time polymorphism because the decision of which function to call is made at run time.
        ->  It is also called dynamic binding because the binding of function call to function definition is done at run time.

    ->  In this video we will discuss about compile time polymorphism.

    ->  Compile time polymorphism is achieved by function overloading and operator overloading.

    ->  Function Overloading : It is a feature in which a class can have more than one function with same name but different parameters.
        ->  It is also known as static polymorphism or early binding.
        ->  It is called static polymorphism because the decision of which function to call is made at compile time.
        ->  It is also called early binding because the binding of function call to function definition is done at compile time.

    Early Binding vs Late Binding :
        ->  Early Binding : It is also known as static binding or compile time polymorphism.
        ->  Late Binding : It is also known as dynamic binding or run time polymorphism.



types which are not allowed to be overloaded :
    1.  Member Access Operator ( . )
    2.  Pointer to Member Operator ( .* )
    3.  Scope Resolution Operator ( :: )
    4.  Ternary Operator ( ?: )
    5.  sizeof Operator
    6.  typeid Operator

*/
