
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ booleans; scalar_t__ count; scalar_t__ size; int * items; } ;
struct TYPE_6__ {int unloadable; int * module; int * path; int * abspath; int handle; TYPE_1__ conf; int * textdomain; scalar_t__ modules_count; } ;
typedef TYPE_2__ vlc_plugin_t ;


 int FUNC_0 (int *,int ) ;
 TYPE_2__* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ) ;

vlc_plugin_t *FUNC_3(void)
{
    vlc_plugin_t *VAR_0 = FUNC_1(sizeof (*VAR_0));
    if (FUNC_2(VAR_0 == ((void*)0)))
        return ((void*)0);

    VAR_0->modules_count = 0;
    VAR_0->textdomain = ((void*)0);
    VAR_0->conf.items = ((void*)0);
    VAR_0->conf.size = 0;
    VAR_0->conf.count = 0;
    VAR_0->conf.booleans = 0;







    VAR_0->module = ((void*)0);

    return VAR_0;
}
