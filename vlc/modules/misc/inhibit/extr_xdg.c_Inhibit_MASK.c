
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vlc_tick_t ;
struct TYPE_4__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ vlc_inhibit_t ;
struct TYPE_5__ {int timer; } ;
typedef TYPE_2__ vlc_inhibit_sys_t ;


 unsigned int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int ,int,int ,int ) ;

__attribute__((used)) static void FUNC_2 (vlc_inhibit_t *VAR_2, unsigned VAR_3)
{
    vlc_inhibit_sys_t *VAR_4 = VAR_2->p_sys;
    bool VAR_5 = (VAR_3 & VAR_0) != 0;
    vlc_tick_t VAR_6 = VAR_5 ? FUNC_0(30): VAR_1;

    FUNC_1 (VAR_4->timer, 0, VAR_6, VAR_6);
}
