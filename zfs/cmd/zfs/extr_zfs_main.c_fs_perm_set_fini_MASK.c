
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int fs_perm_t ;
struct TYPE_9__ {int fsps_deleg_perm_avl_pool; int fsps_who_perm_avl_pool; int fsps_named_set_avl_pool; int fsps_list; } ;
typedef TYPE_1__ fs_perm_set_t ;
struct TYPE_10__ {int fspn_fsperm; } ;
typedef TYPE_2__ fs_perm_node_t ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 TYPE_2__* FUNC_3 (int ) ;
 TYPE_2__* FUNC_4 (int ,TYPE_2__*) ;
 int FUNC_5 (int ,TYPE_2__*) ;

__attribute__((used)) static inline void
FUNC_6(fs_perm_set_t *VAR_0)
{
 fs_perm_node_t *VAR_1 = FUNC_3(VAR_0->fsps_list);

 while (VAR_1 != ((void*)0)) {
  fs_perm_node_t *VAR_2 =
      FUNC_4(VAR_0->fsps_list, VAR_1);
  fs_perm_t *VAR_3 = &VAR_1->fspn_fsperm;
  FUNC_1(VAR_3);
  FUNC_5(VAR_0->fsps_list, VAR_1);
  FUNC_0(VAR_1);
  VAR_1 = VAR_2;
 }

 FUNC_2(VAR_0->fsps_named_set_avl_pool);
 FUNC_2(VAR_0->fsps_who_perm_avl_pool);
 FUNC_2(VAR_0->fsps_deleg_perm_avl_pool);
}
