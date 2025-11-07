#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    string K1 = "EMUFPHZLRFAXYUSDJKZLDKRNSHGNFIVJYQTQUXQBQVYUVLLTREVJYQTMKYRDMFD";

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

    string K1_key = "PALIMPSEST";
    string K1_plaintext = "";

    for (size_t i = 0; i < K1.length(); i++)
    {
        char char_cipher = K1[i];
        int index = i % K1_key.length();
        int j = 0;
        for (size_t l = 0; l < 26; l++)
        {
            if (K1_key[index] == vigenere[l][0])
            {
                j = l;
                break;
            }
        }
        for (size_t l = 0; l < 26; l++)
        {
            char char_plain = vigenere[j][l];
            if (char_cipher == char_plain)
            {
                K1_plaintext += vigenere[0][l];
                break;
            }
        }
    }

    cout << K1_plaintext << endl;
    return 0;
}










