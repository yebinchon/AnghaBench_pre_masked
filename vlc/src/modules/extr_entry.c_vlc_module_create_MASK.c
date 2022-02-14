
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int modules_count; TYPE_2__* module; } ;
typedef TYPE_1__ vlc_plugin_t ;
struct TYPE_7__ {int i_score; int * deactivate; int * pf_activate; int * deactivate_name; int * activate_name; int * psz_capability; scalar_t__ i_shortcuts; int * pp_shortcuts; int * psz_help; int * psz_longname; int * psz_shortname; TYPE_1__* plugin; struct TYPE_7__* next; } ;
typedef TYPE_2__ module_t ;


 TYPE_2__* FUNC_0 (int) ;

module_t *FUNC_1(vlc_plugin_t *VAR_0)
{
    module_t *VAR_1 = FUNC_0 (sizeof (*VAR_1));
    if (VAR_1 == ((void*)0))
        return ((void*)0);





    module_t *VAR_2 = VAR_0->module;
    if (VAR_2 == ((void*)0))
    {
        VAR_1->next = ((void*)0);
        VAR_0->module = VAR_1;
    }
    else
    {
        VAR_1->next = VAR_2->next;
        VAR_2->next = VAR_1;
    }

    VAR_0->modules_count++;
    VAR_1->plugin = VAR_0;

    VAR_1->psz_shortname = ((void*)0);
    VAR_1->psz_longname = ((void*)0);
    VAR_1->psz_help = ((void*)0);
    VAR_1->pp_shortcuts = ((void*)0);
    VAR_1->i_shortcuts = 0;
    VAR_1->psz_capability = ((void*)0);
    VAR_1->i_score = (VAR_2 != ((void*)0)) ? VAR_2->i_score : 1;
    VAR_1->activate_name = ((void*)0);
    VAR_1->deactivate_name = ((void*)0);
    VAR_1->pf_activate = ((void*)0);
    VAR_1->deactivate = ((void*)0);
    return VAR_1;
}
