
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int sd_event_source ;
struct TYPE_3__ {int timer_event; int daemon; } ;
typedef int MHD_UNSIGNED_LONG_LONG ;
typedef TYPE_1__ MHDDaemonWrapper ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int,char*) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ) ;

__attribute__((used)) static int FUNC_8(sd_event_source *VAR_4,
                               int VAR_5,
                               uint32_t VAR_6,
                               void *VAR_7) {
        MHDDaemonWrapper *VAR_8 = VAR_7;
        int VAR_9;
        MHD_UNSIGNED_LONG_LONG VAR_10 = VAR_3;

        FUNC_3(VAR_8);

        VAR_9 = FUNC_1(VAR_8->daemon);
        if (VAR_9 == VAR_1)

                return FUNC_4(FUNC_2(VAR_0),
                                       "MHD_run failed!");
        if (FUNC_0(VAR_8->daemon, &VAR_10) == VAR_1)
                VAR_10 = VAR_3;

        VAR_9 = FUNC_7(VAR_8->timer_event, VAR_10);
        if (VAR_9 < 0) {
                FUNC_5(VAR_9, "Unable to set event loop timeout: %m, this may result in indefinite blocking!");
                return 1;
        }

        VAR_9 = FUNC_6(VAR_8->timer_event, VAR_2);
        if (VAR_9 < 0)
                FUNC_5(VAR_9, "Unable to enable timer_event: %m, this may result in indefinite blocking!");

        return 1;
}
