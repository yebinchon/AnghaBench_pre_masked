
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int zv_volsize; int zv_state_lock; TYPE_1__* zv_zso; } ;
typedef TYPE_2__ zvol_state_t ;
struct gendisk {TYPE_2__* private_data; } ;
struct TYPE_3__ {int zvo_disk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_5(struct gendisk *VAR_3)
{
 FUNC_2(&VAR_2, VAR_0);

 zvol_state_t *VAR_4 = VAR_3->private_data;
 if (VAR_4 != ((void*)0)) {
  FUNC_0(&VAR_4->zv_state_lock);
  FUNC_4(VAR_4->zv_zso->zvo_disk,
      VAR_4->zv_volsize >> VAR_1);
  FUNC_1(&VAR_4->zv_state_lock);
 }

 FUNC_3(&VAR_2);

 return (0);
}
