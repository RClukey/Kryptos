#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<vector<char>> stringTo2DVector(const string& input, size_t rowLength)
{
    vector<vector<char>> output;
    size_t totalLength = input.length();

    for (size_t i = 0; i < totalLength; i += rowLength) {
        vector<char> row;
        for (size_t j = i; j < i + rowLength && j < totalLength; j++) {
            row.push_back(input[j]);
        }
        output.push_back(row);
    }

    return output;
}

string TwoDVectorToString(const vector<vector<char>>& input)
{
    string output = "";

    for (size_t r = 0; r < input.size(); r++)
    {
        for (size_t c = 0; c < input[r].size(); c++)
        {
            output += input[r][c];
        }
    }

    return output;
}

vector<vector<char>> vectorRotation(const vector<vector<char>>& input)
{
    vector<vector<char>> rotated;

    for (size_t c = 0; c < input[0].size(); c++) {
        vector<char> row;
        for (int r = input.size()-1; r >= 0; r--) {
            row.push_back(input[r][c]);
        }
        rotated.push_back(row);
    }

    return rotated;
}

int main()
{
    string K3 = "ENDYAHROHNLSRHEOCPTEOIBIDYSHNAIACHTNREYULDSLLSLLNOHSNOSMRWXMNETPRNGATIHNRARPESLNNELEBLPIIACAEWMTWNDITEENRAHCTENEUDRETNHAEOETFOLSEDTIWENHAEIOYTEYQHEENCTAYCREIFTBRSPAMHHEWENATAMATEGYEERLBTEEFOASFIOTUETUAEOTOARMAEERTNRTIBSEDDNIAAHTTMSTEWPIEROAGRIEWFEBAECTDDHILCEIHSITEGOEAOSDDRYDLORITRKLMLEHAGTDHARDPNEOHMGFMFEUHEECDMRIPFEIMEHNLSSTTRTVDOHW";
    string K3_plaintext = "";

    vector<vector<char>> K3_step1 = stringTo2DVector(K3, 24);
    vector<vector<char>> K3_step1_rotated = vectorRotation(K3_step1);
    string K3_step1_output = TwoDVectorToString(K3_step1_rotated);

    vector<vector<char>> K3_step2 = stringTo2DVector(K3_step1_output, 8);
    vector<vector<char>> K3_step2_rotated = vectorRotation(K3_step2);
    K3_plaintext = TwoDVectorToString(K3_step2_rotated);

    cout << K3_plaintext << endl;
    return 0;
}
