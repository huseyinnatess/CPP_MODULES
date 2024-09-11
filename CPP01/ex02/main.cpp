#include "../Print/Print.hpp"

int main() 
{
    std::string str = "HI THIS IS BRAIN";
    std::string* stringPTR = &str;
    std::string& stringREF = str;

    write("\n");
    write("String degiskeninin bellek adresi: ", YELLOW), print(&str, RED);
    write("String degiskeninin degeri: ", YELLOW), print(str);
    write("\n");

    write("stringPTR tarafindan tutulan bellek adresi: ", GREEN), print(stringPTR, RED);
    write("stringPTR tarafindan isaret edilen deger: ", GREEN), print(*stringPTR);
    write("\n");

    write("stringREF tarafindan tutulan bellek adresi: ", TURQUISE), print(&stringREF, RED);
    write("stringREF tarafindan isaret edilen deger: ", TURQUISE), print(stringREF);
    write("\n");

    return 0;
}
