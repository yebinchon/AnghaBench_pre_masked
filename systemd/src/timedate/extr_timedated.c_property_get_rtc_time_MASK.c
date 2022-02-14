
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usec_t ;
struct tm {int dummy; } ;
typedef int sd_bus_message ;
typedef int sd_bus_error ;
typedef int sd_bus ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct tm*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,int,char*) ;
 int FUNC_4 (int *,char*,int) ;
 scalar_t__ FUNC_5 (struct tm*) ;

__attribute__((used)) static int FUNC_6(
                sd_bus *VAR_3,
                const char *VAR_4,
                const char *VAR_5,
                const char *VAR_6,
                sd_bus_message *VAR_7,
                void *VAR_8,
                sd_bus_error *VAR_9) {

        struct tm VAR_10 = {};
        usec_t VAR_11 = 0;
        int VAR_12;

        VAR_12 = FUNC_0(&VAR_10);
        if (VAR_12 == -VAR_0)
                FUNC_2("/dev/rtc is busy. Is somebody keeping it open continuously? That's not a good idea... Returning a bogus RTC timestamp.");
        else if (VAR_12 == -VAR_1)
                FUNC_1("/dev/rtc not found.");
        else if (VAR_12 < 0)
                return FUNC_3(VAR_9, VAR_12, "Failed to read RTC: %m");
        else
                VAR_11 = (usec_t) FUNC_5(&VAR_10) * VAR_2;

        return FUNC_4(VAR_7, "t", VAR_11);
}
