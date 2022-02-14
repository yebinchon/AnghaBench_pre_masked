
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int vimTextArea; } ;
struct TYPE_5__ {short x; short y; } ;
struct TYPE_6__ {TYPE_1__ pos; } ;
typedef TYPE_2__ PhCursorInfo_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,TYPE_2__*) ;
 int FUNC_2 (int ,short*,short*) ;
 TYPE_3__ VAR_0 ;

void
FUNC_3(int *VAR_1, int *VAR_2)
{
    PhCursorInfo_t VAR_3;
    short VAR_4, VAR_5;



    FUNC_1(FUNC_0(((void*)0)), &VAR_3);
    FUNC_2(VAR_0.vimTextArea , &VAR_4, &VAR_5);

    *VAR_1 = VAR_3.pos.x - VAR_4;
    *VAR_2 = VAR_3.pos.y - VAR_5;
}
