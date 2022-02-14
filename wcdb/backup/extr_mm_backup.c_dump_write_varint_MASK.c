
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int mm_backup_ctx ;
typedef int int64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int*,int) ;

__attribute__((used)) static int FUNC_1(mm_backup_ctx *VAR_2, int64_t VAR_3)
{
    uint8_t VAR_4[12];
    uint8_t *VAR_5 = VAR_4;

    if (VAR_3 < 0) {
        *VAR_5++ = VAR_1;
        VAR_3 = ~VAR_3;
    } else
        *VAR_5++ = VAR_0;

    do {
        uint8_t VAR_6 = VAR_3 & 0x7F;
        VAR_3 >>= 7;
        if (VAR_3)
            VAR_6 |= 0x80;
        *VAR_5++ = VAR_6;
    } while (VAR_3);

    return FUNC_0(VAR_2, VAR_4, VAR_5 - VAR_4);
}
