
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * data; } ;
struct TYPE_5__ {TYPE_1__ pl_item_names; } ;
typedef TYPE_2__ intf_sys_t ;


 scalar_t__ FUNC_0 (int ,char*) ;

__attribute__((used)) static int FUNC_1(intf_sys_t *VAR_0, char *VAR_1,
                             int VAR_2, int VAR_3)
{
    for (int VAR_4 = VAR_2 + 1; VAR_4 < VAR_3; VAR_4++)
        if (FUNC_0(VAR_0->pl_item_names.data[VAR_4], VAR_1))
            return VAR_4;
    return -1;
}
