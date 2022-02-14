
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
    uint8_t *VAR_4 = (uint8_t*)VAR_0->p_extra;
    if(VAR_0->i_extra < 8)
        return 0;


    if (VAR_4[0] == 1 && VAR_0->i_extra >= 12)
    {
        if (VAR_3)
            *VAR_3 = 1 + (VAR_4[4]&0x03);
        VAR_4 += 8;
    }
    else if(!VAR_4[0] && !VAR_4[1])
    {
        if (!VAR_4[2] && VAR_4[3] == 1)
            VAR_4 += 4;
        else if (VAR_4[2] == 1)
            VAR_4 += 3;
        else
            return 0;
    }
    else return 0;

    if ( ((*VAR_4++)&0x1f) != 7) return 0;

    if (VAR_1)
        *VAR_1 = VAR_4[0];

    if (VAR_2)
        *VAR_2 = VAR_4[2];

    return 1;
}
