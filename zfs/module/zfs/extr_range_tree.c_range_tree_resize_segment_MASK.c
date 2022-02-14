
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_13__ {int rt_space; int rt_arg; TYPE_1__* rt_ops; } ;
typedef TYPE_2__ range_tree_t ;
typedef int range_seg_t ;
typedef scalar_t__ int64_t ;
struct TYPE_12__ {int (* rtop_add ) (TYPE_2__*,int *,int ) ;int (* rtop_remove ) (TYPE_2__*,int *,int ) ;} ;


 int FUNC_0 (TYPE_2__*,int *) ;
 int FUNC_1 (TYPE_2__*,int *) ;
 scalar_t__ FUNC_2 (int *,TYPE_2__*) ;
 scalar_t__ FUNC_3 (int *,TYPE_2__*) ;
 int FUNC_4 (int *,TYPE_2__*,scalar_t__) ;
 int FUNC_5 (int *,TYPE_2__*,scalar_t__) ;
 int FUNC_6 (TYPE_2__*,int *,int ) ;
 int FUNC_7 (TYPE_2__*,int *,int ) ;

void
FUNC_8(range_tree_t *VAR_0, range_seg_t *VAR_1,
    uint64_t VAR_2, uint64_t VAR_3)
{
 int64_t VAR_4 = VAR_3 - (FUNC_2(VAR_1, VAR_0) - FUNC_3(VAR_1, VAR_0));

 FUNC_0(VAR_0, VAR_1);
 if (VAR_0->rt_ops != ((void*)0) && VAR_0->rt_ops->rtop_remove != ((void*)0))
  VAR_0->rt_ops->rtop_remove(VAR_0, VAR_1, VAR_0->rt_arg);

 FUNC_5(VAR_1, VAR_0, VAR_2);
 FUNC_4(VAR_1, VAR_0, VAR_2 + VAR_3);

 FUNC_1(VAR_0, VAR_1);
 if (VAR_0->rt_ops != ((void*)0) && VAR_0->rt_ops->rtop_add != ((void*)0))
  VAR_0->rt_ops->rtop_add(VAR_0, VAR_1, VAR_0->rt_arg);

 VAR_0->rt_space += VAR_4;
}
