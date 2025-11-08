#include <iostream>
#include <string>
#include <vector>

using namespace std;

class CLUES
{
    private:
        int position;
        string cipher, plain;

    public:
        void setPos(int x) { position = x - 1; }
        void setCipher(string x) { cipher = x; }
        void setPlain(string x) { plain = x; }

        int returnPos(int x) { return position; }
        string returnCipher(string x) { return cipher; }
        string returnPlain(string x) { return plain; }

        CLUES() : position(0), cipher(""), plain("") { }
        CLUES(int x, string y, string z) : position(x), cipher(y), plain(z) { }
};

int main()
{
    string K4 = "OBKRUOXOGHULBSOLIFBBWFLRVQQPRNGKSSOTWTQSJQSSEKZZWATJKLUDIAWINFBNYPVTTMZFPKWGDKZXTJCDIGKUHUAUEKCAR";

    vector<string> vigenere = {
        "KRYPTOSABCDEFGHIJLMNQUVWXZ",
        "RYPTOSABCDEFGHIJLMNQUVWXZK",
        "YPTOSABCDEFGHIJLMNQUVWXZKR",
        "PTOSABCDEFGHIJLMNQUVWXZKRY",
        "TOSABCDEFGHIJLMNQUVWXZKRYP",
        "OSABCDEFGHIJLMNQUVWXZKRYPT",
        "SABCDEFGHIJLMNQUVWXZKRYPTO",
        "ABCDEFGHIJLMNQUVWXZKRYPTOS",
        "BCDEFGHIJLMNQUVWXZKRYPTOSA",
        "CDEFGHIJLMNQUVWXZKRYPTOSAB",
        "DEFGHIJLMNQUVWXZKRYPTOSABC",
        "EFGHIJLMNQUVWXZKRYPTOSABCD",
        "FGHIJLMNQUVWXZKRYPTOSABCDE",
        "GHIJLMNQUVWXZKRYPTOSABCDEF",
        "HIJLMNQUVWXZKRYPTOSABCDEFG",
        "IJLMNQUVWXZKRYPTOSABCDEFGH",
        "JLMNQUVWXZKRYPTOSABCDEFGHI",
        "LMNQUVWXZKRYPTOSABCDEFGHIJ",
        "MNQUVWXZKRYPTOSABCDEFGHIJL",
        "NQUVWXZKRYPTOSABCDEFGHIJLM",
        "QUVWXZKRYPTOSABCDEFGHIJLMN",
        "UVWXZKRYPTOSABCDEFGHIJLMNQ",
        "VWXZKRYPTOSABCDEFGHIJLMNQU",
        "WXZKRYPTOSABCDEFGHIJLMNQUV",
        "XZKRYPTOSABCDEFGHIJLMNQUVW",
        "ZKRYPTOSABCDEFGHIJLMNQUVWX"
    };

    CLUES clue1, clue2;

    clue1.setPos(64);
    clue1.setCipher("NYPVTTMZFPK");
    clue1.setPlain("BERLINCLOCK");

    clue2.setPos(22);
    clue2.setCipher("FLRVQQPRNGKSS");
    clue2.setPlain("EASTNORTHEAST");
}
