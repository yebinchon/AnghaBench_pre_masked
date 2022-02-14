
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ decoder_t ;
struct TYPE_10__ {int i_next_block_flags; } ;
typedef TYPE_2__ decoder_sys_t ;
struct TYPE_11__ {scalar_t__* p_buffer; int i_flags; } ;
typedef TYPE_3__ block_t ;


 scalar_t__ VAR_0 ;
 TYPE_3__* FUNC_0 (TYPE_1__*,TYPE_3__*) ;

__attribute__((used)) static block_t *FUNC_1( void *VAR_1, bool *VAR_2, block_t *VAR_3 )
{
    decoder_t *VAR_4 = VAR_1;
    decoder_sys_t *VAR_5 = VAR_4->p_sys;


    *VAR_2 = VAR_3->p_buffer[3] == VAR_0;

    VAR_3 = FUNC_0( VAR_4, VAR_3 );
    if( VAR_3 )
    {
        VAR_3->i_flags |= VAR_5->i_next_block_flags;
        VAR_5->i_next_block_flags = 0;
    }
    else *VAR_2 = 0;

    return VAR_3;
}
