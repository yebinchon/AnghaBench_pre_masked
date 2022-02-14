
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ua_tree; scalar_t__ ua_debug; } ;
typedef TYPE_1__ uu_avl_t ;
typedef scalar_t__ uu_avl_index_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_1__*,scalar_t__) ;
 void* FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (char*,void*,void*,char*) ;

void *
FUNC_5(uu_avl_t *VAR_1, uu_avl_index_t VAR_2)
{
 if (VAR_1->ua_debug && !FUNC_2(VAR_1, VAR_2))
  FUNC_4("uu_avl_nearest_prev(%p, %p): %s\n",
      (void *)VAR_1, (void *)VAR_2, FUNC_0(VAR_2)?
      "outdated index" : "invalid index");
 return (FUNC_3(&VAR_1->ua_tree, FUNC_1(VAR_2), VAR_0));
}
