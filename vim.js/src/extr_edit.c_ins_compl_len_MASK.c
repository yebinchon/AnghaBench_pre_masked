
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ col; } ;
struct TYPE_4__ {TYPE_1__ w_cursor; } ;


 scalar_t__ VAR_0 ;
 TYPE_2__* VAR_1 ;

__attribute__((used)) static int
FUNC_0()
{
    int VAR_2 = (int)VAR_1->w_cursor.col - (int)VAR_0;

    if (VAR_2 < 0)
 return 0;
    return VAR_2;
}
