
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ int32_t ;
typedef int int16_t ;
typedef int filter_t ;
struct TYPE_8__ {int i_buffer; scalar_t__ p_buffer; } ;
typedef TYPE_1__ block_t ;


 int FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static block_t *FUNC_5(filter_t *VAR_0, block_t *VAR_1)
{
    block_t *VAR_2 = FUNC_1(VAR_1->i_buffer * 2);
    if (FUNC_4(VAR_2 == ((void*)0)))
        goto out;

    FUNC_2(VAR_2, VAR_1);
    int16_t *VAR_3 = (int16_t *)VAR_1->p_buffer;
    float *VAR_4 = (float *)VAR_2->p_buffer;
    for (size_t VAR_5 = VAR_1->i_buffer / 2; VAR_5--;)




    {


        union { float f; int32_t i; } VAR_6;
        VAR_6.i = *VAR_3++ + 0x43c00000;
        *VAR_4++ = VAR_6.f - 384.f;
    }

out:
    FUNC_3(VAR_1);
    FUNC_0(VAR_0);
    return VAR_2;
}
