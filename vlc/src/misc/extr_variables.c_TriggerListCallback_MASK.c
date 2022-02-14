
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vlc_value_t ;
typedef int vlc_object_t ;
struct TYPE_6__ {int var_wait; int var_lock; } ;
typedef TYPE_1__ vlc_object_internals_t ;
struct TYPE_7__ {int b_incallback; TYPE_3__* list_callbacks; } ;
typedef TYPE_2__ variable_t ;
struct TYPE_8__ {struct TYPE_8__* next; int p_data; int (* pf_list_callback ) (int *,char const*,int,int *,int ) ;} ;
typedef TYPE_3__ callback_entry_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,char const*,int,int *,int ) ;
 int FUNC_2 (int *) ;
 TYPE_1__* FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(vlc_object_t *VAR_0, variable_t *VAR_1,
                                const char *VAR_2, int VAR_3, vlc_value_t *VAR_4)
{
    FUNC_0(VAR_0 != ((void*)0));

    callback_entry_t *VAR_5 = VAR_1->list_callbacks;
    if (VAR_5 == ((void*)0))
        return;

    vlc_object_internals_t *VAR_6 = FUNC_3(VAR_0);

    FUNC_0(!VAR_1->b_incallback);
    VAR_1->b_incallback = 1;
    FUNC_5(&VAR_6->var_lock);

    do
    {
        VAR_5->pf_list_callback(VAR_0, VAR_2, VAR_3, VAR_4, VAR_5->p_data);
        VAR_5 = VAR_5->next;
    }
    while (VAR_5 != ((void*)0));

    FUNC_4(&VAR_6->var_lock);
    VAR_1->b_incallback = 0;
    FUNC_2(&VAR_6->var_wait);
}
