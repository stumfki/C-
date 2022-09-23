#include <string>

std::string DNAStrand(const std::string& dna) {

    std::string rna;

    for (int i = 0; i < dna.size(); i++) {

        if (dna[i] == 'A') {

            rna.push_back('T');

        }
        else if (dna[i] == 'T') {
            rna.push_back('A');
        }
        else if (dna[i] == 'C') {
            rna.push_back('G');
        }
        else if (dna[i] == 'G') {
            rna.push_back('C');
        }

    }

    return rna;

}