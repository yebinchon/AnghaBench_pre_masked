
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* sys; } ;
typedef TYPE_1__ vout_display_t ;
struct TYPE_5__ {int tty; int old_termios; int sig_usr2; int sig_usr1; int vt_mode; } ;
typedef TYPE_2__ vout_display_sys_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int ,int *,int *) ;
 int FUNC_3 (int ,int ,int *) ;

__attribute__((used)) static void FUNC_4(vout_display_t *VAR_3)
{
    vout_display_sys_t *VAR_4 = VAR_3->sys;


    FUNC_1(VAR_4->tty, VAR_2, &VAR_4->vt_mode);
    FUNC_3(0, 0, &VAR_4->old_termios);


    FUNC_0(VAR_4->tty);
}
