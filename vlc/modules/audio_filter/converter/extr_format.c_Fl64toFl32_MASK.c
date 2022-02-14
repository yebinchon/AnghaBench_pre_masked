
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int filter_t ;
struct TYPE_4__ {int i_buffer; scalar_t__ p_buffer; } ;
typedef TYPE_1__ block_t ;


 int FUNC_0 (int *) ;

__attribute__((used)) static block_t *FUNC_1(filter_t *VAR_0, block_t *VAR_1)
{
    double *VAR_2 = (double *)VAR_1->p_buffer;
    float *VAR_3 = (float *)VAR_2;
    for (size_t VAR_4 = VAR_1->i_buffer / 8; VAR_4--;)
        *(VAR_3++) = *(VAR_2++);

    FUNC_0(VAR_0);
    return VAR_1;
}
