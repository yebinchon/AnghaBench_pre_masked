
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
typedef int mm_backup_ctx ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,scalar_t__,scalar_t__) ;
 int FUNC_2 (int *,scalar_t__,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,char const*,int) ;
 int FUNC_5 (char const*) ;

__attribute__((used)) static int
FUNC_6(mm_backup_ctx *VAR_3, uint8_t VAR_4, const void *VAR_5, int VAR_6)
{
    const char *VAR_7 = (const char *) VAR_5;
    int VAR_8;

    if (VAR_6 < 0)
        VAR_6 = FUNC_5(VAR_7);

    if (VAR_6 >= 65536) {
        uint32_t VAR_9 = VAR_6 & 0xFFFF0000;
        uint16_t VAR_10 = VAR_9 >> 16;
        VAR_8 = FUNC_0(VAR_3, VAR_2);
        VAR_8 |= FUNC_3(VAR_3, VAR_10);
        VAR_8 |= FUNC_4(VAR_3, VAR_7, VAR_9);
        if (VAR_8 != 0)
            return -1;
        VAR_6 -= VAR_9;
        VAR_7 += VAR_9;
    }

    if (VAR_6 < 256 &&
        (VAR_4 == VAR_1 || VAR_4 == VAR_0))
        VAR_8 = FUNC_1(VAR_3, ++VAR_4, (uint8_t) VAR_6);
    else
        VAR_8 = FUNC_2(VAR_3, VAR_4, (uint16_t) VAR_6);
    VAR_8 |= FUNC_4(VAR_3, VAR_7, VAR_6);
    if (VAR_8 != 0)
        return -1;

    return 0;
}
