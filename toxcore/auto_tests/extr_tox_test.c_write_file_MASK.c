
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
typedef int Tox ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *,int const*,size_t) ;
 int FUNC_2 (int *,int ,size_t) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

void FUNC_3(Tox *VAR_3, uint32_t VAR_4, uint32_t VAR_5, uint64_t VAR_6, const uint8_t *VAR_7,
                size_t VAR_8, void *VAR_9)
{
    if (*((uint32_t *)VAR_9) != 974536)
        return;

    if (VAR_2 != VAR_6) {
        FUNC_0("Bad position");
        return;
    }

    if (VAR_8 == 0) {
        VAR_0 = 1;
        return;
    }

    uint8_t VAR_10[VAR_8];
    FUNC_2(VAR_10, VAR_1, VAR_8);
    ++VAR_1;

    if (FUNC_1(VAR_10, VAR_7, VAR_8) == 0) {
        VAR_2 += VAR_8;
    } else {
        FUNC_0("FILE_CORRUPTED");
    }
}
