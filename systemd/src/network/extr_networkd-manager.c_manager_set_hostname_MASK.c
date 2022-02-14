
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int bus; int dynamic_hostname; } ;
typedef TYPE_1__ Manager ;


 scalar_t__ FUNC_0 (int *,char const*) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int *,char*,char*,char*,char*,int ,TYPE_1__*,char*,char const*,int) ;
 scalar_t__ FUNC_5 (int ) ;
 int VAR_0 ;
 int FUNC_6 (char const*) ;

int FUNC_7(Manager *VAR_1, const char *VAR_2) {
        int VAR_3;

        FUNC_1("Setting transient hostname: '%s'", FUNC_6(VAR_2));

        if (FUNC_0(&VAR_1->dynamic_hostname, VAR_2) < 0)
                return FUNC_3();

        if (!VAR_1->bus || FUNC_5(VAR_1->bus) <= 0) {
                FUNC_1("Not connected to system bus, setting hostname later.");
                return 0;
        }

        VAR_3 = FUNC_4(
                        VAR_1->bus,
                        ((void*)0),
                        "org.freedesktop.hostname1",
                        "/org/freedesktop/hostname1",
                        "org.freedesktop.hostname1",
                        "SetHostname",
                        VAR_0,
                        VAR_1,
                        "sb",
                        VAR_2,
                        0);

        if (VAR_3 < 0)
                return FUNC_2(VAR_3, "Could not set transient hostname: %m");

        return 0;
}
