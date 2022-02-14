
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_6__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int zv_volsize; int zv_flags; int zv_dn; int zv_name; int * zv_zilog; int zv_suspend_lock; int zv_state_lock; int * zv_objset; } ;
typedef TYPE_1__ zvol_state_t ;
typedef int uint64_t ;
typedef int objset_t ;
struct TYPE_8__ {int (* zv_set_disk_ro ) (TYPE_1__*,int) ;int (* zv_set_capacity ) (TYPE_1__*,int) ;} ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ,int ,int *) ;
 int FUNC_7 (int ,char*,int*,int *) ;
 TYPE_6__* VAR_5 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (TYPE_1__*,int) ;
 int FUNC_10 (TYPE_1__*,int) ;
 int FUNC_11 (TYPE_1__*,int) ;
 int FUNC_12 (int *,int ,char*,int,int,int*) ;

__attribute__((used)) static int
FUNC_13(zvol_state_t *VAR_6)
{
 uint64_t VAR_7;
 int VAR_8;
 uint64_t VAR_9;
 objset_t *VAR_10 = VAR_6->zv_objset;

 FUNC_0(FUNC_1(&VAR_6->zv_state_lock));
 FUNC_0(FUNC_2(&VAR_6->zv_suspend_lock));

 VAR_6->zv_zilog = ((void*)0);
 VAR_6->zv_flags &= ~VAR_3;

 VAR_8 = FUNC_7(VAR_6->zv_name, "readonly", &VAR_9, ((void*)0));
 if (VAR_8)
  return (FUNC_3(VAR_8));

 VAR_8 = FUNC_12(VAR_10, VAR_4, "size", 8, 1, &VAR_7);
 if (VAR_8)
  return (FUNC_3(VAR_8));

 VAR_8 = FUNC_6(VAR_10, VAR_1, VAR_0, &VAR_6->zv_dn);
 if (VAR_8)
  return (FUNC_3(VAR_8));

 VAR_5->zv_set_capacity(VAR_6, VAR_7 >> 9);
 VAR_6->zv_volsize = VAR_7;

 if (VAR_9 || FUNC_4(VAR_10) ||
     !FUNC_8(FUNC_5(VAR_10))) {
  VAR_5->zv_set_disk_ro(VAR_6, 1);
  VAR_6->zv_flags |= VAR_2;
 } else {
  VAR_5->zv_set_disk_ro(VAR_6, 0);
  VAR_6->zv_flags &= ~VAR_2;
 }
 return (0);
}
