
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ col; scalar_t__ cursor_col; scalar_t__ row; scalar_t__ cursor_row; scalar_t__ cursor_is_valid; int back_pixel; int norm_pixel; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 TYPE_1__ VAR_5 ;
 int FUNC_0 (int ,int,int,int ,int ,int ) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,int) ;

void
FUNC_2()
{
    if (VAR_5.cursor_is_valid)
    {
 if (FUNC_1(VAR_5.cursor_row, VAR_5.cursor_col,
         VAR_5.cursor_row, VAR_5.cursor_col, VAR_2)
  && VAR_5.cursor_col > 0)
     (void)FUNC_1(VAR_5.cursor_row, VAR_5.cursor_col - 1,
    VAR_5.cursor_row, VAR_5.cursor_col - 1, VAR_2);
 VAR_5.cursor_is_valid = VAR_0;
    }
}
