
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int fmt; scalar_t__ id; } ;
typedef TYPE_1__ ts_es_t ;
struct TYPE_7__ {int out; TYPE_3__* p_sys; } ;
typedef TYPE_2__ demux_t ;
struct TYPE_8__ {int i_pmt_es; } ;
typedef TYPE_3__ demux_sys_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,scalar_t__,int) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3( demux_t *VAR_1, ts_es_t *VAR_2 )
{
    demux_sys_t *VAR_3 = VAR_1->p_sys;

    if( VAR_2->id )
    {

        FUNC_1( VAR_1->out, VAR_0, VAR_2->id, 0 );
        FUNC_2( VAR_1->out, VAR_2->id );
        VAR_3->i_pmt_es--;
    }
    FUNC_0( &VAR_2->fmt );
}
