
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {int scroll_region_bot; int char_height; scalar_t__ scroll_region_right; scalar_t__ scroll_region_left; int vimTextArea; } ;
struct TYPE_12__ {int y; scalar_t__ x; } ;
struct TYPE_10__ {scalar_t__ y; void* x; } ;
struct TYPE_9__ {int y; void* x; } ;
struct TYPE_11__ {TYPE_2__ lr; TYPE_1__ ul; } ;
typedef TYPE_3__ PhRect_t ;
typedef TYPE_4__ PhPoint_t ;


 void* FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,TYPE_3__*,TYPE_4__*) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (TYPE_3__*,int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (int ) ;
 TYPE_5__ VAR_0 ;
 int FUNC_10 (int,scalar_t__,int,scalar_t__) ;
 int VAR_1 ;

void
FUNC_11(int VAR_2, int VAR_3)
{
    PhRect_t VAR_4;
    PhPoint_t VAR_5;

    VAR_4.ul.x = FUNC_0(VAR_0.scroll_region_left);
    VAR_4.ul.y = FUNC_1(VAR_2 + VAR_3);

    VAR_4.lr.x = FUNC_0(VAR_0.scroll_region_right + 1) - 1;
    VAR_4.lr.y = FUNC_1(VAR_0.scroll_region_bot + 1) - 1;

    FUNC_7(VAR_0.vimTextArea, &VAR_1);
    FUNC_4(&VAR_1, FUNC_8(VAR_0.vimTextArea, ((void*)0)));
    FUNC_5(&VAR_4, &VAR_1);

    VAR_5.x = 0;
    VAR_5.y = -VAR_3 * VAR_0.char_height;

    FUNC_2();

    FUNC_3(FUNC_9(FUNC_6(VAR_0.vimTextArea)), &VAR_4, &VAR_5);

    FUNC_10(
 VAR_0.scroll_region_bot - VAR_3 + 1,
 VAR_0.scroll_region_left,
 VAR_0.scroll_region_bot,
 VAR_0.scroll_region_right);
}
