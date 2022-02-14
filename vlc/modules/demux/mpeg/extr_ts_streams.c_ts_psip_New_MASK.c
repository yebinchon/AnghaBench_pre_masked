
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int i_version; int p_ctx; int * p_eas_es; int eit; int handle; } ;
typedef TYPE_1__ ts_psip_t ;
typedef int demux_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,int *) ;
 TYPE_1__* FUNC_3 (int) ;
 int FUNC_4 (int *,TYPE_1__*) ;
 int FUNC_5 () ;

ts_psip_t *FUNC_6( demux_t *VAR_0 )
{
    ts_psip_t *VAR_1 = FUNC_3( sizeof( ts_psip_t ) );
    if( !VAR_1 )
        return ((void*)0);

    if( !FUNC_2( VAR_0, &VAR_1->handle ) )
    {
        FUNC_1( VAR_1 );
        return ((void*)0);
    }

    FUNC_0( VAR_1->eit );
    VAR_1->i_version = -1;
    VAR_1->p_eas_es = ((void*)0);
    VAR_1->p_ctx = FUNC_5();
    if( !VAR_1->p_ctx )
    {
        FUNC_4( VAR_0, VAR_1 );
        VAR_1 = ((void*)0);
    }

    return VAR_1;
}
