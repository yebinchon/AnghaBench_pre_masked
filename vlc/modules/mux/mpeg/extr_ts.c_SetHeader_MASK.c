
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sout_buffer_chain_t ;
struct TYPE_3__ {int i_flags; struct TYPE_3__* p_next; } ;
typedef TYPE_1__ block_t ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1( sout_buffer_chain_t *VAR_1,
                        int VAR_2 )
{
    block_t *VAR_3 = FUNC_0( VAR_1 );
    while( VAR_2 > 0 )
    {
        VAR_3 = VAR_3->p_next;
        VAR_2--;
    }
    VAR_3->i_flags |= VAR_0;
}
