
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_3__* sys; } ;
struct TYPE_7__ {TYPE_1__ owner; } ;
typedef TYPE_2__ vout_window_t ;
typedef int vout_thread_t ;
struct TYPE_8__ {int * vout; } ;
typedef TYPE_3__ vout_display_window_t ;


 int FUNC_0 (TYPE_2__*,char*,unsigned int,unsigned int) ;
 int FUNC_1 (int *,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_2(vout_window_t *VAR_0,
                                             unsigned VAR_1, unsigned VAR_2)
{
    vout_display_window_t *VAR_3 = VAR_0->owner.sys;
    vout_thread_t *VAR_4 = VAR_3->vout;

    FUNC_0(VAR_0, "resized to %ux%u", VAR_1, VAR_2);
    FUNC_1(VAR_4, VAR_1, VAR_2);
}
