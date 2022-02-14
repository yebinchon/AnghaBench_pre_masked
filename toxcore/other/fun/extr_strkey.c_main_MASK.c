
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (unsigned char*,unsigned char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,char*,...) ;
 scalar_t__ FUNC_4 (unsigned char*,unsigned char*,size_t) ;
 int FUNC_5 (unsigned char*) ;
 int FUNC_6 (char*,char*,unsigned char*) ;
 int VAR_2 ;
 int VAR_3 ;
 size_t FUNC_7 (char*) ;

int FUNC_8(int VAR_4, char *VAR_5[])
{
    unsigned char VAR_6[VAR_0];
    unsigned char VAR_7[VAR_1];
    int VAR_8 = 0;
    size_t VAR_9;
    unsigned char VAR_10[VAR_0];

    if (VAR_4 == 3) {
        VAR_8 = FUNC_0(VAR_5[1]);
        char *VAR_11 = VAR_5[2];
        VAR_9 = FUNC_7(VAR_11);
        if (VAR_9 % 2 != 0) {
            FUNC_3(VAR_2, "Desired key should have an even number of letters\n");
            FUNC_2(1);
        }
        size_t VAR_12 = (VAR_8 < 0 ? 0 : VAR_8) + VAR_9/2;
        if (VAR_12 > VAR_0) {
            FUNC_3(VAR_2, "The given key with the given offset exceed public key's length\n");
            FUNC_2(1);
        }


        char *VAR_13 = VAR_11;
        size_t VAR_14;
        for (VAR_14 = 0; VAR_14 < VAR_9; VAR_13 += 2) {
            FUNC_6(VAR_13, "%2hhx", &VAR_10[VAR_14]);
            ++VAR_14;
        }
    } else {
        FUNC_3(VAR_3, "Usage: executable <byte offset> <desired hex string with even number of letters>\n");
        FUNC_2(1);
    }

    VAR_9 /= 2;





    if (VAR_8 < 0) {
        int VAR_15 = 0;
        do {



            FUNC_1(VAR_6, VAR_7);
            int VAR_16;
            for (VAR_16 = 0; VAR_16 <= VAR_0 - VAR_9; VAR_16 ++) {
                if (FUNC_4(VAR_6 + VAR_16, VAR_10, VAR_9) == 0) {
                    VAR_15 = 1;
                    break;
                }
            }
        } while (!VAR_15);
    } else {
        unsigned char *VAR_17 = VAR_6 + VAR_8;

        do {



            FUNC_1(VAR_6, VAR_7);
        } while (FUNC_4(VAR_17, VAR_10, VAR_9) != 0);
    }

    FUNC_3(VAR_3, "Public key:  ");
    FUNC_5(VAR_6);
    FUNC_3(VAR_3, "\n");

    FUNC_3(VAR_3, "Private key: ");
    FUNC_5(VAR_7);
    FUNC_3(VAR_3, "\n");





    return 0;
}
