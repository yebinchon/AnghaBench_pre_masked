
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int pl_list; } ;
typedef TYPE_1__ procfs_list_t ;
struct TYPE_6__ {int cached_pos; void* cached_node; TYPE_1__* procfs_list; } ;
typedef TYPE_2__ procfs_list_cursor_t ;
typedef int loff_t ;


 int FUNC_0 (TYPE_1__*,void*) ;
 void* VAR_0 ;
 void* FUNC_1 (int *) ;
 void* FUNC_2 (int *,void*) ;

__attribute__((used)) static void *
FUNC_3(procfs_list_cursor_t *VAR_1, loff_t *VAR_2)
{
 void *VAR_3;
 procfs_list_t *VAR_4 = VAR_1->procfs_list;

 if (VAR_1->cached_node == VAR_0)
  VAR_3 = FUNC_1(&VAR_4->pl_list);
 else
  VAR_3 = FUNC_2(&VAR_4->pl_list,
      VAR_1->cached_node);

 if (VAR_3 != ((void*)0)) {
  VAR_1->cached_node = VAR_3;
  VAR_1->cached_pos = FUNC_0(VAR_4, VAR_1->cached_node);
  *VAR_2 = VAR_1->cached_pos;
 }
 return (VAR_3);
}
