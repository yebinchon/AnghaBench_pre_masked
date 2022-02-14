
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_4__ {int var_lock; int var_wait; int * resources; } ;
typedef TYPE_1__ vlc_object_internals_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 TYPE_1__* FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int) ;
 int FUNC_7 () ;

void FUNC_8(vlc_object_t *VAR_0)
{
    vlc_object_internals_t *VAR_1 = FUNC_4(VAR_0);

    FUNC_0(VAR_1->resources == ((void*)0));


    int VAR_2 = FUNC_7();
    FUNC_2(VAR_0);
    FUNC_6(VAR_2);

    FUNC_3(&VAR_1->var_wait);
    FUNC_5(&VAR_1->var_lock);
    FUNC_1(VAR_1);
}
