
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int zv_flags; int zv_objset; int * zv_dn; int * zv_zilog; int zv_suspend_lock; int zv_state_lock; } ;
typedef TYPE_1__ zvol_state_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int VAR_1 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void
FUNC_8(zvol_state_t *VAR_2)
{
 FUNC_0(FUNC_1(&VAR_2->zv_state_lock) &&
     FUNC_2(&VAR_2->zv_suspend_lock));

 if (VAR_2->zv_flags & VAR_1) {
  FUNC_0(VAR_2->zv_zilog != ((void*)0));
  FUNC_7(VAR_2->zv_zilog);
 }

 VAR_2->zv_zilog = ((void*)0);

 FUNC_5(VAR_2->zv_dn, VAR_0);
 VAR_2->zv_dn = ((void*)0);





 if (VAR_2->zv_flags & VAR_1)
  FUNC_6(FUNC_4(VAR_2->zv_objset), 0);
 (void) FUNC_3(VAR_2->zv_objset);
}
