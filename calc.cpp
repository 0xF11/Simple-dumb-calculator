#include <iostream>



int a;
int b;
int i = 4;
std::string Oper;
int main() {

jumper:
	std::string closeout;
	while (i < 5)
	{
		// Jumper - No clue what this is called. However this is how i am using GOTO
		// goto will jump to whatever i tell it to so long as its defined
		// In this case this works however i need to learn what 
		// "jumper" is just a label. So if i add a : to anything it labels it.
		// CHATGPT states that jumper is just a label specifically made for goto.



		std::cout << "Hello! Please insert your first number: ";
		std::cin >> a;
		std::cout << "Okay! Now insert the operator (+,-,/,*): ";
		std::cin >> Oper;
		std::cout << "Okay!! Now that last number!: ";
		std::cin >> b;

#define ADD std::cout << a + b;
		if (Oper == "+") {
			std::cout << "\n";
			ADD;
		}
#define SUBTRACT std::cout << a - b;

		else if (Oper == "-")
		{
			std::cout << "\n";
			SUBTRACT;
		}

#define MULTIPLY std::cout << a * b;

		else if (Oper == "*")
		{
			std::cout << "\n";
			MULTIPLY;
		}

#define DIVIDE std::cout << a / b;

	}
	std::cout << "\n\n";
}
