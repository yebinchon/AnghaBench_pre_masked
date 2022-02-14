
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int b_changedtick; scalar_t__ b_may_swap; int b_changed; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 TYPE_1__* VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (TYPE_1__*) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_5 () ;
 int FUNC_6 (long,int ) ;
 int FUNC_7 (int ) ;
 scalar_t__ VAR_6 ;

void
FUNC_8()
{
    if (!VAR_2->b_changed)
    {
 int VAR_7 = VAR_4;



 FUNC_1(0);



 if (VAR_2->b_may_swap



  )
 {
     FUNC_4(VAR_2);





     if (VAR_5 && VAR_3 == 0)
     {
  FUNC_5();
  FUNC_6(2000L, VAR_1);
  FUNC_7(VAR_1);
  VAR_4 = VAR_7;
     }
 }
 FUNC_2();
    }
    ++VAR_2->b_changedtick;
}
