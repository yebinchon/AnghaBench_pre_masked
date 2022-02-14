
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {void* ui64; } ;
struct TYPE_9__ {TYPE_1__ value; } ;
typedef TYPE_2__ kstat_named_t ;
struct TYPE_10__ {int * arcs_esize; int arcs_size; } ;
typedef TYPE_3__ arc_state_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 void* FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(arc_state_t *VAR_2, kstat_named_t *VAR_3,
    kstat_named_t *VAR_4, kstat_named_t *VAR_5)
{
 VAR_3->value.ui64 = FUNC_0(&VAR_2->arcs_size);
 VAR_4->value.ui64 =
     FUNC_0(&VAR_2->arcs_esize[VAR_0]);
 VAR_5->value.ui64 =
     FUNC_0(&VAR_2->arcs_esize[VAR_1]);
}
