
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* sys; } ;
typedef TYPE_1__ vout_window_t ;
struct TYPE_6__ {int button_pressed; } ;
typedef TYPE_2__ vout_window_sys_t ;


 int FUNC_0 () ;
 int FUNC_1 (TYPE_1__*,unsigned int) ;

__attribute__((used)) static void FUNC_2( vout_window_t *VAR_0, unsigned VAR_1 )
{
    vout_window_sys_t *VAR_2 = VAR_0->sys;
    VAR_2->button_pressed &= ~(1 << VAR_1);
    if( !VAR_2->button_pressed )
        FUNC_0();
    FUNC_1(VAR_0, VAR_1);
}
