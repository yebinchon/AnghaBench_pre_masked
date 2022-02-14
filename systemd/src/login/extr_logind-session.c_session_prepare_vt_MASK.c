
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct vt_mode {void* acqsig; void* relsig; int mode; } ;
struct TYPE_7__ {int vtnr; TYPE_1__* user; } ;
struct TYPE_6__ {int uid; } ;
typedef TYPE_2__ Session ;


 int VAR_0 ;
 int VAR_1 ;
 struct vt_mode* VAR_2 ;
 struct vt_mode* VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int,int ,int) ;
 int FUNC_1 (int,int ,struct vt_mode*) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_5(Session *VAR_8) {
        int VAR_9, VAR_10;
        struct vt_mode VAR_11 = {};

        if (VAR_8->vtnr < 1)
                return 0;

        VAR_9 = FUNC_3(VAR_8);
        if (VAR_9 < 0)
                return VAR_9;

        VAR_10 = FUNC_0(VAR_9, VAR_8->user->uid, -1);
        if (VAR_10 < 0) {
                VAR_10 = FUNC_2(VAR_7,
                                    "Cannot change owner of /dev/tty%u: %m",
                                    VAR_8->vtnr);
                goto error;
        }

        VAR_10 = FUNC_1(VAR_9, VAR_1, VAR_3);
        if (VAR_10 < 0) {
                VAR_10 = FUNC_2(VAR_7,
                                    "Cannot set K_OFF on /dev/tty%u: %m",
                                    VAR_8->vtnr);
                goto error;
        }

        VAR_10 = FUNC_1(VAR_9, VAR_0, VAR_2);
        if (VAR_10 < 0) {
                VAR_10 = FUNC_2(VAR_7,
                                    "Cannot set KD_GRAPHICS on /dev/tty%u: %m",
                                    VAR_8->vtnr);
                goto error;
        }




        VAR_11.mode = VAR_5;
        VAR_11.relsig = VAR_4;
        VAR_11.acqsig = VAR_4 + 1;
        VAR_10 = FUNC_1(VAR_9, VAR_6, &VAR_11);
        if (VAR_10 < 0) {
                VAR_10 = FUNC_2(VAR_7,
                                    "Cannot set VT_PROCESS on /dev/tty%u: %m",
                                    VAR_8->vtnr);
                goto error;
        }

        return 0;

error:
        FUNC_4(VAR_8);
        return VAR_10;
}
