
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int filter_t ;
struct TYPE_4__ {int i_buffer; scalar_t__ p_buffer; } ;
typedef TYPE_1__ block_t ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (float) ;

__attribute__((used)) static block_t *FUNC_2(filter_t *VAR_0, block_t *VAR_1)
{
    double *VAR_2 = (double *)VAR_1->p_buffer;
    uint8_t *VAR_3 = (uint8_t *)VAR_2;
    for (size_t VAR_4 = VAR_1->i_buffer / 8; VAR_4--;)
    {
        float VAR_5 = *(VAR_2++) * 128.;
        if (VAR_5 >= 127.f)
            *(VAR_3++) = 255;
        else
        if (VAR_5 <= -128.f)
            *(VAR_3++) = 0;
        else
            *(VAR_3++) = FUNC_1(VAR_5) + 128;
    }
    VAR_1->i_buffer /= 8;
    FUNC_0(VAR_0);
    return VAR_1;
}
