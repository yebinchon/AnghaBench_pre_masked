
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int long_u ;
typedef int char_u ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 TYPE_1__* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (int,int ,int ) ;
 int FUNC_7 (int *,int,int *,int ,int ) ;
 char* FUNC_8 () ;

void
FUNC_9()
{
    int VAR_9;





    FUNC_5("scroll", (long)((long_u)VAR_3 >> 1));
    VAR_9 = FUNC_1((char_u *)"scroll");
    if (VAR_9 >= 0 && !(VAR_6[VAR_9].flags & VAR_2))
 FUNC_6(VAR_9, VAR_1, VAR_7);
    FUNC_0();





    if (!FUNC_2((char_u *)"window"))
 VAR_8 = VAR_3 - 1;
    FUNC_5("window", VAR_3 - 1);
    VAR_9 = FUNC_1((char_u *)"bg");
    if (VAR_9 >= 0 && !(VAR_6[VAR_9].flags & VAR_2)
       && *FUNC_8() == 'd')
    {
 FUNC_7(((void*)0), VAR_9, (char_u *)"dark", VAR_0, 0);


 VAR_6[VAR_9].flags &= ~VAR_2;
    }
}
