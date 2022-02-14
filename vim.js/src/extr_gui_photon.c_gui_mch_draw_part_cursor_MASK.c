
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int guicolor_T ;
struct TYPE_9__ {scalar_t__ char_height; int row; int col; } ;
struct TYPE_7__ {scalar_t__ y; scalar_t__ x; } ;
struct TYPE_6__ {scalar_t__ y; scalar_t__ x; } ;
struct TYPE_8__ {TYPE_2__ ul; TYPE_1__ lr; } ;
typedef TYPE_3__ PhRect_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (TYPE_3__*,int ) ;
 int VAR_2 ;
 TYPE_4__ VAR_3 ;
 int FUNC_3 (int ) ;

void
FUNC_4(int VAR_4, int VAR_5, guicolor_T VAR_6)
{
    PhRect_t VAR_7;

    VAR_7.ul.x = FUNC_0(VAR_3.col);
    VAR_7.ul.y = FUNC_1(VAR_3.row) + VAR_3.char_height - VAR_5;
    VAR_7.lr.x = VAR_7.ul.x + VAR_4 - 1;
    VAR_7.lr.y = VAR_7.ul.y + VAR_5 - 1;

    VAR_1;
    FUNC_3(VAR_6);
    FUNC_2(&VAR_7, VAR_2);
    VAR_0;
}
