
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int es_out_id_t ;
struct TYPE_7__ {int out; } ;
typedef TYPE_1__ demux_t ;
struct TYPE_8__ {int i_pts; int i_dts; } ;
typedef TYPE_2__ block_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,int *,TYPE_2__*) ;
 int FUNC_2 (int ,int ) ;

void FUNC_3 (demux_t *VAR_1, void *VAR_2, block_t *VAR_3)
{
    if (VAR_2)
    {
        VAR_3->i_dts = VAR_0;
        FUNC_2(VAR_1->out, VAR_3->i_pts);
        FUNC_1 (VAR_1->out, (es_out_id_t *)VAR_2, VAR_3);
    }
    else
        FUNC_0 (VAR_3);
}
