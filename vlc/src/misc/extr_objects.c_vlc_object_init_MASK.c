
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int force; int no_interact; int * logger; TYPE_2__* priv; } ;
typedef TYPE_1__ vlc_object_t ;
struct TYPE_7__ {char const* typename; int * resources; int var_wait; int var_lock; int * var_root; TYPE_1__* parent; } ;
typedef TYPE_2__ vlc_object_internals_t ;


 scalar_t__ FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(vlc_object_t *restrict VAR_0, vlc_object_t *VAR_1,
                    const char *VAR_2)
{
    vlc_object_internals_t *VAR_3 = FUNC_1(sizeof (*VAR_3));
    if (FUNC_2(VAR_3 == ((void*)0)))
        return -1;

    VAR_3->parent = VAR_1;
    VAR_3->typename = VAR_2;
    VAR_3->var_root = ((void*)0);
    FUNC_4 (&VAR_3->var_lock);
    FUNC_3 (&VAR_3->var_wait);
    VAR_3->resources = ((void*)0);

    VAR_0->priv = VAR_3;
    VAR_0->force = 0;

    if (FUNC_0(VAR_1 != ((void*)0)))
    {
        VAR_0->logger = VAR_1->logger;
        VAR_0->no_interact = VAR_1->no_interact;
    }
    else
    {
        VAR_0->logger = ((void*)0);
        VAR_0->no_interact = 0;
    }

    return 0;
}
