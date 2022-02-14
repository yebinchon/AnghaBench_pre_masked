
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int zs_minor; struct TYPE_4__* zs_next; int zs_zevent; int zs_onexit; struct file* zs_file; } ;
typedef TYPE_1__ zfsdev_state_t ;
typedef int zfs_zevent_t ;
typedef int zfs_onexit_t ;
struct file {TYPE_1__* private_data; } ;
typedef void* minor_t ;
typedef scalar_t__ boolean_t ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 (int,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int **) ;
 int FUNC_6 (int **) ;
 void* FUNC_7 () ;
 TYPE_1__* VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_8(struct file *VAR_6)
{
 zfsdev_state_t *VAR_7, *VAR_8 = ((void*)0);
 minor_t VAR_9;
 boolean_t VAR_10 = VAR_0;

 FUNC_0(FUNC_1(&VAR_5));

 VAR_9 = FUNC_7();
 if (VAR_9 == 0)
  return (FUNC_2(VAR_2));

 for (VAR_7 = VAR_4; VAR_7 != ((void*)0); VAR_7 = VAR_7->zs_next) {
  if (VAR_7->zs_minor == -1)
   break;
  VAR_8 = VAR_7;
 }

 if (!VAR_7) {
  VAR_7 = FUNC_3(sizeof (zfsdev_state_t), VAR_3);
  VAR_10 = VAR_1;
 }

 VAR_7->zs_file = VAR_6;
 VAR_6->private_data = VAR_7;

 FUNC_5((zfs_onexit_t **)&VAR_7->zs_onexit);
 FUNC_6((zfs_zevent_t **)&VAR_7->zs_zevent);
 if (VAR_10) {
  VAR_7->zs_minor = VAR_9;
  FUNC_4();
  VAR_8->zs_next = VAR_7;
 } else {
  FUNC_4();
  VAR_7->zs_minor = VAR_9;
 }

 return (0);
}
