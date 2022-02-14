
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_3__* p_sys; } ;
typedef TYPE_2__ decoder_t ;
struct TYPE_7__ {TYPE_4__* p_chain; } ;
struct TYPE_9__ {TYPE_1__ pre; } ;
typedef TYPE_3__ decoder_sys_t ;
struct TYPE_10__ {int i_buffer; int * p_buffer; struct TYPE_10__* p_next; } ;
typedef TYPE_4__ block_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int,int,int ,TYPE_2__*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2( decoder_t *VAR_2 )
{
    decoder_sys_t *VAR_3 = VAR_2->p_sys;

    for( block_t *VAR_4 = VAR_3->pre.p_chain;
                  VAR_4; VAR_4 = VAR_4->p_next )
    {
        if( VAR_4->i_buffer < 5 )
            continue;

        if( FUNC_1(&VAR_4->p_buffer[4]) == VAR_0 )
        {
            FUNC_0( VAR_4->p_buffer, VAR_4->i_buffer,
                                  2 , VAR_1, VAR_2 );
        }
    }
}
