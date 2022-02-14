
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_3__* psz; } ;
struct TYPE_6__ {TYPE_3__* psz; } ;
struct TYPE_8__ {struct TYPE_8__* list_text; TYPE_2__ list; scalar_t__ list_count; TYPE_1__ value; int i_type; } ;
typedef TYPE_3__ module_config_t ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*) ;

void FUNC_2 (module_config_t *VAR_0, size_t VAR_1)
{
    for (size_t VAR_2 = 0; VAR_2 < VAR_1; VAR_2++)
    {
        module_config_t *VAR_3 = &VAR_0[VAR_2];

        if (FUNC_0 (VAR_3->i_type))
        {
            FUNC_1 (VAR_3->value.psz);
            if (VAR_3->list_count)
                FUNC_1 (VAR_3->list.psz);
        }

        FUNC_1 (VAR_3->list_text);
    }

    FUNC_1 (VAR_0);
}
