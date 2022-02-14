
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* p_es; int * p_block; } ;
struct TYPE_7__ {TYPE_3__ send; } ;
struct TYPE_9__ {TYPE_2__ u; } ;
typedef TYPE_4__ ts_cmd_t ;
typedef int es_out_t ;
typedef int block_t ;
struct TYPE_6__ {scalar_t__ p_es; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,scalar_t__,int *) ;

__attribute__((used)) static int FUNC_2( es_out_t *VAR_1, ts_cmd_t *VAR_2 )
{
    block_t *VAR_3 = VAR_2->u.send.p_block;

    VAR_2->u.send.p_block = ((void*)0);

    if( VAR_3 )
    {
        if( VAR_2->u.send.p_es->p_es )
            return FUNC_1( VAR_1, VAR_2->u.send.p_es->p_es, VAR_3 );
        FUNC_0( VAR_3 );
    }
    return VAR_0;
}
