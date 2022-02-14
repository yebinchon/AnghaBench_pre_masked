
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ decoder_t ;
struct TYPE_8__ {int i_next_block_flags; int b_frame_slice; scalar_t__ b_waiting_iframe; } ;
typedef TYPE_2__ decoder_sys_t ;
struct TYPE_9__ {int i_flags; } ;
typedef TYPE_3__ block_t ;


 TYPE_3__* FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static block_t * FUNC_1( void *VAR_0 )
{
    decoder_t *VAR_1 = VAR_0;
    decoder_sys_t *VAR_2 = VAR_1->p_sys;

    if( VAR_2->b_waiting_iframe || !VAR_2->b_frame_slice )
        return ((void*)0);

    block_t *VAR_3 = FUNC_0( VAR_1 );
    if( VAR_3 )
    {
        VAR_3->i_flags |= VAR_2->i_next_block_flags;
        VAR_2->i_next_block_flags = 0;
    }

    return VAR_3;
}
