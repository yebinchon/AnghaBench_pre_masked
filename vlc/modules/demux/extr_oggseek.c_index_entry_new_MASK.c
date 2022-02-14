
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int i_pagepos_end; int * p_prev; int p_next; } ;
typedef TYPE_1__ demux_index_entry_t ;


 TYPE_1__* FUNC_0 (int) ;

__attribute__((used)) static demux_index_entry_t *FUNC_1( void )
{
    demux_index_entry_t *VAR_0 = FUNC_0( sizeof( demux_index_entry_t ) );
    if ( !VAR_0 ) return ((void*)0);
    VAR_0->p_next = *(VAR_0->p_prev = ((void*)0));
    VAR_0->i_pagepos_end = -1;
    return VAR_0;
}
