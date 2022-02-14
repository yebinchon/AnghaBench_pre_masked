
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_9__ {int var_lock; } ;
typedef TYPE_1__ vlc_object_internals_t ;
typedef scalar_t__ vlc_callback_type_t ;
struct TYPE_10__ {TYPE_3__* list_callbacks; TYPE_3__* value_callbacks; } ;
typedef TYPE_2__ variable_t ;
struct TYPE_11__ {struct TYPE_11__* next; int p_callback; } ;
typedef TYPE_3__ callback_entry_t ;


 TYPE_2__* FUNC_0 (int *,char const*) ;
 int FUNC_1 (int *,TYPE_2__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int *,char*,int ,char const*) ;
 TYPE_1__* FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_7( vlc_object_t *VAR_1, const char *VAR_2,
                         callback_entry_t *restrict VAR_3,
                         vlc_callback_type_t VAR_4 )
{
    variable_t *VAR_5;

    FUNC_2( VAR_1 );

    vlc_object_internals_t *VAR_6 = FUNC_5( VAR_1 );

    VAR_5 = FUNC_0( VAR_1, VAR_2 );
    if( VAR_5 == ((void*)0) )
    {
        FUNC_6( &VAR_6->var_lock );
        FUNC_4( VAR_1, "cannot add callback %p to nonexistent variable '%s'",
                 VAR_3->p_callback, VAR_2 );
        FUNC_3( VAR_3 );
        return;
    }

    FUNC_1( VAR_1, VAR_5 );

    callback_entry_t **VAR_7;

    if (VAR_4 == VAR_0)
        VAR_7 = &VAR_5->value_callbacks;
    else
        VAR_7 = &VAR_5->list_callbacks;

    VAR_3->next = *VAR_7;
    *VAR_7 = VAR_3;

    FUNC_6( &VAR_6->var_lock );
}
