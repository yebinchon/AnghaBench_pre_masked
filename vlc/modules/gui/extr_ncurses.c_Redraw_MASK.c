
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ intf_thread_t ;
struct TYPE_7__ {int box_type; int box_height; int box_y; int box_lines_total; int box_start; int color; } ;
typedef TYPE_2__ intf_sys_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int,int ,int ) ;
 int FUNC_1 (int ,int,scalar_t__) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_2 ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int,int) ;
 int * VAR_3 ;
 int FUNC_6 () ;

__attribute__((used)) static void FUNC_7(intf_thread_t *VAR_4)
{
    intf_sys_t *VAR_5 = VAR_4->p_sys;
    int VAR_6 = VAR_5->box_type;
    int VAR_7 = FUNC_2(VAR_4);

    VAR_5->box_height = VAR_2 - VAR_7 - 2;
    FUNC_0(VAR_7++, VAR_5->box_height, VAR_5->color, FUNC_4(VAR_3[VAR_6]));

    VAR_5->box_y = VAR_7;

    if (VAR_6 != VAR_0) {
        FUNC_3(VAR_4);

        if (VAR_5->box_lines_total == 0)
            VAR_5->box_start = 0;
        else if (VAR_5->box_start > VAR_5->box_lines_total - 1)
            VAR_5->box_start = VAR_5->box_lines_total - 1;
        VAR_7 += FUNC_5(VAR_5->box_lines_total - VAR_5->box_start,
                   VAR_5->box_height);
    }

    while (VAR_7 < VAR_2 - 1)
        FUNC_1(VAR_7++, 1, VAR_1 - 2);

    FUNC_6();
}
