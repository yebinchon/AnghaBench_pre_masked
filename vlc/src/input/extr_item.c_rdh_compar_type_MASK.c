
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ i_type; } ;
typedef TYPE_1__ input_item_t ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_0(input_item_t *VAR_1, input_item_t *VAR_2)
{
    if (VAR_1->i_type != VAR_2->i_type)
    {
        if (VAR_1->i_type == VAR_0)
            return -1;
        if (VAR_2->i_type == VAR_0)
            return 1;
    }
    return 0;
}
