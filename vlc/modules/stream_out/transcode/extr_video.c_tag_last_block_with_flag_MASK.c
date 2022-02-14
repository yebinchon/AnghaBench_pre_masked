
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int i_flags; struct TYPE_3__* p_next; } ;
typedef TYPE_1__ block_t ;



__attribute__((used)) static void FUNC_0( block_t **VAR_0, int VAR_1 )
{
    block_t *VAR_2 = *VAR_0;
    if( VAR_2 )
    {
        while( VAR_2->p_next )
            VAR_2 = VAR_2->p_next;
        VAR_2->i_flags |= VAR_1;
    }
}
