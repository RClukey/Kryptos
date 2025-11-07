def string_to_2d_vector(input_str, row_length):
    output = []
    total_length = len(input_str)

    for i in range(0, total_length, row_length):
        row = []
        for j in range(i, i + row_length):
            row.append(input_str[j])
        output.append(row)

    return output

def two_d_vector_to_string(input_vec):
    output = ""

    for r in range(len(input_vec)):
        for c in range(len(input_vec[r])):
            output += str(input_vec[r][c])

    return output

def vector_rotation(input_vec):
    rotated = []

    for c in range(len(input_vec[0])):
        row = []
        for r in range(len(input_vec) - 1, -1, -1):
            row.append(input_vec[r][c])
        rotated.append(row)

    return rotated


K3 = "ENDYAHROHNLSRHEOCPTEOIBIDYSHNAIACHTNREYULDSLLSLLNOHSNOSMRWXMNETPRNGATIHNRARPESLNNELEBLPIIACAEWMTWNDITEENRAHCTENEUDRETNHAEOETFOLSEDTIWENHAEIOYTEYQHEENCTAYCREIFTBRSPAMHHEWENATAMATEGYEERLBTEEFOASFIOTUETUAEOTOARMAEERTNRTIBSEDDNIAAHTTMSTEWPIEROAGRIEWFEBAECTDDHILCEIHSITEGOEAOSDDRYDLORITRKLMLEHAGTDHARDPNEOHMGFMFEUHEECDMRIPFEIMEHNLSSTTRTVDOHW"
K3_plaintext = ""

K3_step1 = string_to_2d_vector(K3, 24)
K3_step1_rotated = vector_rotation(K3_step1)
K3_step1_output = two_d_vector_to_string(K3_step1_rotated)

K3_step2 = string_to_2d_vector(K3_step1_output, 8)
K3_step2_rotated = vector_rotation(K3_step2)
K3_plaintext = two_d_vector_to_string(K3_step2_rotated)

print(K3_plaintext)