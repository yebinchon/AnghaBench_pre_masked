
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int i_size; int * p_elems; } ;
struct TYPE_5__ {TYPE_4__ programs; int handle; } ;
typedef TYPE_1__ ts_pat_t ;
typedef int demux_t ;


 int FUNC_0 (TYPE_4__) ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*) ;

void FUNC_6( demux_t *VAR_0, ts_pat_t *VAR_1 )
{
    if( FUNC_2( VAR_1->handle ) )
        FUNC_4( VAR_1->handle );
    FUNC_3( VAR_1->handle );
    for( int VAR_2=0; VAR_2<VAR_1->programs.i_size; VAR_2++ )
        FUNC_1( VAR_0, VAR_1->programs.p_elems[VAR_2] );
    FUNC_0( VAR_1->programs );
    FUNC_5( VAR_1 );
}
