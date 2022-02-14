
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char uint8_t ;
typedef scalar_t__ uint64_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static uint64_t FUNC_1( uint8_t **restrict VAR_1,
                                          uint64_t *restrict VAR_2 )
{
    unsigned char *VAR_3 = *VAR_1;
    uint64_t VAR_4 = *VAR_2;
    unsigned char VAR_5;
    uint64_t VAR_6 = 0;

    do
    {
        if (FUNC_0(VAR_4 == 0))
            return -1;
        if (FUNC_0(VAR_6 > (VAR_0 >> 7)))
            return -1;

        VAR_5 = *(VAR_3++);
        VAR_4--;
        VAR_6 = (VAR_6 << 7) + (VAR_5 & 0x7f);
    }
    while (VAR_5 & 0x80);

    *VAR_1 = VAR_3;
    *VAR_2 = VAR_4;
    return VAR_6;
}
