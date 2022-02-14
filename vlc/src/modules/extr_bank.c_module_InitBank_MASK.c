
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vlc_plugin_t ;
struct TYPE_2__ {scalar_t__ usage; int lock; } ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ) ;
 int * FUNC_2 (int ) ;
 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5 (void)
{
    FUNC_3 (&VAR_0.lock);

    if (VAR_0.usage == 0)
    {





        vlc_plugin_t *VAR_2 = FUNC_2(VAR_1);
        if (FUNC_1(VAR_2 != ((void*)0)))
            FUNC_4(VAR_2);
        FUNC_0 ();
    }
    VAR_0.usage++;
}
