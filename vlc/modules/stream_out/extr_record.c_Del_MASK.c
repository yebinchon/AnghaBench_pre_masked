
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ sout_stream_t ;
struct TYPE_9__ {scalar_t__ i_id; int b_drop; scalar_t__ p_out; int id; } ;
typedef TYPE_2__ sout_stream_sys_t ;
struct TYPE_10__ {int fmt; scalar_t__ id; scalar_t__ p_first; } ;
typedef TYPE_3__ sout_stream_id_sys_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (scalar_t__,int ,TYPE_3__*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_7( sout_stream_t *VAR_0, void *VAR_1 )
{
    sout_stream_sys_t *VAR_2 = VAR_0->p_sys;
    sout_stream_id_sys_t *VAR_3 = (sout_stream_id_sys_t *)VAR_1;

    if( !VAR_2->p_out )
        FUNC_0( VAR_0 );

    if( VAR_3->p_first )
        FUNC_3( VAR_3->p_first );

    FUNC_2( !VAR_3->id || VAR_2->p_out );
    if( VAR_3->id )
        FUNC_6( VAR_2->p_out, VAR_3->id );

    FUNC_4( &VAR_3->fmt );

    FUNC_1( VAR_2->i_id, VAR_2->id, VAR_3 );

    if( VAR_2->i_id <= 0 )
    {
        if( !VAR_2->p_out )
            VAR_2->b_drop = 0;
    }

    FUNC_5( VAR_3 );
}
