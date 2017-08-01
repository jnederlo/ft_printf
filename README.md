# ft_printf

ft_printf is a project which recreates the functionality of the printf function in C. The project is part of the 42 School Silicon Valley curriculum and as such has the requirements of the norme et al.

I approached this project in 3 layers. 

As part of the first layer I go through the format string and upon finding the % character I step into a set of functions that take in a pointer to the format string and sett all of my flags, the width modifier, the precision specifier, and the length modifiers (of which I collectively call my "badges"). These functions all just set the values in my t_badge struct (declared in my header) and return void. By using a double pointer I am able to avoid manipulating strings, which makes my code much easier to follow (shout out to qst0 for the idea). 

After setting all of my badge elements I point the format string to the conversion specifier and implement a function dispatcher to call the appropriate function for the specific conversion specifier. My dispatcher is structured as a list of struct elements. Each list item contains the conversion specifier char, an assigned int value (as declared with a macro), and the function pointer to the specific function. The dispatcher allows me to easily add functionality that is independent of everything else, which allows me to quickly and easily test that new functionality without breaking my code. In other words, it sets up a nice 'base' to work from.

After the dispatcher calls the correct function, I manage the cohesiveness of all of the badges that I previously set. For example, depending on the conversion specifier, I set up rules for flag management, printing the width and/or precision, and set my variable arguement to whatever the length modifier specified.

Key concepts and implementations I used as part of the project were the design and use of a function dispatcher, working with variadic functions, and I explored the use of global functions (in combination with my function dispatcher). I also focused on organizing my code in a logical way, making it easier to understand and look back on and edit.

