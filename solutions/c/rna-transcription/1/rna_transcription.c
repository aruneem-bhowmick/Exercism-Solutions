#include "rna_transcription.h"
#include <stdlib.h>
#include <string.h>

char *to_rna(const char *dna) {
    // Enough dynamically allocated memory to hold all chars in dna + the trailing '\0'
    char *rna = malloc(strlen(dna) + 1);

    // Return null if provided a null strand
    if (rna == NULL)
        return NULL;

    // For each nucleotide in the DNA strand, get its complement
    for (int i = 0; dna[i] != '\0'; i++)
        rna[i] = get_nucleotide_complement(dna[i]);

    // Mark the end of our RNA strand
    rna[strlen(dna)] = '\0';

    // Return our RNA strand
    return rna;
}

// Helper using switch statement to get a nucleotide's complement
char get_nucleotide_complement(char nucleotide) {
    switch(nucleotide) {
        case 'G':
            return 'C';
        case 'C':
            return 'G';
        case 'T':
            return 'A';
        case 'A':
            return 'U';
    }

    return '\0';
}