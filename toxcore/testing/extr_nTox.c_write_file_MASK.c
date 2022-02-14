
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef int Tox ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,char*) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int const*,size_t,int,int *) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,char*,int,int) ;

void FUNC_6(Tox *VAR_1, uint32_t VAR_2, uint32_t VAR_3, uint64_t VAR_4, const uint8_t *VAR_5,
                size_t VAR_6, void *VAR_7)
{
    if (VAR_6 == 0) {
        char VAR_8[512];
        FUNC_5(VAR_8, "[t] %u file transfer: %u completed", VAR_2, VAR_3);
        FUNC_4(VAR_8);
        return;
    }

    char VAR_9[256];
    FUNC_5(VAR_9, "%u.%u.bin", VAR_2, VAR_3);
    FILE *VAR_10 = FUNC_1(VAR_9, "r+b");

    if (VAR_10 == ((void*)0))
        VAR_10 = FUNC_1(VAR_9, "wb");

    FUNC_2(VAR_10, VAR_4, VAR_0);

    if (FUNC_3(VAR_5, VAR_6, 1, VAR_10) != 1)
        FUNC_4("Error writing to file");

    FUNC_0(VAR_10);
}
