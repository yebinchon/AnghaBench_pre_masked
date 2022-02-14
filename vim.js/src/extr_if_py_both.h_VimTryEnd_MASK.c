
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ value; } ;


 void* VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 int FUNC_3 () ;
 void* VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int
FUNC_4(void)
{
    --VAR_7;



    VAR_3 = VAR_0;

    if (VAR_5)
    {
 if (VAR_2 != ((void*)0))
     FUNC_3();
 else
     VAR_6 = VAR_4 = VAR_0;
 VAR_5 = VAR_0;
 FUNC_1(VAR_1);
 return -1;
    }
    else if (!VAR_4)
 return (FUNC_0() ? -1 : 0);

    else if (FUNC_0())
    {
 if (VAR_2 != ((void*)0))
     FUNC_3();
 else
     VAR_6 = VAR_4 = VAR_0;
 return -1;
    }

    else
    {
 FUNC_2((char *)VAR_2->value);
 FUNC_3();
 return -1;
    }
}
