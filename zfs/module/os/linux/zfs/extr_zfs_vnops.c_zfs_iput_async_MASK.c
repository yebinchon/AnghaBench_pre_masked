
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int task_func_t ;
struct inode {int i_count; } ;
typedef int objset_t ;
struct TYPE_2__ {int * z_os; } ;


 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (struct inode*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct inode*) ;
 scalar_t__ FUNC_7 (int ,int *,struct inode*,int ) ;

void
FUNC_8(struct inode *VAR_2)
{
 objset_t *VAR_3 = FUNC_1(VAR_2)->z_os;

 FUNC_0(FUNC_3(&VAR_2->i_count) > 0);
 FUNC_0(VAR_3 != ((void*)0));

 if (FUNC_3(&VAR_2->i_count) == 1)
  FUNC_2(FUNC_7(FUNC_5(FUNC_4(VAR_3)),
      (task_func_t *)FUNC_6, VAR_2, VAR_1) != VAR_0);
 else
  FUNC_6(VAR_2);
}
