
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct mssa_arg {TYPE_2__* mra; TYPE_1__* rt; int member_0; } ;
struct TYPE_5__ {TYPE_2__* rt_arg; } ;
typedef TYPE_1__ range_tree_t ;
struct TYPE_6__ {scalar_t__ mra_floor_shift; int mra_bt; } ;
typedef TYPE_2__ metaslab_rt_arg_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (TYPE_1__*,int ,struct mssa_arg*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(range_tree_t *VAR_2)
{
 metaslab_rt_arg_t *VAR_3 = VAR_2->rt_arg;



 FUNC_0(FUNC_3(VAR_3->mra_bt));
 VAR_3->mra_floor_shift = 0;
 struct mssa_arg VAR_4 = {0};
 VAR_4.rt = VAR_2;
 VAR_4.mra = VAR_3;
 FUNC_2(VAR_2, VAR_0, &VAR_4);
}
