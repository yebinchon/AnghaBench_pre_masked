
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {TYPE_2__* b; } ;
typedef TYPE_1__ bo_t ;
struct TYPE_11__ {scalar_t__ i_buffer; int * p_buffer; } ;


 TYPE_2__* FUNC_0 (TYPE_2__*,int ,scalar_t__) ;
 int FUNC_1 (TYPE_1__*) ;
 size_t FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,size_t) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int *,int *,scalar_t__) ;

void FUNC_6 (bo_t *VAR_0, bo_t *VAR_1)
{
    if(VAR_1 && VAR_1->b && VAR_0 && VAR_0->b)
    {
        FUNC_3(VAR_1, FUNC_2( VAR_1 ));
        size_t VAR_2 = FUNC_2( VAR_0 );
        VAR_0->b = FUNC_0(VAR_0->b, 0, VAR_0->b->i_buffer + VAR_1->b->i_buffer);
        if(FUNC_4(VAR_0->b))
            FUNC_5(&VAR_0->b->p_buffer[VAR_2], VAR_1->b->p_buffer, VAR_1->b->i_buffer);
    }
    FUNC_1(VAR_1);
}
