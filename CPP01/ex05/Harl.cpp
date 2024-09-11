#include "Harl.hpp"

void Harl::debug(void)
{
	print("7XL-çift peynirli-üçlü turşu-özel-ketçaplı burgerime fazladan domuz pastırması yemeyi seviyorum. Gerçekten seviyorum!", PURPLE);
}

void Harl::info(void)
{
	print("Ekstra domuz pastırması eklemenin daha fazla paraya mal olduğuna inanamıyorum. Burgerime yeterince pastırma koymadınız! Yapsaydınız, daha fazlasını istemezdim!", GREEN);
}

void Harl::warning(void)
{
	print("Bence bedavaya fazladan pastırma yemeyi hak ediyorum. Ben yıllardır geliyorum, sen geçen aydan beri burada çalışmaya başladın." ,YELLOW);
}

void Harl::error(void)
{
    print("Bu kabul edilemez! Şimdi müdürle konuşmak istiyorum.", RED);
}

void Harl::complain(std::string level)
{
    int currentLevel = FindLevel(level);
    std::string errorMessage = "Geçersiz level";
    void (Harl::*ptr[])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

    currentLevel == -1 ? throw errorMessage : (this->*ptr[currentLevel])();
}

int Harl::FindLevel(std::string level) const
{
    size_t i = 0;
    size_t arrayLenght;

    toLower(level);
    const std::string levels[] = {"debug", "info", "warning", "error"};
    arrayLenght = sizeof(levels) / sizeof(levels[0]);

    for (; i < arrayLenght; i++)
    {
        if (!strcmp(levels[i], level))
            return (i);
    }
    return (-1);
}