
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int zv_state_lock; TYPE_1__* zv_zso; } ;
typedef TYPE_2__ zvol_state_t ;
typedef scalar_t__ dev_t ;
struct TYPE_7__ {scalar_t__ zvo_dev; } ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int *) ;
 TYPE_2__* FUNC_1 (int *,TYPE_2__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static zvol_state_t *
FUNC_6(dev_t VAR_3)
{
 zvol_state_t *VAR_4;

 FUNC_4(&VAR_2, VAR_0);
 for (VAR_4 = FUNC_0(&VAR_1); VAR_4 != ((void*)0);
     VAR_4 = FUNC_1(&VAR_1, VAR_4)) {
  FUNC_2(&VAR_4->zv_state_lock);
  if (VAR_4->zv_zso->zvo_dev == VAR_3) {
   FUNC_5(&VAR_2);
   return (VAR_4);
  }
  FUNC_3(&VAR_4->zv_state_lock);
 }
 FUNC_5(&VAR_2);

 return (((void*)0));
}
