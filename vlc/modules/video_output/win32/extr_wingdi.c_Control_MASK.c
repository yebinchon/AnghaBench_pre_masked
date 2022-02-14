
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* sys; } ;
typedef TYPE_1__ vout_display_t ;
struct TYPE_6__ {int sys; int area; } ;
typedef TYPE_2__ vout_display_sys_t ;
typedef int va_list ;


 int FUNC_0 (int ,int *,int *,int,int ) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_2(vout_display_t *VAR_0, int VAR_1, va_list VAR_2)
{
    vout_display_sys_t *VAR_3 = VAR_0->sys;
    return FUNC_0(FUNC_1(VAR_0), &VAR_3->area, &VAR_3->sys, VAR_1, VAR_2);
}
