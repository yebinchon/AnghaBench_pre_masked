
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int border_width; int char_width; int char_height; int back_pixel; } ;
struct TYPE_7__ {int member_1; int member_0; } ;
struct TYPE_6__ {int member_0; int member_1; } ;
struct TYPE_8__ {TYPE_2__ member_1; TYPE_1__ member_0; } ;
typedef TYPE_3__ PhRect_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_4__ VAR_6 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_7 ;

void
FUNC_2()
{
    PhRect_t VAR_8 = {
 { VAR_6.border_width, VAR_6.border_width },
 { VAR_0 * VAR_6.char_width + VAR_6.border_width - 1 ,
     VAR_4 * VAR_6.char_height + VAR_6.border_width - 1 }
    };

    if (VAR_7 == VAR_5)
 return;

    VAR_2;
    FUNC_1(VAR_6.back_pixel);
    FUNC_0(&VAR_8, VAR_3);
    VAR_1;
}
