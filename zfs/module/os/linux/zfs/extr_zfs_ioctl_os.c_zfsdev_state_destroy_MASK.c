
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int zs_minor; int zs_zevent; int zs_onexit; } ;
typedef TYPE_1__ zfsdev_state_t ;
struct file {TYPE_1__* private_data; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_4(struct file *VAR_1)
{
 zfsdev_state_t *VAR_2;

 FUNC_0(FUNC_1(&VAR_0));
 FUNC_0(VAR_1->private_data != ((void*)0));

 VAR_2 = VAR_1->private_data;
 VAR_2->zs_minor = -1;
 FUNC_2(VAR_2->zs_onexit);
 FUNC_3(VAR_2->zs_zevent);

 return (0);
}
