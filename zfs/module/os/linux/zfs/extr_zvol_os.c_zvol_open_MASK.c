
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ zv_open_count; int zv_flags; int zv_suspend_lock; int zv_state_lock; } ;
typedef TYPE_2__ zvol_state_t ;
struct block_device {TYPE_1__* bd_disk; } ;
typedef int fmode_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_5__ {TYPE_2__* private_data; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *) ;
 int VAR_7 ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int) ;
 int VAR_8 ;
 int FUNC_4 (struct block_device*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 () ;
 int FUNC_11 (TYPE_2__*,int) ;
 int FUNC_12 (TYPE_2__*) ;
 int VAR_9 ;

__attribute__((used)) static int
FUNC_13(struct block_device *VAR_10, fmode_t VAR_11)
{
 zvol_state_t *VAR_12;
 int VAR_13 = 0;
 boolean_t VAR_14 = VAR_1;

 FUNC_7(&VAR_9, VAR_7);






 VAR_12 = VAR_10->bd_disk->private_data;
 if (VAR_12 == ((void*)0)) {
  FUNC_8(&VAR_9);
  return (FUNC_3(-VAR_3));
 }

 FUNC_5(&VAR_12->zv_state_lock);





 if (VAR_12->zv_open_count == 0) {
  if (!FUNC_9(&VAR_12->zv_suspend_lock, VAR_7)) {
   FUNC_6(&VAR_12->zv_state_lock);
   FUNC_7(&VAR_12->zv_suspend_lock, VAR_7);
   FUNC_5(&VAR_12->zv_state_lock);

   if (VAR_12->zv_open_count != 0) {
    FUNC_8(&VAR_12->zv_suspend_lock);
    VAR_14 = VAR_0;
   }
  }
 } else {
  VAR_14 = VAR_0;
 }
 FUNC_8(&VAR_9);

 FUNC_0(FUNC_1(&VAR_12->zv_state_lock));
 FUNC_0(VAR_12->zv_open_count != 0 || FUNC_2(&VAR_12->zv_suspend_lock));

 if (VAR_12->zv_open_count == 0) {
  VAR_13 = -FUNC_11(VAR_12, !(VAR_11 & VAR_6));
  if (VAR_13)
   goto out_mutex;
 }

 if ((VAR_11 & VAR_6) && (VAR_12->zv_flags & VAR_8)) {
  VAR_13 = -VAR_5;
  goto out_open_count;
 }

 VAR_12->zv_open_count++;

 FUNC_6(&VAR_12->zv_state_lock);
 if (VAR_14)
  FUNC_8(&VAR_12->zv_suspend_lock);

 FUNC_4(VAR_10);

 return (0);

out_open_count:
 if (VAR_12->zv_open_count == 0)
  FUNC_12(VAR_12);

out_mutex:
 FUNC_6(&VAR_12->zv_state_lock);
 if (VAR_14)
  FUNC_8(&VAR_12->zv_suspend_lock);
 if (VAR_13 == -VAR_2) {
  VAR_13 = -VAR_4;
  FUNC_10();
 }
 return (FUNC_3(VAR_13));
}
