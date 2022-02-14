
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* zs_next; } ;
typedef TYPE_1__ zfsdev_state_t ;


 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int VAR_1 ;
 int FUNC_4 () ;
 int VAR_2 ;
 int FUNC_5 () ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;
 int FUNC_6 () ;

void
FUNC_7(void)
{
 zfsdev_state_t *VAR_5, *VAR_6 = ((void*)0);

 FUNC_5();

 FUNC_1(&VAR_4);

 for (VAR_5 = VAR_3; VAR_5 != ((void*)0); VAR_5 = VAR_5->zs_next) {
  if (VAR_6)
   FUNC_0(VAR_6, sizeof (zfsdev_state_t));
  VAR_6 = VAR_5;
 }
 if (VAR_6)
  FUNC_0(VAR_6, sizeof (zfsdev_state_t));

 FUNC_4();
 FUNC_2();
 FUNC_6();

 FUNC_3(&VAR_2);
 FUNC_3(&VAR_0);
 FUNC_3(&VAR_1);
}
