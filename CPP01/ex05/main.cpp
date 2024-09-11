#include "Harl.hpp"

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        Harl harl;
        try
        {
            harl.complain(argv[1]);
        }
        catch (std::string errorMessage)
        {
            print(errorMessage, RED);
        }
        catch (...)
        {
            print("Geçersiz level", RED);
        }
    }
    else
        print("Eksik veya fazla argüman girildi", RED);
    return 0;
}