#include "test.h"


int test_all_and();
int test_all_nop();
int test_all_transfert_test();
int test_all_sta();
int test_all_stx();

int main(int argc, char *argv[])
{
    test_all_and();
    test_all_nop();
    test_all_transfert_test();
    test_all_sta();
    test_all_stx();
    fprintf(stdout, "ALL TESTS PASSED\n");
}