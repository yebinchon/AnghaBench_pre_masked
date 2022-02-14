
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {size_t modules_count; TYPE_2__* module; struct TYPE_8__* next; } ;
typedef TYPE_1__ vlc_plugin_t ;
struct TYPE_9__ {struct TYPE_9__* next; } ;
typedef TYPE_2__ module_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__**) ;
 TYPE_2__** FUNC_2 (TYPE_2__**,size_t) ;
 scalar_t__ FUNC_3 (int ) ;
 TYPE_1__* VAR_0 ;

module_t **FUNC_4 (size_t *VAR_1)
{
    module_t **VAR_2 = ((void*)0);
    size_t VAR_3 = 0;

    FUNC_0 (VAR_1 != ((void*)0));

    for (vlc_plugin_t *VAR_4 = VAR_0; VAR_4 != ((void*)0); VAR_4 = VAR_4->next)
    {
        module_t **VAR_5 = FUNC_2(VAR_2, (VAR_3 + VAR_4->modules_count) * sizeof (*VAR_2));
        if (FUNC_3(VAR_5 == ((void*)0)))
        {
            FUNC_1 (VAR_2);
            *VAR_1 = 0;
            return ((void*)0);
        }

        VAR_2 = VAR_5;
        for (module_t *VAR_6 = VAR_4->module; VAR_6 != ((void*)0); VAR_6 = VAR_6->next)
            VAR_2[VAR_3++] = VAR_6;
    }
    *VAR_1 = VAR_3;
    return VAR_2;
}
