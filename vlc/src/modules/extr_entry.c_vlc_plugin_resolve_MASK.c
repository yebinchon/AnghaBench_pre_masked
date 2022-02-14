
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* module; } ;
typedef TYPE_1__ vlc_plugin_t ;
typedef int vlc_plugin_cb ;
struct TYPE_5__ {void* pf_activate; void* deactivate; int deactivate_name; int activate_name; struct TYPE_5__* next; } ;
typedef TYPE_2__ module_t ;


 int FUNC_0 (void*) ;
 scalar_t__ FUNC_1 (void*,int ,void**) ;
 void* FUNC_2 (int ) ;

int FUNC_3(vlc_plugin_t *VAR_0, vlc_plugin_cb VAR_1)
{
    void *VAR_2 = FUNC_2(VAR_1);
    int VAR_3 = 0;


    for (module_t *VAR_4 = VAR_0->module;
         VAR_4 != ((void*)0);
         VAR_4 = VAR_4->next)
    {
        void *VAR_5;

        if (FUNC_1(VAR_2, VAR_4->activate_name,
                                  &VAR_4->pf_activate)
         || FUNC_1(VAR_2, VAR_4->deactivate_name, &VAR_5))
        {
            VAR_3 = -1;
            break;
        }

        VAR_4->deactivate = VAR_5;
    }

    FUNC_0(VAR_2);
    return VAR_3;
}
