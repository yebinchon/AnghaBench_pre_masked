
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int size; int items; } ;
struct TYPE_6__ {struct TYPE_6__* path; struct TYPE_6__* abspath; TYPE_1__ conf; int * module; int handle; int unloadable; } ;
typedef TYPE_2__ vlc_plugin_t ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int *) ;

void FUNC_5(vlc_plugin_t *VAR_0)
{
    FUNC_0(VAR_0 != ((void*)0));




    if (VAR_0->module != ((void*)0))
        FUNC_4(VAR_0->module);

    FUNC_2(VAR_0->conf.items, VAR_0->conf.size);




    FUNC_3(VAR_0);
}
