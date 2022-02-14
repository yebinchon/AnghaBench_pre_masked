
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ p_sys; } ;
typedef TYPE_1__ sout_stream_t ;
struct TYPE_9__ {TYPE_3__* p_es; } ;
typedef TYPE_2__ out_sout_stream_sys_t ;
struct TYPE_10__ {TYPE_4__** pp_last; } ;
typedef TYPE_3__ bridged_es_t ;
struct TYPE_11__ {struct TYPE_11__* p_next; } ;
typedef TYPE_4__ block_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3( sout_stream_t *VAR_2, void *VAR_3, block_t *VAR_4 )
{
    out_sout_stream_sys_t *VAR_5 = (out_sout_stream_sys_t *)VAR_2->p_sys;
    bridged_es_t *VAR_6;

    if ( (out_sout_stream_sys_t *)VAR_3 != VAR_5 )
    {
        FUNC_0( VAR_4 );
        return VAR_0;
    }

    FUNC_1( &VAR_1 );

    VAR_6 = VAR_5->p_es;
    *VAR_6->pp_last = VAR_4;
    while ( VAR_4 != ((void*)0) )
    {
        VAR_6->pp_last = &VAR_4->p_next;
        VAR_4 = VAR_4->p_next;
    }

    FUNC_2( &VAR_1 );

    return VAR_0;
}
