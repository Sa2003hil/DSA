/*
In C++, structures (struct) and classes (class) share several similarities as they both serve as user-defined data types. Here are some key similarities:

1. Member Variables:
   * Both structures and classes allow the definition of member variables (also known as data members) to store data.

2. Member Functions:
    * Both structures and classes allow the definition of member functions (also known as methods) to perform operations.

    code :

    struct Rectangle {
    int length;
    int width;

    int calculateArea() {
        return length * width;
    }
};

    class Car {
    public:
        void startEngine() {
            // Start the engine logic
        }
    };


3. Encapsulation:
    * Both structures and classes allow the grouping of member variables and member functions together into logical units.

    code :

    struct Student {
    // Default access is public
    int studentID;
    char grade;
    };

    class Book {
    private:
        // Access specifier controls visibility
        std::string title;

    public:
        void setTitle(const std::string& t) {
            title = t;
        }
    };



*/