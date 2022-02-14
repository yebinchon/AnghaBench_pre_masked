
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int es_out_id_t ;
struct TYPE_8__ {int out; TYPE_2__* p_sys; } ;
typedef TYPE_1__ demux_t ;
struct TYPE_9__ {int * p_es_audio; } ;
typedef TYPE_2__ demux_sys_t ;
struct TYPE_10__ {int i_pts; } ;
typedef TYPE_3__ block_t ;


 TYPE_3__* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int *,TYPE_3__*) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3( demux_t *VAR_0 )
{
    demux_sys_t *VAR_1;
    es_out_id_t *VAR_2;
    block_t *VAR_3;

    VAR_1 = VAR_0->p_sys;
    VAR_2 = VAR_1->p_es_audio;
    VAR_3 = FUNC_0( VAR_0 );

    if( VAR_3 )
    {
        FUNC_2( VAR_0->out, VAR_3->i_pts );
        FUNC_1( VAR_0->out, VAR_2, VAR_3 );
    }

    return 1;
}
