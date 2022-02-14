
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * p_block; int * p_es; } ;
struct TYPE_6__ {TYPE_1__ send; } ;
struct TYPE_7__ {TYPE_2__ u; int i_date; int i_type; } ;
typedef TYPE_3__ ts_cmd_t ;
typedef int es_out_id_t ;
typedef int block_t ;


 int VAR_0 ;
 int FUNC_0 () ;

__attribute__((used)) static void FUNC_1( ts_cmd_t *VAR_1, es_out_id_t *VAR_2, block_t *VAR_3 )
{
    VAR_1->i_type = VAR_0;
    VAR_1->i_date = FUNC_0();
    VAR_1->u.send.p_es = VAR_2;
    VAR_1->u.send.p_block = VAR_3;
}
