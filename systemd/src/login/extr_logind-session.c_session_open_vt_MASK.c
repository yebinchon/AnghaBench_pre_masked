
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int vtnr; scalar_t__ vtfd; int id; } ;
typedef TYPE_1__ Session ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (scalar_t__,char*,char*,int ) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (char*,char*,int) ;

__attribute__((used)) static int FUNC_4(Session *VAR_5) {
        char VAR_6[sizeof("/dev/tty") + FUNC_0(VAR_5->vtnr)];

        if (VAR_5->vtnr < 1)
                return -VAR_0;

        if (VAR_5->vtfd >= 0)
                return VAR_5->vtfd;

        FUNC_3(VAR_6, "/dev/tty%u", VAR_5->vtnr);
        VAR_5->vtfd = FUNC_2(VAR_6, VAR_4 | VAR_1 | VAR_3 | VAR_2);
        if (VAR_5->vtfd < 0)
                return FUNC_1(VAR_5->vtfd, "cannot open VT %s of session %s: %m", VAR_6, VAR_5->id);

        return VAR_5->vtfd;
}
