#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    string K2 = "VFPJUDEEHZWETZYVGWHKKQETGFQJNCEGGWHKKDQMCPFQZDQMMIAGPFXHQRLGTIMVMZJANQLVKQEDAGDVFRPJUNGEUNAQZGZLECGYUXUEENJTBJLBQCRTBJDFHRRYIZETKZEMVDUFKSJHKFWHKUWQLSZFTIHHDDDUVHDWKBFUFPWNTDFIYCUQZEREEVLDKFEZMOQQJLTTUGSYQPFEUNLAVIDXFLGGTEZFKZBSFDQVGOGIPUFXHHDRKFFHQNTGPUAECNUVPDJMQCLQUMUNEDFQELZZVRRGKFFVOEEXBDMVPNFQXEZLGREDNQFMPNZGLFLPMRJQYALMGNUVPDXVKPDQUMEBEDMHDAFMJGZNUPLGESWJLLAETG";

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

    string K2_key = "ABSCISSA";
    string K2_plaintext = "";

    for (size_t i = 0; i < K2.length(); i++)
    {
        char char_cipher = K2[i];
        int index = i % K2_key.length();
        int j = 0;
        for (size_t l = 0; l < 26; l++)
        {
            if (K2_key[index] == vigenere[l][0])
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
                K2_plaintext += vigenere[0][l];
                break;
            }
        }
    }

    cout << K2_plaintext << endl;
    return 0;
}
