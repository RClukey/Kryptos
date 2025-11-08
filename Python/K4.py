class CLUES:
    def __init__(self, position=0, cipher="", plain=""):
        self.position = position
        self.cipher = cipher
        self.plain = plain

    def setPos(self, x):
        self.position = x - 1

    def setCipher(self, x):
        self.cipher = x

    def setPlain(self, x):
        self.plain = x

    def returnPos(self, x):
        return self.position

    def returnCipher(self, x):
        return self.cipher

    def returnPlain(self, x):
        return self.plain

def main():
    K4 = "OBKRUOXOGHULBSOLIFBBWFLRVQQPRNGKSSOTWTQSJQSSEKZZWATJKLUDIAWINFBNYPVTTMZFPKWGDKZXTJCDIGKUHUAUEKCAR"

    vigenere = [
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
    ]

    clue1 = CLUES()
    clue2 = CLUES()

    clue1.setPos(64)
    clue1.setCipher("NYPVTTMZFPK")
    clue1.setPlain("BERLINCLOCK")

    clue2.setPos(22)
    clue2.setCipher("FLRVQQPRNGKSS")
    clue2.setPlain("EASTNORTHEAST")

if __name__ == "__main__":
    main()