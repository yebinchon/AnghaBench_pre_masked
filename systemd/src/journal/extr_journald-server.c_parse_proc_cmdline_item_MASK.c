
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int forward_to_syslog; int forward_to_kmsg; int forward_to_console; int forward_to_wall; int max_level_console; int max_level_store; int max_level_syslog; int max_level_kmsg; int max_level_wall; } ;
typedef TYPE_1__ Server ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char*,char const*) ;
 int FUNC_3 (char const*) ;
 scalar_t__ FUNC_4 (char const*,char*) ;
 scalar_t__ FUNC_5 (char const*,char const*) ;
 scalar_t__ FUNC_6 (char const*,char*) ;

__attribute__((used)) static int FUNC_7(const char *VAR_0, const char *VAR_1, void *VAR_2) {
        Server *VAR_3 = VAR_2;
        int VAR_4;

        FUNC_0(VAR_3);

        if (FUNC_4(VAR_0, "systemd.journald.forward_to_syslog")) {

                VAR_4 = VAR_1 ? FUNC_3(VAR_1) : 1;
                if (VAR_4 < 0)
                        FUNC_2("Failed to parse forward to syslog switch \"%s\". Ignoring.", VAR_1);
                else
                        VAR_3->forward_to_syslog = VAR_4;

        } else if (FUNC_4(VAR_0, "systemd.journald.forward_to_kmsg")) {

                VAR_4 = VAR_1 ? FUNC_3(VAR_1) : 1;
                if (VAR_4 < 0)
                        FUNC_2("Failed to parse forward to kmsg switch \"%s\". Ignoring.", VAR_1);
                else
                        VAR_3->forward_to_kmsg = VAR_4;

        } else if (FUNC_4(VAR_0, "systemd.journald.forward_to_console")) {

                VAR_4 = VAR_1 ? FUNC_3(VAR_1) : 1;
                if (VAR_4 < 0)
                        FUNC_2("Failed to parse forward to console switch \"%s\". Ignoring.", VAR_1);
                else
                        VAR_3->forward_to_console = VAR_4;

        } else if (FUNC_4(VAR_0, "systemd.journald.forward_to_wall")) {

                VAR_4 = VAR_1 ? FUNC_3(VAR_1) : 1;
                if (VAR_4 < 0)
                        FUNC_2("Failed to parse forward to wall switch \"%s\". Ignoring.", VAR_1);
                else
                        VAR_3->forward_to_wall = VAR_4;

        } else if (FUNC_4(VAR_0, "systemd.journald.max_level_console")) {

                if (FUNC_5(VAR_0, VAR_1))
                        return 0;

                VAR_4 = FUNC_1(VAR_1);
                if (VAR_4 < 0)
                        FUNC_2("Failed to parse max level console value \"%s\". Ignoring.", VAR_1);
                else
                        VAR_3->max_level_console = VAR_4;

        } else if (FUNC_4(VAR_0, "systemd.journald.max_level_store")) {

                if (FUNC_5(VAR_0, VAR_1))
                        return 0;

                VAR_4 = FUNC_1(VAR_1);
                if (VAR_4 < 0)
                        FUNC_2("Failed to parse max level store value \"%s\". Ignoring.", VAR_1);
                else
                        VAR_3->max_level_store = VAR_4;

        } else if (FUNC_4(VAR_0, "systemd.journald.max_level_syslog")) {

                if (FUNC_5(VAR_0, VAR_1))
                        return 0;

                VAR_4 = FUNC_1(VAR_1);
                if (VAR_4 < 0)
                        FUNC_2("Failed to parse max level syslog value \"%s\". Ignoring.", VAR_1);
                else
                        VAR_3->max_level_syslog = VAR_4;

        } else if (FUNC_4(VAR_0, "systemd.journald.max_level_kmsg")) {

                if (FUNC_5(VAR_0, VAR_1))
                        return 0;

                VAR_4 = FUNC_1(VAR_1);
                if (VAR_4 < 0)
                        FUNC_2("Failed to parse max level kmsg value \"%s\". Ignoring.", VAR_1);
                else
                        VAR_3->max_level_kmsg = VAR_4;

        } else if (FUNC_4(VAR_0, "systemd.journald.max_level_wall")) {

                if (FUNC_5(VAR_0, VAR_1))
                        return 0;

                VAR_4 = FUNC_1(VAR_1);
                if (VAR_4 < 0)
                        FUNC_2("Failed to parse max level wall value \"%s\". Ignoring.", VAR_1);
                else
                        VAR_3->max_level_wall = VAR_4;

        } else if (FUNC_6(VAR_0, "systemd.journald"))
                FUNC_2("Unknown journald kernel command line option \"%s\". Ignoring.", VAR_0);


        return 0;
}
