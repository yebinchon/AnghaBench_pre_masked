
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int next; int current; int i_flags; int i_dts; int i_pts; } ;
typedef TYPE_1__ cc_storage_t ;
struct TYPE_6__ {int i_flags; int i_dts; int i_pts; } ;
typedef TYPE_2__ block_t ;


 int FUNC_0 (int *) ;

void FUNC_1( cc_storage_t *VAR_0, block_t *VAR_1 )
{
    VAR_0->i_pts = VAR_1->i_pts;
    VAR_0->i_dts = VAR_1->i_dts;
    VAR_0->i_flags = VAR_1->i_flags;
    VAR_0->current = VAR_0->next;
    FUNC_0( &VAR_0->next );
}
