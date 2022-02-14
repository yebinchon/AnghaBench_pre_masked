
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct mssa_arg {int * mra; int * rt; } ;
typedef int range_tree_t ;
struct TYPE_5__ {int member_0; } ;
typedef TYPE_1__ range_seg_max_t ;
typedef int metaslab_rt_arg_t ;


 int FUNC_0 (int *,TYPE_1__*,int *) ;
 int FUNC_1 (TYPE_1__*,int *,scalar_t__) ;
 int FUNC_2 (TYPE_1__*,int *,scalar_t__) ;

__attribute__((used)) static void
FUNC_3(void *VAR_0, uint64_t VAR_1, uint64_t VAR_2)
{
 struct mssa_arg *VAR_3 = VAR_0;
 range_tree_t *VAR_4 = VAR_3->rt;
 metaslab_rt_arg_t *VAR_5 = VAR_3->mra;
 range_seg_max_t VAR_6 = {0};
 FUNC_2(&VAR_6, VAR_4, VAR_1);
 FUNC_1(&VAR_6, VAR_4, VAR_1 + VAR_2);
 FUNC_0(VAR_4, &VAR_6, VAR_5);
}
