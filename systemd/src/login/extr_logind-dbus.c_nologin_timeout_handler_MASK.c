
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef int sd_event_source ;
struct TYPE_2__ {int unlink_nologin; } ;
typedef TYPE_1__ Manager ;


 scalar_t__ FUNC_0 () ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(
                        sd_event_source *VAR_0,
                        uint64_t VAR_1,
                        void *VAR_2) {

        Manager *VAR_3 = VAR_2;

        FUNC_1("Creating /run/nologin, blocking further logins...");

        VAR_3->unlink_nologin =
                FUNC_0() >= 0;

        return 0;
}
