
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int guint32 ;
typedef scalar_t__ guint ;
typedef scalar_t__ gint ;
struct TYPE_2__ {int in_focus; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int ,int ,int ,int *) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int ,int ,int*) ;
 int FUNC_4 (scalar_t__) ;
 TYPE_1__ VAR_6 ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 () ;
 int VAR_7 ;
 int FUNC_9 () ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;

int
FUNC_10(long VAR_10)
{
    int VAR_11;
    guint VAR_12;
    static int VAR_13;
    VAR_13 = VAR_1;




    if (VAR_10 > 0)
 VAR_12 = FUNC_3((guint32)VAR_10, VAR_7, &VAR_13);
    else
 VAR_12 = 0;

    VAR_11 = VAR_6.in_focus;

    do
    {

 if (VAR_6.in_focus != VAR_11)
 {
     if (VAR_6.in_focus)
  FUNC_5();
     else
  FUNC_6();
     VAR_11 = VAR_6.in_focus;
 }
 if (!FUNC_8())
     FUNC_0(((void*)0), VAR_4);


 if (FUNC_8())
 {
     if (VAR_12 != 0 && !VAR_13)
  FUNC_4(VAR_12);
     return VAR_3;
 }
    } while (VAR_10 < 0 || !VAR_13);




    FUNC_7();

    return VAR_0;
}
