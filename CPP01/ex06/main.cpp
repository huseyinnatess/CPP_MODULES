#include "Harl.hpp"

void Switch(int currentLevel, Harl harl)
{
    while (currentLevel >= 0)
    {
        switch (currentLevel)
        {
            case 3:
              harl.complain("error");
                break;
            case 2:
                harl.complain("warning");
                break;
            case 1:
                harl.complain("info");
                break;
            case 0:
                harl.complain("debug");
                break;
        }
        --currentLevel;
    }
}

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        Harl harl;
        std::string ErrorMessage = "Geçersiz level";
        try
        {
            int currentLevel = harl.FindLevel(argv[1]);
            currentLevel == -1 ? throw ErrorMessage : Switch(currentLevel, harl);
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