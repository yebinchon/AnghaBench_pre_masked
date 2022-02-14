
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uf_info_t ;
struct task_struct {int dummy; } ;
struct TYPE_4__ {int f_list; int f_ref; } ;
typedef TYPE_1__ file_t ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (int,struct task_struct*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_0 ;

void
FUNC_7(int VAR_1, uf_info_t *VAR_2)
{
 file_t *VAR_3;
 struct task_struct *VAR_4 = (struct task_struct *)VAR_2;

 if (VAR_1 < 0)
  return;

 FUNC_5(&VAR_0);
 VAR_3 = FUNC_2(VAR_1, VAR_4);
 if (VAR_3) {
  FUNC_0(&VAR_3->f_ref);
  if (FUNC_1(&VAR_3->f_ref) > 0) {
   FUNC_6(&VAR_0);
   return;
  }

  FUNC_3(&VAR_3->f_list);
  FUNC_4(VAR_3);
 }
 FUNC_6(&VAR_0);
}
