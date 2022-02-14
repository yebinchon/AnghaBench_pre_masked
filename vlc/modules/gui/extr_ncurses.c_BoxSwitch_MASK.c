
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int box_type; scalar_t__ box_idx; scalar_t__ box_start; } ;
typedef TYPE_1__ intf_sys_t ;


 int VAR_0 ;

__attribute__((used)) static inline void FUNC_0(intf_sys_t *VAR_1, int VAR_2)
{
    VAR_1->box_type = (VAR_1->box_type == VAR_2) ? VAR_0 : VAR_2;
    VAR_1->box_start = 0;
    VAR_1->box_idx = 0;
}
