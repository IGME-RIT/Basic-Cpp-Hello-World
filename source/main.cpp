/*
Hello World
(c) 2016
Author: David Erbelding
Written under the supervision of David I. Schwartz, Ph.D., and
supported by a professional development seed grant from the B. Thomas
Golisano College of Computing & Information Sciences
(https://www.rit.edu/gccis) at the Rochester Institute of Technology.
This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or (at
your option) any later version.
This program is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
General Public License for more details.
You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/



// Welcome to C++!
// This is what an C++ program looks like:


// This is an include statement.
// This tells the compiler that we want to use tools provided by iostream (part of the C++ standard library)
#include <iostream>



// This is the main function, the entry point of the program.
// In C++, it's standard for the main function to return an integer.
// By convention, returning 0 means that the program ran successfully.
// Returning anything else can be considered an error, with the number indicating what error that was.
int main() 
{
    // Here we print out the string hello world.
    // std::cout is an output stream object that's output is displayed in the console.
    // cout is the name of the object, and std:: means that we are using cout from the standard library namespace.
    // This identifies the cout in the standard library, from a cout object that might exist somewhere else.
    // << is a special operator that adds output information from the object on the right to the object on the right;
    // The object on the left must be an ostream, but the object on the right can be a basic type (bool, int, etc) or a string.
    std::cout << "Hello World!\n";
    // \n adds a new line.

    // It can also be done like this:
    std::cout << "Hello World!" << "\n";

    // << is really just a function being called on (std::cout), it also returns that same output stream. (std::cout)
    // Because of this, << can be used to link together as many things as you want.
    // There are even special things can can be linked with <<, like this:
    std::cout << "Hello World!" << std::endl;

    // Which is actually a shorthand for this:
    std::cout << "Hello World!" << "\n" << std::flush;
    // Since std::cout is a special output stream that prints to the console, std::flush is usually not required.
    // However, output streams are also commonly used to write to files, and perform other strange tasks.
    // In those situations, std::flush forces any data that hasn't been written yet to be sent.
    


    // One more way:
    // 'using namespace' forces everything in that namespace (std) to be usable without ::
    // This can be convenient, but also opens you up to a lot of confusion when you end up with things that have the same name.
    using namespace std;
    cout << "Hello World!\n";



    // Lastly, we call system() passing in "pause"
    // This prints out "Press any key to continue . . . "
    // Just as it says, it also stops the program until the user presses a key.
    // If we didn't do this, the program would run, and then immediately close.
	system("pause");


    // At the end of main, we return 0 because the program worked!
    return 0;
}