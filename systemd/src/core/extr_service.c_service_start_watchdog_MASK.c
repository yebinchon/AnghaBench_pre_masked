
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_8__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int usec_t ;
struct TYPE_15__ {TYPE_1__* manager; } ;
struct TYPE_13__ {int monotonic; } ;
struct TYPE_14__ {scalar_t__ watchdog_event_source; TYPE_2__ watchdog_timestamp; } ;
struct TYPE_12__ {int event; } ;
typedef TYPE_3__ Service ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_8__* FUNC_1 (TYPE_3__*) ;
 int VAR_3 ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_8__*,int,char*) ;
 int FUNC_4 (int ,scalar_t__*,int ,int ,int ,int ,TYPE_3__*) ;
 int FUNC_5 (scalar_t__,char*) ;
 int FUNC_6 (scalar_t__,int ) ;
 int FUNC_7 (scalar_t__,int ) ;
 int FUNC_8 (scalar_t__,int ) ;
 int VAR_4 ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (TYPE_3__*) ;
 int FUNC_11 (int ,int ) ;

__attribute__((used)) static void FUNC_12(Service *VAR_5) {
        usec_t VAR_6;
        int VAR_7;

        FUNC_2(VAR_5);

        VAR_6 = FUNC_9(VAR_5);
        if (FUNC_0(VAR_6, 0, VAR_3)) {
                FUNC_10(VAR_5);
                return;
        }

        if (VAR_5->watchdog_event_source) {
                VAR_7 = FUNC_8(VAR_5->watchdog_event_source, FUNC_11(VAR_5->watchdog_timestamp.monotonic, VAR_6));
                if (VAR_7 < 0) {
                        FUNC_3(FUNC_1(VAR_5), VAR_7, "Failed to reset watchdog timer: %m");
                        return;
                }

                VAR_7 = FUNC_6(VAR_5->watchdog_event_source, VAR_1);
        } else {
                VAR_7 = FUNC_4(
                                FUNC_1(VAR_5)->manager->event,
                                &VAR_5->watchdog_event_source,
                                VAR_0,
                                FUNC_11(VAR_5->watchdog_timestamp.monotonic, VAR_6), 0,
                                VAR_4, VAR_5);
                if (VAR_7 < 0) {
                        FUNC_3(FUNC_1(VAR_5), VAR_7, "Failed to add watchdog timer: %m");
                        return;
                }

                (void) FUNC_5(VAR_5->watchdog_event_source, "service-watchdog");



                VAR_7 = FUNC_7(VAR_5->watchdog_event_source, VAR_2);
        }
        if (VAR_7 < 0)
                FUNC_3(FUNC_1(VAR_5), VAR_7, "Failed to install watchdog timer: %m");
}
