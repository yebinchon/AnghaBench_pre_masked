
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {char* psz_name; int pace_nocontrol; int * p_cfg; int p_module; int * p_sys; int * pf_control; int * pf_flush; struct TYPE_11__* p_next; TYPE_2__* p_sout; } ;
typedef TYPE_1__ sout_stream_t ;
struct TYPE_12__ {int i_out_pace_nocontrol; } ;
typedef TYPE_2__ sout_instance_t ;
typedef int config_chain_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_1__*,char*,char*,int) ;
 int FUNC_2 (TYPE_2__*,char*,char*) ;
 int FUNC_3 (TYPE_1__*) ;
 TYPE_1__* FUNC_4 (TYPE_2__*,int,char*) ;

__attribute__((used)) static sout_stream_t *FUNC_5( sout_instance_t *VAR_0, char *VAR_1,
                               config_chain_t *VAR_2, sout_stream_t *VAR_3)
{
    sout_stream_t *VAR_4;

    FUNC_0(VAR_1);

    VAR_4 = FUNC_4( VAR_0, sizeof( *VAR_4 ), "stream out" );
    if( !VAR_4 )
        return ((void*)0);

    VAR_4->p_sout = VAR_0;
    VAR_4->psz_name = VAR_1;
    VAR_4->p_cfg = VAR_2;
    VAR_4->p_next = VAR_3;
    VAR_4->pf_flush = ((void*)0);
    VAR_4->pf_control = ((void*)0);
    VAR_4->pace_nocontrol = 0;
    VAR_4->p_sys = ((void*)0);

    FUNC_2( VAR_0, "stream=`%s'", VAR_4->psz_name );

    VAR_4->p_module =
        FUNC_1( VAR_4, "sout stream", VAR_4->psz_name, 1 );

    if( !VAR_4->p_module )
    {

        VAR_4->psz_name = ((void*)0);
        VAR_4->p_cfg = ((void*)0);

        FUNC_3( VAR_4 );
        return ((void*)0);
    }

    VAR_0->i_out_pace_nocontrol += VAR_4->pace_nocontrol;
    return VAR_4;
}
