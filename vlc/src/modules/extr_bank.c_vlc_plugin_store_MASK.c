
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* module; struct TYPE_7__* next; } ;
typedef TYPE_1__ vlc_plugin_t ;
struct TYPE_8__ {struct TYPE_8__* next; } ;
typedef TYPE_2__ module_t ;
struct TYPE_9__ {int lock; } ;


 TYPE_6__ VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static void FUNC_2(vlc_plugin_t *VAR_2)
{
    FUNC_1(&VAR_0.lock);

    VAR_2->next = VAR_1;
    VAR_1 = VAR_2;

    for (module_t *VAR_3 = VAR_2->module; VAR_3 != ((void*)0); VAR_3 = VAR_3->next)
        FUNC_0(VAR_3);
}
