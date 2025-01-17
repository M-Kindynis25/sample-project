// stats.h
// Απλά στατιστικά στοιχεία για πίνακες ακεραίων

#pragma once // #include το πολύ μία φοράν

#include <limits.h>     // σταθερές INT_MIN, INT_MAX

// Πιο κατανοητό να γράφουμε "Pointer" παρά "void*"
typedef void* Pointer;

// Μια μεταβλητή τύπου CompareFunc είναι δείκτης σε συνάρτηση που
// συγκρίνει 2 στοιχεία a και b και επιστρέφει έναν ακέραιο με τιμή:
// < 0  αν a <  b
//   0  αν a == b
// > 0  αν a >  b
typedef int (*CompareFunc)(Pointer a, Pointer b);

// Επιστρέφει το μικρότερο στοιχείο του array με μέγεθος size (ΙΝΤ_ΜΑΧ αν size == 0)
int stats_find_min(int array[], int size);

// Επιστρέφει το μεγαλύτερο στοιχείο του array με μέγεθος size (ΙΝΤ_MIN αν size == 0)
int stats_find_max(int array[], int size);

// Επιστρέφει το μεγαλύτερο από τα a, b, όπου η σύγκριση γίνεται
// με βάση τη συνάρτηση compare.
Pointer generic_max(Pointer a, Pointer b, CompareFunc comp);

// Συγκρίνει 2 ακεραίους a, b
// Επιστρέφει αρνητικός, μηδέν ή θετικός, ανάλογα με τη διάταξη των a,b
int compare_ints(Pointer a, Pointer b);

// Συγκρίνει 2 συμβολοσειρές a, b
// Επιστρέφει αρνητικός, μηδέν ή θετικός, ανάλογα με τη διάταξη των a,b
int compare_string(Pointer a, Pointer b);