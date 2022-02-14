
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct stat {int st_mode; } ;
struct TYPE_4__ {char const* confirm_spawn; } ;
typedef TYPE_1__ Manager ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_2 (int,char*,char const*) ;
 scalar_t__ FUNC_3 (char const*,char*) ;
 scalar_t__ FUNC_4 (char const*,struct stat*) ;

const char *FUNC_5(Manager *VAR_2) {
        static int VAR_3 = 0;
        struct stat VAR_4;
        int VAR_5;

        FUNC_1(VAR_2);
        if (!VAR_2->confirm_spawn || FUNC_3(VAR_2->confirm_spawn, "/dev/console"))
                return VAR_2->confirm_spawn;

        if (FUNC_4(VAR_2->confirm_spawn, &VAR_4) < 0) {
                VAR_5 = -VAR_1;
                goto fail;
        }

        if (!FUNC_0(VAR_4.st_mode)) {
                VAR_5 = -VAR_0;
                goto fail;
        }

        VAR_3 = 0;
        return VAR_2->confirm_spawn;

fail:
        if (VAR_3 != VAR_5)
                VAR_3 = FUNC_2(VAR_5, "Failed to open %s, using default console: %m", VAR_2->confirm_spawn);

        return "/dev/console";
}
