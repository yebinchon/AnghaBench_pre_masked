
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int fifo; } ;
typedef TYPE_1__ vout_display_sys_t ;
typedef int key ;
struct TYPE_7__ {int p_buffer; } ;
typedef TYPE_2__ block_t ;


 TYPE_2__* FUNC_0 (int) ;
 int FUNC_1 (int ,TYPE_2__*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int*,int) ;

__attribute__((used)) static void FUNC_4(vout_display_sys_t *VAR_0, int VAR_1)
{
    block_t *VAR_2 = FUNC_0(sizeof (VAR_1));
    if (FUNC_2(VAR_2 != ((void*)0))) {
        FUNC_3(VAR_2->p_buffer, &VAR_1, sizeof (VAR_1));
        FUNC_1(VAR_0->fifo, VAR_2);
    }
}
