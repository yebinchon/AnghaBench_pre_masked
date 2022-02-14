
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int p_next; scalar_t__ p_sys; } ;
typedef TYPE_1__ sout_stream_t ;
struct TYPE_8__ {int pp_es; int i_es_num; } ;
typedef TYPE_2__ sout_stream_sys_t ;
struct TYPE_9__ {int fmt; int * id; } ;
typedef TYPE_3__ sout_stream_id_sys_t ;


 int FUNC_0 (int ,int ,TYPE_3__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4( sout_stream_t *VAR_0, void *VAR_1 )
{
    sout_stream_sys_t *VAR_2 = (sout_stream_sys_t *)VAR_0->p_sys;
    sout_stream_id_sys_t *VAR_3 = (sout_stream_id_sys_t *)VAR_1;

    if( VAR_3->id != ((void*)0) )
        FUNC_3( VAR_0->p_next, VAR_3->id );

    FUNC_0( VAR_2->i_es_num, VAR_2->pp_es, VAR_3 );
    FUNC_1( &VAR_3->fmt );
    FUNC_2( VAR_3 );
}
