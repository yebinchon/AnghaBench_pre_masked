
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int i_version; int * cdtpid; int * tdtpid; int * eitpid; int handle; } ;
typedef TYPE_1__ ts_si_t ;
typedef int demux_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,int *) ;
 TYPE_1__* FUNC_2 (int) ;

ts_si_t *FUNC_3( demux_t *VAR_0 )
{
    ts_si_t *VAR_1 = FUNC_2( sizeof( ts_si_t ) );
    if( !VAR_1 )
        return ((void*)0);

    if( !FUNC_1( VAR_0, &VAR_1->handle ) )
    {
        FUNC_0( VAR_1 );
        return ((void*)0);
    }

    VAR_1->i_version = -1;
    VAR_1->eitpid = ((void*)0);
    VAR_1->tdtpid = ((void*)0);
    VAR_1->cdtpid = ((void*)0);

    return VAR_1;
}
