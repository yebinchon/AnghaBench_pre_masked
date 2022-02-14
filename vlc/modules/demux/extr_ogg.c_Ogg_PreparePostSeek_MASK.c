
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int i_streams; int i_pcr; int oy; TYPE_2__** pp_stream; } ;
typedef TYPE_1__ demux_sys_t ;
struct TYPE_5__ {int i_next_block_flags; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2( demux_sys_t *VAR_2 )
{
    for( int VAR_3 = 0; VAR_3 < VAR_2->i_streams; VAR_3++ )
    {
        FUNC_0( VAR_2->pp_stream[VAR_3] );
        VAR_2->pp_stream[VAR_3]->i_next_block_flags = VAR_0;
    }

    FUNC_1( &VAR_2->oy );
    VAR_2->i_pcr = VAR_1;
}
