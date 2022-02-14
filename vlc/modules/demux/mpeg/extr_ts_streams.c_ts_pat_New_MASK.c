
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int i_version; int i_ts_id; int b_generated; int programs; int handle; } ;
typedef TYPE_1__ ts_pat_t ;
typedef int demux_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,int *) ;
 TYPE_1__* FUNC_3 (int) ;

ts_pat_t *FUNC_4( demux_t *VAR_0 )
{
    ts_pat_t *VAR_1 = FUNC_3( sizeof( ts_pat_t ) );
    if( !VAR_1 )
        return ((void*)0);

    if( !FUNC_2( VAR_0, &VAR_1->handle ) )
    {
        FUNC_1( VAR_1 );
        return ((void*)0);
    }

    VAR_1->i_version = -1;
    VAR_1->i_ts_id = -1;
    VAR_1->b_generated = 0;
    FUNC_0( VAR_1->programs );

    return VAR_1;
}
