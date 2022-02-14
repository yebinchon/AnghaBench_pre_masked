
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t i_buffer; scalar_t__ p_buffer; } ;
typedef TYPE_1__ block_t ;
typedef int audio_volume_t ;


 int FUNC_0 (float*,float*,size_t,float) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (size_t) ;

__attribute__((used)) static void FUNC_3(audio_volume_t *VAR_0, block_t *VAR_1, float VAR_2)
{
    float *VAR_3 = (float *)VAR_1->p_buffer;
    size_t VAR_4 = VAR_1->i_buffer;

    if (VAR_2 == 1.0)
        return;


    FUNC_1(((uintptr_t)VAR_3 & 3) == 0);
    while (FUNC_2((uintptr_t)VAR_3 & 12))
    {
        *(VAR_3++) *= VAR_2;
        VAR_4 -= 4;
    }

    FUNC_1((VAR_4 & 3) == 0);
    while (FUNC_2(VAR_4 & 12))
    {
        VAR_4 -= 4;
        VAR_3[VAR_4 / 4] *= VAR_2;
    }

    FUNC_0(VAR_3, VAR_3, VAR_4, VAR_2);
    (void) VAR_0;
}
