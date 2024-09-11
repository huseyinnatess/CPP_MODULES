#include "../Print/Print.hpp"
#include <string>
#include <fstream>

int ReplaceAndCopy(std:: string fileName, std::string s1, std::string s2)
{
    std::string line;
    std::string str;
    size_t pos;

    std::ifstream file(fileName);

    if (file.is_open())
    {
        std::ofstream copyFile(fileName + ".replace");
        while (getline(file, line))
        {
            str += line;
            if(!file.eof())
                str += '\n';
        }
        pos = str.find(s1);

         while (pos < str.length())
        {
            str.erase(pos, s1.length());
            str.insert(pos, s2);
            pos = str.find(s1, pos + s2.length());
        }

        copyFile << str;
        file.close();
        copyFile.close();
    }
    else
    {
        print("Hata: Dosya açılamıyor gerekli izinleri kontrol edin.", RED);
        return 1;
    }
    return 0;
}

int main(int argc, char* argv[]) 
{
    if (argc != 4)
    {
        print("Hata: Eksik veya fazla argüman girildi.", RED);
        return 1;
    }
    return ReplaceAndCopy(argv[1], argv[2], argv[3]);
}
