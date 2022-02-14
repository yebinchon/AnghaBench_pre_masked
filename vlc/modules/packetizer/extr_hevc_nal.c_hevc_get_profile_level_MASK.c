
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int i_extra; scalar_t__ p_extra; } ;
typedef TYPE_1__ es_format_t ;



bool FUNC_0(const es_format_t *VAR_0, uint8_t *VAR_1,
                            uint8_t *VAR_2, uint8_t *VAR_3)
{
    const uint8_t *VAR_4 = (const uint8_t*)VAR_0->p_extra;
    if(VAR_0->i_extra < 23 || VAR_4[0] != 1)
        return 0;


    if(VAR_1)
        *VAR_1 = VAR_4[1] & 0x1F;

    if(VAR_2)
        *VAR_2 = VAR_4[12];

    if (VAR_3)
        *VAR_3 = 1 + (VAR_4[21]&0x03);

    return 1;
}
