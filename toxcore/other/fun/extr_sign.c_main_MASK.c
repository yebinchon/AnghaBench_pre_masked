
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (char*,unsigned long long*,char*,int,unsigned char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (unsigned char*,unsigned char*) ;
 int FUNC_2 (char*,unsigned long long*,char*,int,unsigned char*) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (char*,char*) ;
 int FUNC_5 (unsigned char*) ;
 unsigned long long FUNC_6 (char*,int,unsigned long long,int *) ;
 unsigned char* FUNC_7 (char*) ;
 int FUNC_8 (char*,char**) ;
 char* FUNC_9 (int) ;
 int FUNC_10 (char*,char*,int) ;
 int FUNC_11 (char*,...) ;

int FUNC_12(int VAR_3, char *VAR_4[])
{
    unsigned char VAR_5[VAR_1];
    unsigned char VAR_6[VAR_2];

    if (VAR_3 == 2 && VAR_4[1][0] == 'g') {
        FUNC_1(VAR_5, VAR_6);
        FUNC_11("Public key:\n");
        int VAR_7;

        for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
            FUNC_11("%02hhX", VAR_5[VAR_7]);
        }

        FUNC_11("\nSecret key:\n");

        for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
            FUNC_11("%02hhX", VAR_6[VAR_7]);
        }

        FUNC_11("\n");
    }

    if (VAR_3 == 5 && VAR_4[1][0] == 's') {
        unsigned char *VAR_8 = FUNC_7(VAR_4[2]);
        char *VAR_9;
        int VAR_10 = FUNC_8(VAR_4[3], &VAR_9);

        if (VAR_10 < 0)
            goto fail;

        unsigned long long VAR_11;
        char *VAR_12 = FUNC_9(VAR_10 + VAR_0 * 2);
        FUNC_0(VAR_12, &VAR_11, VAR_9, VAR_10, VAR_8);
        FUNC_5(VAR_8);

        if (VAR_11 - VAR_10 != VAR_0)
            goto fail;

        FILE *VAR_13 = FUNC_4(VAR_4[4], "wb");

        if (VAR_13 == ((void*)0))
            goto fail;

        FUNC_10(VAR_12 + VAR_11, VAR_12, VAR_0);

        if (FUNC_6(VAR_12 + (VAR_11 - VAR_10), 1, VAR_11, VAR_13) != VAR_11)
            goto fail;

        FUNC_3(VAR_13);
        FUNC_11("Signed successfully.\n");
    }

    if (VAR_3 == 4 && VAR_4[1][0] == 'c') {
        unsigned char *VAR_14 = FUNC_7(VAR_4[2]);
        char *VAR_15;
        int VAR_16 = FUNC_8(VAR_4[3], &VAR_15);

        if (VAR_16 < 0)
            goto fail;

        char *VAR_17 = FUNC_9(VAR_16 + VAR_0);
        FUNC_10(VAR_17, VAR_15 + VAR_16 - VAR_0,
               VAR_0);
        FUNC_10(VAR_17 + VAR_0, VAR_15, VAR_16 - VAR_0);
        unsigned long long VAR_18;
        char *VAR_19 = FUNC_9(VAR_16);
        unsigned long long VAR_20;

        if (FUNC_2(VAR_19, &VAR_20, VAR_17, VAR_16, VAR_14) == -1) {
            FUNC_11("Failed checking sig.\n");
            goto fail;
        }

        FUNC_11("Checked successfully.\n");
    }

    return 0;

fail:
    FUNC_11("FAIL\n");
    return 1;
}
