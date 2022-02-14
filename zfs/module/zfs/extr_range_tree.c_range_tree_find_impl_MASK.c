
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_5__ {int rt_root; } ;
typedef TYPE_1__ range_tree_t ;
typedef int range_seg_t ;
typedef int range_seg_max_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,TYPE_1__*,scalar_t__) ;
 int FUNC_2 (int *,TYPE_1__*,scalar_t__) ;
 int * FUNC_3 (int *,int *,int *) ;

__attribute__((used)) static range_seg_t *
FUNC_4(range_tree_t *VAR_0, uint64_t VAR_1, uint64_t VAR_2)
{
 range_seg_max_t VAR_3;
 uint64_t VAR_4 = VAR_1 + VAR_2;

 FUNC_0(VAR_2 != 0);

 FUNC_2(&VAR_3, VAR_0, VAR_1);
 FUNC_1(&VAR_3, VAR_0, VAR_4);
 return (FUNC_3(&VAR_0->rt_root, &VAR_3, ((void*)0)));
}
