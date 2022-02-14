
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * p_es; } ;
struct TYPE_6__ {TYPE_1__ del; } ;
struct TYPE_7__ {TYPE_2__ u; int i_date; int i_type; } ;
typedef TYPE_3__ ts_cmd_t ;
typedef int es_out_id_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;

__attribute__((used)) static int FUNC_1( ts_cmd_t *VAR_2, es_out_id_t *VAR_3 )
{
    VAR_2->i_type = VAR_0;
    VAR_2->i_date = FUNC_0();
    VAR_2->u.del.p_es = VAR_3;
    return VAR_1;
}
