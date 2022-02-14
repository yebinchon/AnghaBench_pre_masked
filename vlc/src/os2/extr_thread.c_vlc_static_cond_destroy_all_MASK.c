
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int condvar; struct TYPE_4__* next; } ;
typedef TYPE_1__ vlc_static_cond_t ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2 (void)
{
    vlc_static_cond_t *VAR_1;
    vlc_static_cond_t *VAR_2;


    for (VAR_1 = VAR_0; VAR_1;
         VAR_1 = VAR_2)
    {
        VAR_2 = VAR_1->next;

        FUNC_1 (&VAR_1->condvar);
        FUNC_0 (VAR_1);
    }
}
