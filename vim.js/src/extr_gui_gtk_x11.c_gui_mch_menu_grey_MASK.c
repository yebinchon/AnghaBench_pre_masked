
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * id; int name; } ;
typedef TYPE_1__ vimmenu_T ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int ) ;

void
FUNC_5(vimmenu_T *VAR_2, int VAR_3)
{
    if (VAR_2->id == ((void*)0))
 return;

    if (FUNC_4(VAR_2->name))
 VAR_3 = VAR_1;

    FUNC_2(VAR_2, VAR_0);

    if (!FUNC_0(VAR_2->id) == !VAR_3)
    {
 FUNC_1(VAR_2->id, !VAR_3);
 FUNC_3();
    }
}
