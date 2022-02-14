
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int mm_recover_ctx ;
typedef int int64_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int*,int) ;

__attribute__((used)) static int FUNC_1(mm_recover_ctx *VAR_1, int64_t *VAR_2, int VAR_3)
{
    uint8_t VAR_4;
    int VAR_5;
    int64_t VAR_6 = 0;
    int VAR_7 = 0;

    do {
        VAR_5 = FUNC_0(VAR_1, &VAR_4, 1);
        if (VAR_5 != 1)
            return VAR_0;

        VAR_6 |= (int64_t)(VAR_4 & 0x7F) << VAR_7;
        VAR_7 += 7;
    } while (VAR_4 & 0x80);

    if (VAR_3)
        VAR_6 = ~VAR_6;
    *VAR_2 = VAR_6;
    return 0;
}
