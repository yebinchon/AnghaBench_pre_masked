
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t size; TYPE_3__* items; } ;
struct TYPE_6__ {TYPE_1__ conf; } ;
typedef TYPE_2__ vlc_plugin_t ;
struct TYPE_7__ {scalar_t__ b_removed; int i_type; } ;
typedef TYPE_3__ module_config_t ;


 int FUNC_0 (int ) ;

__attribute__((used)) static bool FUNC_1(const vlc_plugin_t *VAR_0)
{
    for (size_t VAR_1 = 0; VAR_1 < VAR_0->conf.size; VAR_1++)
    {
        const module_config_t *VAR_2 = VAR_0->conf.items + VAR_1;

        if (!FUNC_0(VAR_2->i_type))
            continue;
        if (VAR_2->b_removed)
            continue;
        return 1;
    }
    return 0;
}
