
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int p_next; } ;
typedef TYPE_1__ sout_stream_t ;
struct TYPE_8__ {int b_streamswap; int id; } ;
typedef TYPE_2__ sout_stream_id_sys_t ;
struct TYPE_9__ {int i_flags; } ;
typedef TYPE_3__ block_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,TYPE_3__*) ;

__attribute__((used)) static int FUNC_1( sout_stream_t *VAR_1, void *VAR_2, block_t *VAR_3 )
{
    sout_stream_id_sys_t *VAR_4 = (sout_stream_id_sys_t *)VAR_2;
    if ( VAR_4->b_streamswap )
    {
        VAR_4->b_streamswap = 0;
        VAR_3->i_flags |= VAR_0;
    }
    return FUNC_0( VAR_1->p_next, VAR_4->id, VAR_3 );
}
