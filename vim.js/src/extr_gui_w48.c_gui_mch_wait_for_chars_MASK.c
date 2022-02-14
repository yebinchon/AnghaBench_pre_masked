
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_2__ {int in_focus; } ;
typedef int TIMERPROC ;
typedef int MSG ;


 int VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (int *,scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int *,int ,scalar_t__,int ) ;
 void* VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 void* VAR_7 ;
 TYPE_1__ VAR_8 ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 (int *,int ,int ,int ,int ) ;
 int FUNC_9 () ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;
 scalar_t__ VAR_15 ;

int
FUNC_10(int VAR_16)
{
    MSG VAR_17;
    int VAR_18;

    VAR_14 = VAR_1;

    if (VAR_16 > 0)
    {

 if (VAR_9)
     return VAR_0;
 VAR_15 = (UINT)FUNC_3(((void*)0), 0, (UINT)VAR_16,
        (TIMERPROC)VAR_6);
    }

    VAR_7 = VAR_4;

    VAR_18 = VAR_8.in_focus;
    while (!VAR_14)
    {

 if (VAR_8.in_focus != VAR_18)
 {
     if (VAR_8.in_focus)
  FUNC_4();
     else
  FUNC_5();
     VAR_18 = VAR_8.in_focus;
 }

 if (VAR_13)
 {



     (void)FUNC_1(VAR_12);

     VAR_13 = VAR_1;
 }
 FUNC_9();

 if (FUNC_6())
 {
     if (VAR_15 != 0 && !VAR_14)
     {
  FUNC_0(((void*)0), VAR_15);


  while (FUNC_8(&VAR_17, VAR_12, VAR_5, VAR_5, VAR_3))
      ;
  VAR_15 = 0;
     }
     VAR_7 = VAR_1;




     if (!VAR_11)
  VAR_10 = -1;

     return VAR_2;
 }
    }
    VAR_7 = VAR_1;
    return VAR_0;
}
