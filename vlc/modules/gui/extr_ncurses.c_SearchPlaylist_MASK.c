
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int size; } ;
struct TYPE_7__ {char* search_chain; int box_idx; TYPE_1__ pl_item_names; } ;
typedef TYPE_2__ intf_sys_t ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,char*,int,int) ;

__attribute__((used)) static void FUNC_2(intf_sys_t *VAR_0)
{
    char *VAR_1 = VAR_0->search_chain;
    int VAR_2 = VAR_0->box_idx;
    if (VAR_2 < 0)
        VAR_2 = 0;

    if (!VAR_1 || !*VAR_1)
        return;

    int VAR_3 = FUNC_1(VAR_0, VAR_1, VAR_2 + 1,
                                   VAR_0->pl_item_names.size);
    if (VAR_3 < 0)
        VAR_3 = FUNC_1(VAR_0, VAR_1, 0, VAR_2);

    if (VAR_3 > 0) {
        VAR_0->box_idx = VAR_3;
        FUNC_0(VAR_0);
    }
}
