
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int t ;
typedef size_t ssize_t ;
struct TYPE_8__ {TYPE_1__* manager; } ;
struct TYPE_7__ {int console_active_fd; } ;
typedef TYPE_2__ Seat ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int VAR_2 ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (int,char*) ;
 scalar_t__ FUNC_3 (int ,int ,int ) ;
 size_t FUNC_4 (int ,char*,int) ;
 int FUNC_5 (TYPE_2__*,int) ;
 int FUNC_6 (TYPE_2__*) ;
 char* FUNC_7 (int) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*) ;

int FUNC_10(Seat *VAR_3) {
        char VAR_4[64];
        ssize_t VAR_5;
        int VAR_6;

        FUNC_0(VAR_3);

        if (!FUNC_6(VAR_3))
                return 0;

        if (FUNC_3(VAR_3->manager->console_active_fd, VAR_1, 0) < 0)
                return FUNC_2(VAR_2, "lseek on console_active_fd failed: %m");

        VAR_5 = FUNC_4(VAR_3->manager->console_active_fd, VAR_4, sizeof(VAR_4)-1);
        if (VAR_5 <= 0) {
                FUNC_1("Failed to read current console: %s", VAR_5 < 0 ? FUNC_7(VAR_2) : "EOF");
                return VAR_5 < 0 ? -VAR_2 : -VAR_0;
        }

        VAR_4[VAR_5] = 0;
        FUNC_8(VAR_4);

        VAR_6 = FUNC_9(VAR_4);
        if (VAR_6 < 0) {
                FUNC_2(VAR_6, "Hm, /sys/class/tty/tty0/active is badly formatted: %m");
                return -VAR_0;
        }

        return FUNC_5(VAR_3, VAR_6);
}
