
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct tm {int dummy; } ;
struct timespec {int tv_sec; } ;
struct TYPE_10__ {int local_rtc; int polkit_registry; } ;
typedef TYPE_1__ sd_bus_message ;
typedef int sd_bus_error ;
typedef TYPE_1__ Context ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,int ,char*,int *,int,int ,int *,int *) ;
 int FUNC_3 (struct tm*) ;
 scalar_t__ FUNC_4 (int ,struct timespec*) ;
 int FUNC_5 (struct tm*) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int ,struct timespec*) ;
 int FUNC_8 (TYPE_1__*) ;
 int VAR_3 ;
 int FUNC_9 (int *,struct tm*) ;
 int FUNC_10 (int *,struct tm*) ;
 int FUNC_11 (int,char*) ;
 int FUNC_12 (int,char*,char*) ;
 int FUNC_13 (char*,char*) ;
 int FUNC_14 (struct tm*) ;
 int FUNC_15 (int ,char*,char*,char*,int *) ;
 int FUNC_16 (int *,int,char*,char*) ;
 int FUNC_17 (TYPE_1__*) ;
 int FUNC_18 (TYPE_1__*,char*,int*,int*,int*) ;
 int FUNC_19 (TYPE_1__*,int *) ;
 int FUNC_20 (struct tm*) ;

__attribute__((used)) static int FUNC_21(sd_bus_message *VAR_4, void *VAR_5, sd_bus_error *VAR_6) {
        int VAR_7, VAR_8, VAR_9;
        Context *VAR_10 = VAR_5;
        struct timespec VAR_11;
        int VAR_12;

        FUNC_0(VAR_4);
        FUNC_0(VAR_10);

        VAR_12 = FUNC_18(VAR_4, "bbb", &VAR_7, &VAR_8, &VAR_9);
        if (VAR_12 < 0)
                return VAR_12;

        if (VAR_7 == VAR_10->local_rtc)
                return FUNC_19(VAR_4, ((void*)0));

        VAR_12 = FUNC_2(
                        VAR_4,
                        VAR_0,
                        "org.freedesktop.timedate1.set-local-rtc",
                        ((void*)0),
                        VAR_9,
                        VAR_2,
                        &VAR_10->polkit_registry,
                        VAR_6);
        if (VAR_12 < 0)
                return VAR_12;
        if (VAR_12 == 0)
                return 1;

        VAR_10->local_rtc = VAR_7;


        VAR_12 = FUNC_8(VAR_10);
        if (VAR_12 < 0) {
                FUNC_12(VAR_12, "Failed to set RTC to %s: %m", VAR_7 ? "local" : "UTC");
                return FUNC_16(VAR_6, VAR_12, "Failed to set RTC to %s: %m", VAR_7 ? "local" : "UTC");
        }


        VAR_12 = FUNC_6(((void*)0));
        if (VAR_12 < 0)
                FUNC_11(VAR_12, "Failed to tell kernel about timezone, ignoring: %m");


        FUNC_1(FUNC_4(VAR_1, &VAR_11) == 0);

        if (VAR_8) {
                struct tm VAR_13;


                if (VAR_10->local_rtc)
                        FUNC_10(&VAR_11.tv_sec, &VAR_13);
                else
                        FUNC_9(&VAR_11.tv_sec, &VAR_13);


                VAR_12 = FUNC_3(&VAR_13);
                if (VAR_12 < 0)
                        FUNC_11(VAR_12, "Failed to get hardware clock, ignoring: %m");
                else {

                        if (VAR_10->local_rtc)
                                VAR_11.tv_sec = FUNC_14(&VAR_13);
                        else
                                VAR_11.tv_sec = FUNC_20(&VAR_13);

                        if (FUNC_7(VAR_1, &VAR_11) < 0)
                                FUNC_11(VAR_3, "Failed to update system clock, ignoring: %m");
                }

        } else {
                struct tm VAR_14;


                if (VAR_10->local_rtc)
                        FUNC_10(&VAR_11.tv_sec, &VAR_14);
                else
                        FUNC_9(&VAR_11.tv_sec, &VAR_14);

                VAR_12 = FUNC_5(&VAR_14);
                if (VAR_12 < 0)
                        FUNC_11(VAR_12, "Failed to sync time to hardware clock, ignoring: %m");
        }

        FUNC_13("RTC configured to %s time.", VAR_10->local_rtc ? "local" : "UTC");

        (void) FUNC_15(FUNC_17(VAR_4),
                                              "/org/freedesktop/timedate1", "org.freedesktop.timedate1", "LocalRTC",
                                              ((void*)0));

        return FUNC_19(VAR_4, ((void*)0));
}
