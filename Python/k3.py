K3 = "ENDYAHROHNLSRHEOCPTEOIBIDYSHNAIACHTNREYULDSLLSLLNOHSNOSMRWXMNETPRNGATIHNRARPESLNNELEBLPIIACAEWMTWNDITEENRAHCTENEUDRETNHAEOETFOLSEDTIWENHAEIOYTEYQHEENCTAYCREIFTBRSPAMHHEWENATAMATEGYEERLBTEEFOASFIOTUETUAEOTOARMAEERTNRTIBSEDDNIAAHTTMSTEWPIEROAGRIEWFEBAECTDDHILCEIHSITEGOEAOSDDRYDLORITRKLMLEHAGTDHARDPNEOHMGFMFEUHEECDMRIPFEIMEHNLSSTTRTVDOHW"

k3_plaintext_mid = ""
k3_plaintext = ""
line_counter = 0
counter = 0

while True:
    counter = 0

    if (line_counter > 21):
        break

    if counter*21+20-line_counter < len(K3):
        k3_plaintext_mid += K3[counter*21+20-line_counter:counter*21+21-line_counter]
        counter += 1

    else:
        line_counter += 1

print(k3_plaintext_mid)

line_counter = 0
counter = 0

while True:
    counter = 0

    if (line_counter > 28):
        break

    if counter*28+27-line_counter < len(K3):
        k3_plaintext += K3[counter*28+27-line_counter:counter*28+28-line_counter]
        counter += 1

    else:
        line_counter += 1

print(k3_plaintext)