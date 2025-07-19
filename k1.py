K1 = "EMUFPHZLRFAXYUSDJKZLDKRNSHGNFIVJYQTQUXQBQVYUVLLTREVJYQTMKYRDMFD"

vigenere_table = [" ABCDEFGHIJKLMNOPQRSTUVWXYZABCD",
                 "AKRYPTOSABCDEFGHIJLMNQUVWXZKRYP",
                 "BRYPTOSABCDEFGHIJLMNQUVWXZKRYPT",
                 "CYPTOSABCDEFGHIJLMNQUVWXZKRYPTO",
                 "DPTOSABCDEFGHIJLMNQUVWXZKRYPTOS",
                 "ETOSABCDEFGHIJLMNQUVWXZKRYPTOSA",
                 "FOSABCDEFGHIJLMNQUVWXZKRYPTOSAB",
                 "GSABCDEFGHIJLMNQUVWXZKRYPTOSABC",
                 "HABCDEFGHIJLMNQUVWXZKRYPTOSABCD",
                 "IBCDEFGHIJLMNQUVWXZKRYPTOSABCDE",
                 "JCDEFGHIJLMNQUVWXZKRYPTOSABCDEF",
                 "KDEFGHIJLMNQUVWXZKRYPTOSABCDEFG",
                 "LEFGHIJLMNQUVWXZKRYPTOSABCDEFGH",
                 "MFGHIJLMNQUVWXZKRYPTOSABCDEFGHI",
                 "NGHIJLMNQUVWXZKRYPTOSABCDEFGHIJL",
                 "OHIJLMNQUVWXZKRYPTOSABCDEFGHIJL",
                 "PIJLMNQUVWXZKRYPTOSABCDEFGHIJLM",
                 "QJLMNQUVWXZKRYPTOSABCDEFGHIJLMN",
                 "RLMNQUVWXZKRYPTOSABCDEFGHIJLMNQ",
                 "SMNQUVWXZKRYPTOSABCDEFGHIJLMNQU",
                 "TNQUVWXZKRYPTOSABCDEFGHIJLMNQUV",
                 "UQUVWXZKRYPTOSABCDEFGHIJLMNQUVW",
                 "VUVWXZKRYPTOSABCDEFGHIJLMNQUVWX",
                 "WVWXZKRYPTOSABCDEFGHIJLMNQUVWXZ",
                 "XWXZKRYPTOSABCDEFGHIJLMNQUVWXZK",
                 "YXZKRYPTOSABCDEFGHIJLMNQUVWXZKR",
                 "ZZKRYPTOSABCDEFGHIJLMNQUVWXZKRY",
                 " ABCDEFGHIJKLMNOPQRSTUVWXYZABCD"]

better_vigenere = ["KRYPTOSABCDEFGHIJLMNQUVWXZ",
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
                   "ZKRYPTOSABCDEFGHIJLMNQUVWX"]

K1_key = "PALIMPSEST"
K1_plaintext = ""

for i in range(0,len(K1)):
    char_cipher = K1[i:i+1]
    index = i % len(K1_key)
    for f in range(0,26):
        if K1_key[index:index+1] == better_vigenere[f][0:1]:
            j = f
            break
    for l in range(0,26):
        char_plain = better_vigenere[j][l:l+1]
        if char_cipher == char_plain:
            K1_plaintext += better_vigenere[0][l:l+1]
            break

print(K1_plaintext)