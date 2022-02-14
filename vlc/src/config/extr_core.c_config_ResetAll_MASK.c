
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {size_t size; TYPE_5__* items; } ;
struct TYPE_10__ {TYPE_1__ conf; struct TYPE_10__* next; } ;
typedef TYPE_4__ vlc_plugin_t ;
struct TYPE_9__ {int psz; int f; int i; } ;
struct TYPE_8__ {scalar_t__ psz; int f; int i; } ;
struct TYPE_11__ {TYPE_3__ orig; TYPE_2__ value; int i_type; } ;
typedef TYPE_5__ module_config_t ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int ) ;
 TYPE_4__* VAR_1 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void FUNC_7(void)
{
    FUNC_6 (&VAR_0);
    for (vlc_plugin_t *VAR_2 = VAR_1; VAR_2 != ((void*)0); VAR_2 = VAR_2->next)
    {
        for (size_t VAR_3 = 0; VAR_3 < VAR_2->conf.size; VAR_3++ )
        {
            module_config_t *VAR_4 = VAR_2->conf.items + VAR_3;

            if (FUNC_1 (VAR_4->i_type))
                VAR_4->value.i = VAR_4->orig.i;
            else
            if (FUNC_0 (VAR_4->i_type))
                VAR_4->value.f = VAR_4->orig.f;
            else
            if (FUNC_2 (VAR_4->i_type))
            {
                FUNC_3 ((char *)VAR_4->value.psz);
                VAR_4->value.psz =
                        FUNC_4 (VAR_4->orig.psz);
            }
        }
    }
    FUNC_5 (&VAR_0);
}
