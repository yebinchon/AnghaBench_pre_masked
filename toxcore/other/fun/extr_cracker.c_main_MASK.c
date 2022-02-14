
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint32_t ;


 int FUNC_0 (scalar_t__*,scalar_t__*) ;
 int FUNC_1 (unsigned char*) ;
 unsigned char* FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (scalar_t__*,scalar_t__*,int) ;
 int FUNC_4 (scalar_t__*,unsigned char*,int) ;
 int FUNC_5 (scalar_t__*) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (scalar_t__*,int) ;
 int FUNC_8 (char*) ;

int FUNC_9(int VAR_0, char *VAR_1[])
{
    if (VAR_0 < 2) {
        FUNC_6("usage: ./cracker public_key(or beginning of one in hex format)\n");
        return 0;
    }

    long long unsigned int VAR_2 = 0;

    uint32_t VAR_3 = FUNC_8(VAR_1[1]) / 2;
    unsigned char *VAR_4 = FUNC_2(VAR_1[1]);
    uint8_t VAR_5[32], VAR_6[32], VAR_7[32];

    if (VAR_3 > 32)
        VAR_3 = 32;

    FUNC_4(VAR_7, VAR_4, VAR_3);
    FUNC_1(VAR_4);
    FUNC_7(VAR_6, 32);

    while (1) {
        FUNC_0(VAR_5, VAR_6);
        uint32_t VAR_8;

        if (FUNC_3(VAR_7, VAR_5, VAR_3) == 0)
            break;

        for (VAR_8 = 32; VAR_8 != 0; --VAR_8) {
            VAR_6[VAR_8 - 1] += 1;

            if (VAR_6[VAR_8 - 1] != 0)
                break;
        }

        ++VAR_2;
    }

    FUNC_6("Public key:\n");
    FUNC_5(VAR_5);
    FUNC_6("\nPrivate key:\n");
    FUNC_5(VAR_6);
    FUNC_6("\n %llu keys tried\n", VAR_2);
    return 0;
}
