
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_3__* p_sys; } ;
struct TYPE_7__ {TYPE_1__ updater; } ;
typedef TYPE_2__ subpicture_t ;
struct TYPE_8__ {struct TYPE_8__* text; } ;
typedef TYPE_3__ osd_spu_updater_sys_t ;


 int FUNC_0 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_1(subpicture_t *VAR_0)
{
    osd_spu_updater_sys_t *VAR_1 = VAR_0->updater.p_sys;

    FUNC_0(VAR_1->text);
    FUNC_0(VAR_1);
}
