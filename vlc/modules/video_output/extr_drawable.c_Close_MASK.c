
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sys; } ;
typedef TYPE_1__ vout_window_t ;


 int FUNC_0 (uintptr_t) ;
 int FUNC_1 (uintptr_t*) ;
 int VAR_0 ;
 uintptr_t* VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4 (vout_window_t *VAR_2)
{
    uintptr_t VAR_3 = (uintptr_t)VAR_2->sys;
    size_t VAR_4 = 0;


    FUNC_2 (&VAR_0);
    FUNC_0 (VAR_1 != ((void*)0));
    while (VAR_1[VAR_4] != VAR_3)
    {
        FUNC_0 (VAR_1[VAR_4]);
        VAR_4++;
    }
    do
        VAR_1[VAR_4] = VAR_1[VAR_4 + 1];
    while (VAR_1[++VAR_4] != 0);

    if (VAR_4 == 0)
    {
         FUNC_1 (VAR_1);
         VAR_1 = ((void*)0);
    }
    FUNC_3 (&VAR_0);
}
