
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int border_offset; scalar_t__ scrollbar_width; scalar_t__* which_scrollbars; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 TYPE_1__ VAR_2 ;

int
FUNC_0()
{
    int VAR_3;

    VAR_3 = 2 * VAR_2.border_offset;
    if (VAR_2.which_scrollbars[VAR_0])
 VAR_3 += VAR_2.scrollbar_width;
    if (VAR_2.which_scrollbars[VAR_1])
 VAR_3 += VAR_2.scrollbar_width;
    return VAR_3;
}
