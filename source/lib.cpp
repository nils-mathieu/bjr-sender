#include <iostream>
#include <string>

#ifdef BJR_SENDER
#define BJR_SENDER

#ifdef BJR_SENDER_EXPORTS
#define BJR_SENDER_API __declspec(dllexport)
#else
#define BJR_SENDER_API __declspec(dllimport)
#endif

// Cette fonction dit bonjour à la personne spécifiée.
extern "C" BJR_SENDER_API void SayHello(std::string name);

#endif

void SayHello(std::string name) {
    std::cout << "Bonjour, " << name << std::endl;
}
