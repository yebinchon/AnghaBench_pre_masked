
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int filter_t ;
struct TYPE_4__ {unsigned int i_nb_samples; scalar_t__ p_buffer; } ;
typedef TYPE_1__ block_t ;



__attribute__((used)) static block_t *FUNC_0 (filter_t *VAR_0, block_t *VAR_1)
{
    const float VAR_2 = .70710678 ;
    float *VAR_3 = (float *)VAR_1->p_buffer;

    for (unsigned VAR_4 = VAR_1->i_nb_samples; VAR_4 > 0; VAR_4--)
    {
        float VAR_5 = (VAR_3[0] - VAR_3[1]) * VAR_2;

        *(VAR_3++) = VAR_5;
        *(VAR_3++) = VAR_5;

    }
    (void) VAR_0;
    return VAR_1;
}
