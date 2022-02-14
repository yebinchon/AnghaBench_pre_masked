
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {TYPE_1__* p_sout; } ;
typedef TYPE_2__ sout_stream_t ;
struct TYPE_11__ {TYPE_4__* p_mux; int p_input; } ;
typedef TYPE_3__ sout_stream_id_sys_t ;
typedef int sout_access_out_t ;
struct TYPE_12__ {int * p_access; } ;
struct TYPE_9__ {int i_out_pace_nocontrol; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_4__*,int ) ;

__attribute__((used)) static void FUNC_6( sout_stream_t *VAR_0, void *VAR_1 )
{
    FUNC_0(VAR_0);
    sout_stream_id_sys_t *VAR_2 = (sout_stream_id_sys_t *)VAR_1;
    sout_access_out_t *VAR_3 = VAR_2->p_mux->p_access;

    FUNC_5( VAR_2->p_mux, VAR_2->p_input );
    FUNC_4( VAR_2->p_mux );
    if( !FUNC_2( VAR_3 ) )
        VAR_0->p_sout->i_out_pace_nocontrol--;
    FUNC_3( VAR_3 );

    FUNC_1( VAR_2 );
}
