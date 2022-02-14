
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int zv_open_count; int zv_suspend_lock; int zv_state_lock; } ;
typedef TYPE_1__ zvol_state_t ;
struct gendisk {TYPE_1__* private_data; } ;
typedef int fmode_t ;
typedef scalar_t__ boolean_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (TYPE_1__*) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_9(struct gendisk *VAR_4, fmode_t VAR_5)
{
 zvol_state_t *VAR_6;
 boolean_t VAR_7 = VAR_1;

 FUNC_5(&VAR_3, VAR_2);
 VAR_6 = VAR_4->private_data;

 FUNC_3(&VAR_6->zv_state_lock);
 FUNC_0(VAR_6->zv_open_count > 0);





 if (VAR_6->zv_open_count == 1) {
  if (!FUNC_7(&VAR_6->zv_suspend_lock, VAR_2)) {
   FUNC_4(&VAR_6->zv_state_lock);
   FUNC_5(&VAR_6->zv_suspend_lock, VAR_2);
   FUNC_3(&VAR_6->zv_state_lock);

   if (VAR_6->zv_open_count != 1) {
    FUNC_6(&VAR_6->zv_suspend_lock);
    VAR_7 = VAR_0;
   }
  }
 } else {
  VAR_7 = VAR_0;
 }
 FUNC_6(&VAR_3);

 FUNC_0(FUNC_1(&VAR_6->zv_state_lock));
 FUNC_0(VAR_6->zv_open_count != 1 || FUNC_2(&VAR_6->zv_suspend_lock));

 VAR_6->zv_open_count--;
 if (VAR_6->zv_open_count == 0)
  FUNC_8(VAR_6);

 FUNC_4(&VAR_6->zv_state_lock);

 if (VAR_7)
  FUNC_6(&VAR_6->zv_suspend_lock);
}
