
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int box_lines_total; int box_y; int box_idx; int box_start; } ;
typedef TYPE_1__ intf_sys_t ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(intf_sys_t *VAR_1)
{
    int VAR_2 = VAR_1->box_lines_total;
    int VAR_3 = VAR_0 - VAR_1->box_y - 2;
    if (VAR_3 > VAR_2 - 1)
        VAR_3 = VAR_2 - 1;


    if (VAR_1->box_idx <= 0) {
        VAR_1->box_idx = 0;
        VAR_1->box_start = 0;
    } else if (VAR_1->box_idx >= VAR_2 - 1 && VAR_2 > 0) {
        VAR_1->box_idx = VAR_2 - 1;
        VAR_1->box_start = VAR_1->box_idx - VAR_3;
    }


    if (VAR_1->box_idx < VAR_1->box_start ||
        VAR_1->box_idx > VAR_3 + VAR_1->box_start + 1) {
        VAR_1->box_start = VAR_1->box_idx - VAR_3/2;
        if (VAR_1->box_start < 0)
            VAR_1->box_start = 0;
    } else if (VAR_1->box_idx == VAR_1->box_start - 1) {
        VAR_1->box_start--;
    } else if (VAR_1->box_idx == VAR_3 + VAR_1->box_start + 1) {
        VAR_1->box_start++;
    }
}
