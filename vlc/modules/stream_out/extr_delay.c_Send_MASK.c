
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int p_next; scalar_t__ p_sys; } ;
typedef TYPE_1__ sout_stream_t ;
struct TYPE_8__ {void* id; scalar_t__ i_delay; } ;
typedef TYPE_2__ sout_stream_sys_t ;
struct TYPE_9__ {scalar_t__ i_pts; scalar_t__ i_dts; struct TYPE_9__* p_next; } ;
typedef TYPE_3__ block_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,void*,TYPE_3__*) ;

__attribute__((used)) static int FUNC_1( sout_stream_t *VAR_1, void *VAR_2, block_t *VAR_3 )
{
    sout_stream_sys_t *VAR_4 = (sout_stream_sys_t *)VAR_1->p_sys;

    if ( VAR_2 == VAR_4->id )
    {
        block_t *VAR_5 = VAR_3;
        while ( VAR_5 != ((void*)0) )
        {
            if ( VAR_5->i_pts != VAR_0 )
                VAR_5->i_pts += VAR_4->i_delay;
            if ( VAR_5->i_dts != VAR_0 )
                VAR_5->i_dts += VAR_4->i_delay;
            VAR_5 = VAR_5->p_next;
        }
    }

    return FUNC_0( VAR_1->p_next, VAR_2, VAR_3 );
}
