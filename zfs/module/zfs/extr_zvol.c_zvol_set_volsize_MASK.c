
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int zv_changed; int zv_state_lock; int zv_suspend_lock; int * zv_objset; scalar_t__ zv_volsize; } ;
typedef TYPE_1__ zvol_state_t ;
typedef scalar_t__ uint64_t ;
typedef int objset_t ;
struct TYPE_10__ {int doi_data_block_size; } ;
typedef TYPE_2__ dmu_object_info_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_11__ {int (* zv_update_volsize ) (TYPE_1__*,scalar_t__) ;} ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (int *,int ,TYPE_2__*) ;
 int FUNC_5 (int *,scalar_t__,int ) ;
 int FUNC_6 (char const*,int ,scalar_t__,scalar_t__,int ,int **) ;
 int FUNC_7 (char const*,int ,scalar_t__*,int *) ;
 TYPE_2__* FUNC_8 (int,int ) ;
 int FUNC_9 (TYPE_2__*,int) ;
 int FUNC_10 (int *) ;
 TYPE_5__* VAR_9 ;
 int FUNC_11 (int *) ;
 int FUNC_12 (TYPE_1__*,scalar_t__) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (scalar_t__,int ) ;
 TYPE_1__* FUNC_15 (char const*,int ) ;
 int FUNC_16 (scalar_t__,int *) ;

int
FUNC_17(const char *VAR_10, uint64_t VAR_11)
{
 objset_t *VAR_12 = ((void*)0);
 uint64_t VAR_13;
 int VAR_14;
 boolean_t VAR_15 = VAR_0;

 VAR_14 = FUNC_7(VAR_10,
     FUNC_13(VAR_7), &VAR_13, ((void*)0));
 if (VAR_14 != 0)
  return (FUNC_3(VAR_14));
 if (VAR_13)
  return (FUNC_3(VAR_3));

 zvol_state_t *VAR_16 = FUNC_15(VAR_10, VAR_6);

 FUNC_0(VAR_16 == ((void*)0) || (FUNC_1(&VAR_16->zv_state_lock) &&
     FUNC_2(&VAR_16->zv_suspend_lock)));

 if (VAR_16 == ((void*)0) || VAR_16->zv_objset == ((void*)0)) {
  if (VAR_16 != ((void*)0))
   FUNC_11(&VAR_16->zv_suspend_lock);
  if ((VAR_14 = FUNC_6(VAR_10, VAR_2, VAR_0, VAR_1,
      VAR_4, &VAR_12)) != 0) {
   if (VAR_16 != ((void*)0))
    FUNC_10(&VAR_16->zv_state_lock);
   return (FUNC_3(VAR_14));
  }
  VAR_15 = VAR_1;
  if (VAR_16 != ((void*)0))
   VAR_16->zv_objset = VAR_12;
 } else {
  VAR_12 = VAR_16->zv_objset;
 }

 dmu_object_info_t *VAR_17 = FUNC_8(sizeof (*VAR_17), VAR_5);

 if ((VAR_14 = FUNC_4(VAR_12, VAR_8, VAR_17)) ||
     (VAR_14 = FUNC_14(VAR_11, VAR_17->doi_data_block_size)))
  goto out;

 VAR_14 = FUNC_16(VAR_11, VAR_12);
 if (VAR_14 == 0 && VAR_16 != ((void*)0)) {
  VAR_16->zv_volsize = VAR_11;
  VAR_16->zv_changed = 1;
 }
out:
 FUNC_9(VAR_17, sizeof (dmu_object_info_t));

 if (VAR_15) {
  FUNC_5(VAR_12, VAR_1, VAR_4);
  if (VAR_16 != ((void*)0))
   VAR_16->zv_objset = ((void*)0);
 } else {
  FUNC_11(&VAR_16->zv_suspend_lock);
 }

 if (VAR_16 != ((void*)0))
  FUNC_10(&VAR_16->zv_state_lock);

 if (VAR_14 == 0 && VAR_16 != ((void*)0))
  VAR_9->zv_update_volsize(VAR_16, VAR_11);

 return (FUNC_3(VAR_14));
}
