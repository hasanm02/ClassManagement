# ClassManagement
# LinkedList
<h2>Introduction</h2>
By creating a data structure with classes and objects, we delve into the fundamental ideas of object-oriented programming (OOP) in this project. Through virtual functions, we study inheritance and run-time polymorphism as well as the application of overloaded operators.


<h2>Methodology</h2>

**Person** 
- Class Definition: The Person class is defined in the person.h file. It has two private attributes, name and age, to store the name and age of a person. Additionally, public member functions, including constructors, a destructor, and a virtual function called printname, are declared to access these attributes and perform various operations.

- Implementation: The person.cpp file contains the implementation of the Person class. It covers the constructor, destructor, and the virtual function printname. The constructor initializes the name and age attributes with provided or default values. The destructor ensures any necessary cleanup when a Person object goes out of scope. The printname virtual function allows derived classes to override it, demonstrating run-time polymorphism.

- Encapsulation: The use of access control modifiers like private in the class definition encapsulates the name and age attributes. This ensures that they can only be accessed or modified through the class's member functions, promoting data integrity.

- Constructor and Destructor: The constructor provides flexibility for creating Person objects with or without initial values for name and age, supporting both default and parameterized construction. The destructor, in this example, handles resource management for a Person object, even though no specific resource management is required.

- Virtual Function: The printname virtual function demonstrates run-time polymorphism, allowing derived classes like Student and Teacher to provide their own implementations while adhering to the same interface.

- Header Guard: A header guard is used in person.h to prevent multiple inclusions of the same header file, ensuring that the class is defined only once during compilation, preventing duplication errors.

<img src="https://i.imgur.com/pXpUXiv.png" height="30%" width="30%" />
<img src="https://i.imgur.com/ADuF3qZ.png" height="50%" width="50%" />


**Student**  
- Inheritance: The Student class is defined in the student.h file and is derived from the Person class. Inheritance is indicated by using a colon (:) followed by the base class (Person), signifying that Student inherits attributes and methods from the Person class.

- Member Variables and Methods: In the Student class, additional member variables are declared, such as student_num for the student's ID number and courses to store a list of courses the student is taking. Member functions, including constructors, a destructor, and other methods, are declared to access these attributes and perform operations on Student objects.

- Course Management: Student.h and student.cpp include methods to manage the list of courses. These methods allow accessing the student's ID number, printing the list of courses, adding courses to the student's list, and deleting courses from the list. A friend function (operator==) is declared to enable comparison of two Student objects based on their course lists through operator overloading.

- Polymorphism: The Student class overrides the printname virtual function inherited from the base class (Person) to provide a student-specific implementation. This function prints out a message with the student's name.

- Encapsulation: Access control modifiers (private, protected, and public) are used appropriately to encapsulate member variables and methods. This ensures that they are accessible only within the class or to derived classes when necessary, promoting data integrity.

- Header Guard: A header guard is used in student.h to prevent multiple inclusions of the same header file, ensuring that the class is defined only once during compilation, preventing duplication errors.

   <img src="https://i.imgur.com/MHQob7T.png" height="50%" width="50%" />
  <img src="https://i.imgur.com/FMD03Q6.png" height="50%" width="50%" />


**Teacher**
- Inheritance: The Teacher class is defined in the teacher.h file and is derived from the Person class. Inheritance is indicated by using a colon (:) followed by the base class (Person), signifying that Teacher inherits attributes and methods from the Person class.

- Member Variables and Methods: Inside the Teacher class, additional member variables are declared, such as salary for the teacher's salary and courses to store a list of courses the teacher is teaching. Member functions, including constructors, a destructor, and other methods, are declared to access these attributes and perform operations on Teacher objects.

- Course Management: In teacher.h and teacher.cpp, methods are provided to manage the list of courses. These methods allow accessing the teacher's salary, printing the list of courses the teacher is teaching, and handling the teacher's course load.

- Polymorphism: The Teacher class overrides the printname virtual function inherited from the base class (Person) to provide a teacher-specific implementation. This function prints out a message with the teacher's name.

- Encapsulation: Access control modifiers (private, protected, and public) are used appropriately to encapsulate member variables and methods, ensuring that they are accessible only within the class or to derived classes when necessary, promoting data integrity.

- Header Guard: A header guard is used in teacher.h to prevent multiple inclusions of the same header file, ensuring that the class is defined only once during compilation, and preventing duplication errors.
<img src="https://i.imgur.com/XhstTAa.png" height="50%" width="50%" />
<img src="https://i.imgur.com/dmRtGHq.png" height="50%" width="50%" />

**Course** 
- Class Definition: The course.h file defines the Course class using a class declaration. Inside the class, three private attributes - courseNumber, courseName, and courseDescription - are declared to store information about a course. Public member functions are declared to provide access to these attributes and return their values.

- Encapsulation: Access control modifiers like private are used in the class definition to encapsulate the attributes courseNumber, courseName, and courseDescription. This ensures that they can only be accessed or modified through the class's member functions, promoting data integrity.

- Constructors and Destructor: In both course.h and course.cpp, constructors are implemented to allow the creation of Course objects with specific values for courseNumber, courseName, and courseDescription. Overloaded constructors are provided to support various ways of initializing course objects. A destructor is implemented to perform any necessary cleanup when a Course object goes out of scope, although no specific resource management is required in this simple example.

- Get function: Get methods, such as getCourseNumber(), getCourseName(), and getCourseDescription(), are implemented to provide read-only access to the course attributes. These methods allow users to retrieve information about a course.
  
- Header Guard: A header guard is used in course.h to prevent multiple inclusions of the same header file, ensuring that the class is defined only once during compilation, thus avoiding duplication errors.

<img src="https://i.imgur.com/98stFiO.png" height="50%" width="50%" />
<img src="https://i.imgur.com/3zFfD2A.png" height="50%" width="50%" />

**Test**
test.cpp is designed to test and demonstrate the functionality of four classes. It initializes objects of these classes, including students, teachers, and courses, and performs various operations like adding and deleting courses for students, comparing students' course lists, and demonstrating run-time polymorphism through virtual functions. The program validates the behavior and interactions of these classes and provides output to report the results.


<h2>Conclusion</h2>
We have shown the strength and adaptability of OOP with the creation of a data structure employing classes like "Person," "Student," "Teacher," and "Course." Through this project, we gained hands-on experience with class definition, object creation, inheritance, the use of virtual functions for run-time polymorphism, and operator overloading.

