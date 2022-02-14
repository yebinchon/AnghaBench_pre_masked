
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {size_t i_count; int * pp_elems; } ;
struct TYPE_4__ {int base_url; TYPE_2__ hds_streams; } ;
typedef TYPE_1__ stream_sys_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_3( stream_sys_t *VAR_0 )
{
    for( size_t VAR_1 = 0; VAR_1 < VAR_0->hds_streams.i_count ; VAR_1++ )
        FUNC_1( VAR_0->hds_streams.pp_elems[VAR_1] );
    FUNC_2( &VAR_0->hds_streams );
    FUNC_0( VAR_0->base_url );
}
