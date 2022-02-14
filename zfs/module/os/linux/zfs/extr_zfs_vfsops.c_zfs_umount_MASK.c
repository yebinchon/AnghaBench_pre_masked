
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* z_os; int * z_arc_prune; } ;
typedef TYPE_1__ zfsvfs_t ;
struct super_block {TYPE_1__* s_fs_info; } ;
struct TYPE_9__ {int os_user_ptr_lock; } ;
typedef TYPE_2__ objset_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*,int ,TYPE_1__*) ;
 int FUNC_3 (TYPE_2__*,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_1__*) ;
 scalar_t__ FUNC_7 (TYPE_1__*,int ) ;
 int FUNC_8 (struct super_block*) ;

int
FUNC_9(struct super_block *VAR_1)
{
 zfsvfs_t *VAR_2 = VAR_1->s_fs_info;
 objset_t *VAR_3;

 if (VAR_2->z_arc_prune != ((void*)0))
  FUNC_1(VAR_2->z_arc_prune);
 FUNC_0(FUNC_7(VAR_2, VAR_0) == 0);
 VAR_3 = VAR_2->z_os;
 FUNC_8(VAR_1);





 if (VAR_3 != ((void*)0)) {



  FUNC_4(&VAR_3->os_user_ptr_lock);
  FUNC_3(VAR_3, ((void*)0));
  FUNC_5(&VAR_3->os_user_ptr_lock);




  FUNC_2(VAR_3, VAR_0, VAR_2);
 }

 FUNC_6(VAR_2);
 return (0);
}
