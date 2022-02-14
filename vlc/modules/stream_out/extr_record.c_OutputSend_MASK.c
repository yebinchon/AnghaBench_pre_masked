
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ sout_stream_t ;
struct TYPE_13__ {scalar_t__ i_dts_start; size_t i_size; scalar_t__ b_drop; int p_out; } ;
typedef TYPE_2__ sout_stream_sys_t ;
struct TYPE_14__ {int b_wait_key; int b_wait_start; int pp_last; int id; } ;
typedef TYPE_3__ sout_stream_id_sys_t ;
struct TYPE_15__ {int i_flags; scalar_t__ i_dts; } ;
typedef TYPE_4__ block_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*,int *,size_t*,int *) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (int ,int ,TYPE_4__*) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5( sout_stream_t *VAR_2, sout_stream_id_sys_t *VAR_3, block_t *VAR_4 )
{
    sout_stream_sys_t *VAR_5 = VAR_2->p_sys;

    if( VAR_3->id )
    {


        if( FUNC_4( VAR_3->b_wait_key ) )
        {
            if( VAR_4->i_flags & VAR_0 )
            {
                VAR_3->b_wait_key = 0;
                VAR_3->b_wait_start = 0;
            }

            if( ( VAR_4->i_flags & VAR_1 ) == 0 )
                VAR_3->b_wait_key = 0;
        }
        if( FUNC_4( VAR_3->b_wait_start ) )
        {
            if( VAR_4->i_dts >=VAR_5->i_dts_start )
                VAR_3->b_wait_start = 0;
        }
        if( FUNC_4( VAR_3->b_wait_key || VAR_3->b_wait_start ) )
            FUNC_2( VAR_4 );
        else
            FUNC_3( VAR_5->p_out, VAR_3->id, VAR_4 );
    }
    else if( VAR_5->b_drop )
    {
        FUNC_2( VAR_4 );
    }
    else
    {
        size_t VAR_6;

        FUNC_1( VAR_4, ((void*)0), &VAR_6, ((void*)0) );
        VAR_5->i_size += VAR_6;
        FUNC_0( &VAR_3->pp_last, VAR_4 );
    }
}
