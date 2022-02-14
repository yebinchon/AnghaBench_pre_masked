
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_5__ {int var_lock; int var_wait; } ;
typedef TYPE_1__ vlc_object_internals_t ;
struct TYPE_6__ {scalar_t__ b_incallback; } ;
typedef TYPE_2__ variable_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int FUNC_2 (int *,int *) ;
 TYPE_1__* FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(vlc_object_t *VAR_0, variable_t *VAR_1)
{
    vlc_object_internals_t *VAR_2 = FUNC_3(VAR_0);

    FUNC_0(&VAR_2->var_lock);
    while (VAR_1->b_incallback)
        FUNC_2(&VAR_2->var_wait, &VAR_2->var_lock);
    FUNC_1();
}
