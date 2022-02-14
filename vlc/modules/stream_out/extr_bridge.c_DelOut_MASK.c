
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ p_sys; } ;
typedef TYPE_1__ sout_stream_t ;
struct TYPE_6__ {int b_inited; TYPE_3__* p_es; } ;
typedef TYPE_2__ out_sout_stream_sys_t ;
struct TYPE_7__ {int b_empty; int b_changed; int * p_block; } ;
typedef TYPE_3__ bridged_es_t ;


 int FUNC_0 (void*) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4( sout_stream_t *VAR_1, void *VAR_2 )
{
    FUNC_0(VAR_2);
    out_sout_stream_sys_t *VAR_3 = (out_sout_stream_sys_t *)VAR_1->p_sys;
    bridged_es_t *VAR_4;

    if ( !VAR_3->b_inited )
        return;

    FUNC_2( &VAR_0 );

    VAR_4 = VAR_3->p_es;

    VAR_4->b_empty = 1;
    FUNC_1( VAR_4->p_block );
    VAR_4->p_block = ((void*)0);

    VAR_4->b_changed = 1;
    FUNC_3( &VAR_0 );

    VAR_3->b_inited = 0;
}
