
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* sys; } ;
typedef TYPE_1__ vout_display_t ;
struct termios {int c_lflag; int* c_cc; scalar_t__ c_iflag; } ;
struct sigaction {int sa_mask; int sa_handler; } ;
struct vt_mode {void* acqsig; void* relsig; scalar_t__ waitv; int mode; } ;
struct TYPE_6__ {int tty; struct termios old_termios; struct sigaction sig_usr2; struct sigaction sig_usr1; struct vt_mode vt_mode; } ;
typedef TYPE_2__ vout_display_sys_t ;
typedef int sig_tty ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 struct vt_mode* VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_2 (int ,int ,struct vt_mode*) ;
 int FUNC_3 (struct sigaction*,int ,int) ;
 int FUNC_4 (TYPE_1__*,char*,...) ;
 scalar_t__ FUNC_5 (void*,struct sigaction*,struct sigaction*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,struct termios*) ;
 int FUNC_8 (int ,int ,struct termios*) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static int FUNC_10(vout_display_t *VAR_17)
{
    vout_display_sys_t *VAR_18 = VAR_17->sys;

    struct termios VAR_19;

    FUNC_0(VAR_18->tty);


    if (FUNC_7(0, &VAR_18->old_termios) == -1) {
        FUNC_4(VAR_17, "tcgetattr failed");
    }

    if (FUNC_7(0, &VAR_19) == -1) {
        FUNC_4(VAR_17, "tcgetattr failed");
    }



    VAR_19.c_lflag &= ~ (VAR_2);
    VAR_19.c_lflag &= ~(VAR_0 | VAR_1);
    VAR_19.c_iflag = 0;
    VAR_19.c_cc[VAR_9] = 1;
    VAR_19.c_cc[VAR_10] = 0;

    if (FUNC_8(0, VAR_6, &VAR_19) == -1) {
        FUNC_4(VAR_17, "tcsetattr failed");
    }

    FUNC_2(VAR_18->tty, VAR_14, VAR_11);
    if (-1 == FUNC_2(VAR_18->tty, VAR_12, &VAR_18->vt_mode)) {
        FUNC_4(VAR_17, "cannot get terminal mode (%s)", FUNC_9(VAR_16));
        goto error;
    }
    struct vt_mode VAR_20 = VAR_18->vt_mode;
    VAR_20.mode = VAR_13;
    VAR_20.waitv = 0;
    VAR_20.relsig = VAR_3;
    VAR_20.acqsig = VAR_4;

    if (-1 == FUNC_2(VAR_18->tty, VAR_15, &VAR_20)) {
        FUNC_4(VAR_17, "cannot set terminal mode (%s)", FUNC_9(VAR_16));
        goto error;
    }
    return VAR_8;

error:





    FUNC_8(0, 0, &VAR_18->old_termios);
    FUNC_1(VAR_18->tty);
    return VAR_7;
}
