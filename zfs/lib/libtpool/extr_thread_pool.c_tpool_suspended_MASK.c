
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int tp_flags; int tp_mutex; } ;
typedef TYPE_1__ tpool_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int
FUNC_3(tpool_t *VAR_3)
{
 int VAR_4;

 FUNC_0(!(VAR_3->tp_flags & (VAR_1 | VAR_0)));

 FUNC_1(&VAR_3->tp_mutex);
 VAR_4 = (VAR_3->tp_flags & VAR_2) != 0;
 FUNC_2(&VAR_3->tp_mutex);

 return (VAR_4);
}
