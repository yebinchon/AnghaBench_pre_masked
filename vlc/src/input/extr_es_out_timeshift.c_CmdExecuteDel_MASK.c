
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_4__* p_es; } ;
struct TYPE_7__ {TYPE_1__ del; } ;
struct TYPE_8__ {TYPE_2__ u; } ;
typedef TYPE_3__ ts_cmd_t ;
typedef int es_out_t ;
struct TYPE_9__ {scalar_t__ p_es; } ;


 int FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (TYPE_4__*) ;

__attribute__((used)) static void FUNC_2( es_out_t *VAR_0, ts_cmd_t *VAR_1 )
{
    if( VAR_1->u.del.p_es->p_es )
        FUNC_0( VAR_0, VAR_1->u.del.p_es->p_es );
    FUNC_1( VAR_1->u.del.p_es );
}
