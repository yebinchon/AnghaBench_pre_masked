
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int p_blocks; } ;
struct TYPE_10__ {TYPE_1__ queue; int * p_skel; int * idx; int fmt; int fmt_old; struct TYPE_10__* p_headers; int os; scalar_t__ p_es; } ;
typedef TYPE_2__ logical_stream_t ;
struct TYPE_11__ {int out; TYPE_4__* p_sys; } ;
typedef TYPE_3__ demux_t ;
struct TYPE_12__ {TYPE_2__* p_skelstream; } ;
typedef TYPE_4__ demux_sys_t ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8( demux_t *VAR_0, logical_stream_t *VAR_1 )
{
    demux_sys_t *VAR_2 = VAR_0->p_sys;

    if( VAR_1->p_es )
        FUNC_4( VAR_0->out, VAR_1->p_es );

    FUNC_6( &VAR_1->os );
    FUNC_5( VAR_1->p_headers );

    FUNC_0( VAR_1 );

    FUNC_3( &VAR_1->fmt_old );
    FUNC_3( &VAR_1->fmt );

    if ( VAR_1->idx != ((void*)0))
    {
        FUNC_7( VAR_1->idx );
    }

    FUNC_1( VAR_1->p_skel );
    VAR_1->p_skel = ((void*)0);
    if( VAR_2->p_skelstream == VAR_1 )
        VAR_2->p_skelstream = ((void*)0);


    FUNC_2( VAR_1->queue.p_blocks );

    FUNC_5( VAR_1 );
}
