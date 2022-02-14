
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int int32_t ;
typedef int int16_t ;
typedef int filter_t ;
struct TYPE_4__ {int i_buffer; scalar_t__ p_buffer; } ;
typedef TYPE_1__ block_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (float) ;

__attribute__((used)) static block_t *FUNC_2(filter_t *VAR_0, block_t *VAR_1)
{
    FUNC_0(VAR_0);
    float *VAR_2 = (float *)VAR_1->p_buffer;
    int16_t *VAR_3 = (int16_t *)VAR_2;
    for (int VAR_4 = VAR_1->i_buffer / 4; VAR_4--;) {
        union { float f; int32_t i; } VAR_5;
        VAR_5.f = *VAR_2++ + 384.f;
        if (VAR_5.i > 0x43c07fff)
            *VAR_3++ = 32767;
        else if (VAR_5.i < 0x43bf8000)
            *VAR_3++ = -32768;
        else
            *VAR_3++ = VAR_5.i - 0x43c00000;

    }
    VAR_1->i_buffer /= 2;
    return VAR_1;
}
