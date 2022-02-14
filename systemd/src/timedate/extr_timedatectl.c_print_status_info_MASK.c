
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ time_t ;
struct tm {int dummy; } ;
struct TYPE_4__ {char* timezone; int time; int rtc_time; scalar_t__ rtc_local; scalar_t__ ntp_active; scalar_t__ ntp_capable; scalar_t__ ntp_synced; } ;
typedef TYPE_1__ StatusInfo ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 char* FUNC_1 () ;
 char* FUNC_2 () ;
 int VAR_4 ;
 int FUNC_3 (TYPE_1__ const*) ;
 int VAR_5 ;
 char* FUNC_4 (char*) ;
 int FUNC_5 (scalar_t__*,struct tm*) ;
 scalar_t__ FUNC_6 (char*) ;
 int FUNC_7 (scalar_t__*,struct tm*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 (char*,char*,...) ;
 int FUNC_11 (char*,char const*,int) ;
 char* FUNC_12 (char const*) ;
 size_t FUNC_13 (char*,int,char*,int ) ;
 char* FUNC_14 (char*,char*) ;
 char* FUNC_15 (char*) ;
 scalar_t__ FUNC_16 (int *) ;
 int FUNC_17 () ;
 int FUNC_18 (char*) ;
 char* FUNC_19 (scalar_t__) ;

__attribute__((used)) static void FUNC_20(const StatusInfo *VAR_6) {
        const char *VAR_7 = ((void*)0), *VAR_8, *VAR_9;
        bool VAR_10 = 0;
        char VAR_11[VAR_2];
        struct tm VAR_12;
        time_t VAR_13;
        size_t VAR_14;
        int VAR_15;

        FUNC_3(VAR_6);


        VAR_8 = FUNC_4("TZ");
        if (VAR_8)
                VAR_7 = FUNC_12(VAR_8);


        VAR_9 = FUNC_14(":", FUNC_6(VAR_6->timezone) ? "UTC" : VAR_6->timezone);
        if (FUNC_11("TZ", VAR_9, 1) < 0)
                FUNC_9(VAR_5, "Failed to set TZ environment variable, ignoring: %m");
        else
                FUNC_17();

        if (VAR_6->time != 0) {
                VAR_13 = (time_t) (VAR_6->time / VAR_3);
                VAR_10 = 1;
        } else if (FUNC_0(VAR_4, VAR_0, VAR_1)) {
                VAR_13 = FUNC_16(((void*)0));
                VAR_10 = 1;
        } else
                FUNC_8("Could not get time from timedated and not operating locally, ignoring.");

        if (VAR_10) {
                VAR_14 = FUNC_13(VAR_11, sizeof VAR_11, "%a %Y-%m-%d %H:%M:%S %Z", FUNC_7(&VAR_13, &VAR_12));
                FUNC_10("               Local time: %s\n", VAR_14 > 0 ? VAR_11 : "n/a");

                VAR_14 = FUNC_13(VAR_11, sizeof VAR_11, "%a %Y-%m-%d %H:%M:%S UTC", FUNC_5(&VAR_13, &VAR_12));
                FUNC_10("           Universal time: %s\n", VAR_14 > 0 ? VAR_11 : "n/a");
        } else {
                FUNC_10("               Local time: %s\n", "n/a");
                FUNC_10("           Universal time: %s\n", "n/a");
        }

        if (VAR_6->rtc_time > 0) {
                time_t VAR_16;

                VAR_16 = (time_t) (VAR_6->rtc_time / VAR_3);
                VAR_14 = FUNC_13(VAR_11, sizeof VAR_11, "%a %Y-%m-%d %H:%M:%S", FUNC_5(&VAR_16, &VAR_12));
                FUNC_10("                 RTC time: %s\n", VAR_14 > 0 ? VAR_11 : "n/a");
        } else
                FUNC_10("                 RTC time: %s\n", "n/a");

        if (VAR_10)
                VAR_14 = FUNC_13(VAR_11, sizeof VAR_11, "%Z, %z", FUNC_7(&VAR_13, &VAR_12));


        if (VAR_7)
                VAR_15 = FUNC_11("TZ", VAR_7, 1);
        else
                VAR_15 = FUNC_18("TZ");
        if (VAR_15 < 0)
                FUNC_9(VAR_5, "Failed to set TZ environment variable, ignoring: %m");
        else
                FUNC_17();

        FUNC_10("                Time zone: %s (%s)\n"
               "System clock synchronized: %s\n"
               "              NTP service: %s\n"
               "          RTC in local TZ: %s\n",
               FUNC_15(VAR_6->timezone), VAR_10 && VAR_14 > 0 ? VAR_11 : "n/a",
               FUNC_19(VAR_6->ntp_synced),
               VAR_6->ntp_capable ? (VAR_6->ntp_active ? "active" : "inactive") : "n/a",
               FUNC_19(VAR_6->rtc_local));

        if (VAR_6->rtc_local)
                FUNC_10("\n%s"
                       "Warning: The system is configured to read the RTC time in the local time zone.\n"
                       "         This mode cannot be fully supported. It will create various problems\n"
                       "         with time zone changes and daylight saving time adjustments. The RTC\n"
                       "         time is never updated, it relies on external facilities to maintain it.\n"
                       "         If at all possible, use RTC in UTC by calling\n"
                       "         'timedatectl set-local-rtc 0'.%s\n", FUNC_1(), FUNC_2());
}
