
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CalendarSpec ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int **) ;
 int FUNC_2 () ;
 int FUNC_3 (char*,char*,int,int) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 () ;

int FUNC_6(int VAR_1, char* VAR_2[]) {
        CalendarSpec *VAR_3;

        FUNC_4("Sat,Thu,Mon-Wed,Sat-Sun", "Mon..Thu,Sat,Sun *-*-* 00:00:00");
        FUNC_4("Sat,Thu,Mon..Wed,Sat..Sun", "Mon..Thu,Sat,Sun *-*-* 00:00:00");
        FUNC_4("Mon,Sun 12-*-* 2,1:23", "Mon,Sun 2012-*-* 01,02:23:00");
        FUNC_4("Wed *-1", "Wed *-*-01 00:00:00");
        FUNC_4("Wed-Wed,Wed *-1", "Wed *-*-01 00:00:00");
        FUNC_4("Wed..Wed,Wed *-1", "Wed *-*-01 00:00:00");
        FUNC_4("Wed, 17:48", "Wed *-*-* 17:48:00");
        FUNC_4("Wednesday,", "Wed *-*-* 00:00:00");
        FUNC_4("Wed-Sat,Tue 12-10-15 1:2:3", "Tue..Sat 2012-10-15 01:02:03");
        FUNC_4("Wed..Sat,Tue 12-10-15 1:2:3", "Tue..Sat 2012-10-15 01:02:03");
        FUNC_4("*-*-7 0:0:0", "*-*-07 00:00:00");
        FUNC_4("10-15", "*-10-15 00:00:00");
        FUNC_4("monday *-12-* 17:00", "Mon *-12-* 17:00:00");
        FUNC_4("Mon,Fri *-*-3,1,2 *:30:45", "Mon,Fri *-*-01,02,03 *:30:45");
        FUNC_4("12,14,13,12:20,10,30", "*-*-* 12,13,14:10,20,30:00");
        FUNC_4("mon,fri *-1/2-1,3 *:30:45", "Mon,Fri *-01/2-01,03 *:30:45");
        FUNC_4("03-05 08:05:40", "*-03-05 08:05:40");
        FUNC_4("08:05:40", "*-*-* 08:05:40");
        FUNC_4("05:40", "*-*-* 05:40:00");
        FUNC_4("Sat,Sun 12-05 08:05:40", "Sat,Sun *-12-05 08:05:40");
        FUNC_4("Sat,Sun 08:05:40", "Sat,Sun *-*-* 08:05:40");
        FUNC_4("2003-03-05 05:40", "2003-03-05 05:40:00");
        FUNC_4("2003-03-05", "2003-03-05 00:00:00");
        FUNC_4("03-05", "*-03-05 00:00:00");
        FUNC_4("hourly", "*-*-* *:00:00");
        FUNC_4("daily", "*-*-* 00:00:00");
        FUNC_4("monthly", "*-*-01 00:00:00");
        FUNC_4("weekly", "Mon *-*-* 00:00:00");
        FUNC_4("minutely", "*-*-* *:*:00");
        FUNC_4("quarterly", "*-01,04,07,10-01 00:00:00");
        FUNC_4("semi-annually", "*-01,07-01 00:00:00");
        FUNC_4("annually", "*-01-01 00:00:00");
        FUNC_4("*:2/3", "*-*-* *:02/3:00");
        FUNC_4("2015-10-25 01:00:00 uTc", "2015-10-25 01:00:00 UTC");
        FUNC_4("2015-10-25 01:00:00 Asia/Vladivostok", "2015-10-25 01:00:00 Asia/Vladivostok");
        FUNC_4("weekly Pacific/Auckland", "Mon *-*-* 00:00:00 Pacific/Auckland");
        FUNC_4("2016-03-27 03:17:00.4200005", "2016-03-27 03:17:00.420001");
        FUNC_4("2016-03-27 03:17:00/0.42", "2016-03-27 03:17:00/0.420000");
        FUNC_4("9..11,13:00,30", "*-*-* 09..11,13:00,30:00");
        FUNC_4("1..3-1..3 1..3:1..3", "*-01..03-01..03 01..03:01..03:00");
        FUNC_4("00:00:1.125..2.125", "*-*-* 00:00:01.125000..02.125000");
        FUNC_4("00:00:1.0..3.8", "*-*-* 00:00:01..03");
        FUNC_4("00:00:01..03", "*-*-* 00:00:01..03");
        FUNC_4("00:00:01/2,02..03", "*-*-* 00:00:01/2,02..03");
        FUNC_4("*-*~1 Utc", "*-*~01 00:00:00 UTC");
        FUNC_4("*-*~05,3 ", "*-*~03,05 00:00:00");
        FUNC_4("*-*~* 00:00:00", "*-*-* 00:00:00");
        FUNC_4("Monday", "Mon *-*-* 00:00:00");
        FUNC_4("Monday *-*-*", "Mon *-*-* 00:00:00");
        FUNC_4("*-*-*", "*-*-* 00:00:00");
        FUNC_4("*:*:*", "*-*-* *:*:*");
        FUNC_4("*:*", "*-*-* *:*:00");
        FUNC_4("12:*", "*-*-* 12:*:00");
        FUNC_4("*:30", "*-*-* *:30:00");
        FUNC_4("93..00-*-*", "1993..2000-*-* 00:00:00");
        FUNC_4("00..07-*-*", "2000..2007-*-* 00:00:00");
        FUNC_4("*:20..39/5", "*-*-* *:20..35/5:00");
        FUNC_4("00:00:20..40/1", "*-*-* 00:00:20..40");
        FUNC_4("*~03/1,03..05", "*-*~03/1,03..05 00:00:00");

        FUNC_4("@1493187147", "2017-04-26 06:12:27 UTC");
        FUNC_4("@1493187147 UTC", "2017-04-26 06:12:27 UTC");
        FUNC_4("@0", "1970-01-01 00:00:00 UTC");
        FUNC_4("@0 UTC", "1970-01-01 00:00:00 UTC");

        FUNC_3("2016-03-27 03:17:00", "", 12345, 1459048620000000);
        FUNC_3("2016-03-27 03:17:00", "CET", 12345, 1459041420000000);
        FUNC_3("2016-03-27 03:17:00", "EET", 12345, -1);
        FUNC_3("2016-03-27 03:17:00 UTC", ((void*)0), 12345, 1459048620000000);
        FUNC_3("2016-03-27 03:17:00 UTC", "", 12345, 1459048620000000);
        FUNC_3("2016-03-27 03:17:00 UTC", "CET", 12345, 1459048620000000);
        FUNC_3("2016-03-27 03:17:00 UTC", "EET", 12345, 1459048620000000);
        FUNC_3("2016-03-27 03:17:00.420000001 UTC", "EET", 12345, 1459048620420000);
        FUNC_3("2016-03-27 03:17:00.4200005 UTC", "EET", 12345, 1459048620420001);
        FUNC_3("2015-11-13 09:11:23.42", "EET", 12345, 1447398683420000);
        FUNC_3("2015-11-13 09:11:23.42/1.77", "EET", 1447398683420000, 1447398685190000);
        FUNC_3("2015-11-13 09:11:23.42/1.77", "EET", 1447398683419999, 1447398683420000);
        FUNC_3("Sun 16:00:00", "CET", 1456041600123456, 1456066800000000);
        FUNC_3("*-04-31", "", 12345, -1);
        FUNC_3("2016-02~01 UTC", "", 12345, 1456704000000000);
        FUNC_3("Mon 2017-05~01..07 UTC", "", 12345, 1496016000000000);
        FUNC_3("Mon 2017-05~07/1 UTC", "", 12345, 1496016000000000);
        FUNC_3("2017-08-06 9,11,13,15,17:00 UTC", "", 1502029800000000, 1502031600000000);
        FUNC_3("2017-08-06 9..17/2:00 UTC", "", 1502029800000000, 1502031600000000);
        FUNC_3("2016-12-* 3..21/6:00 UTC", "", 1482613200000001, 1482634800000000);
        FUNC_3("2017-09-24 03:30:00 Pacific/Auckland", "", 12345, 1506177000000000);

        FUNC_3("2017-09-24 02:30:00 Pacific/Auckland", "", 12345, -1);
        FUNC_3("2017-04-02 02:30:00 Pacific/Auckland", "", 12345, 1491053400000000);

        FUNC_3("2017-04-02 02:30:00 Pacific/Auckland", "", 1491053400000000, -1);
        FUNC_3("2017-04-02 03:30:00 Pacific/Auckland", "", 12345, 1491060600000000);

        FUNC_3("2017-09-09 20:42:00 Pacific/Auckland", "", 12345, 1504946520000000);
        FUNC_3("2017-09-09 20:42:00 Pacific/Auckland", "EET", 12345, 1504946520000000);

        FUNC_0(FUNC_1("test", &VAR_3) < 0);
        FUNC_0(FUNC_1(" utc", &VAR_3) < 0);
        FUNC_0(FUNC_1("    ", &VAR_3) < 0);
        FUNC_0(FUNC_1("", &VAR_3) < 0);
        FUNC_0(FUNC_1("7", &VAR_3) < 0);
        FUNC_0(FUNC_1("121212:1:2", &VAR_3) < 0);
        FUNC_0(FUNC_1("2000-03-05.23 00:00:00", &VAR_3) < 0);
        FUNC_0(FUNC_1("2000-03-05 00:00.1:00", &VAR_3) < 0);
        FUNC_0(FUNC_1("00:00:00/0.00000001", &VAR_3) < 0);
        FUNC_0(FUNC_1("00:00:00.0..00.9", &VAR_3) < 0);
        FUNC_0(FUNC_1("2016~11-22", &VAR_3) < 0);
        FUNC_0(FUNC_1("*-*~5/5", &VAR_3) < 0);
        FUNC_0(FUNC_1("Monday.. 12:00", &VAR_3) < 0);
        FUNC_0(FUNC_1("Monday..", &VAR_3) < 0);
        FUNC_0(FUNC_1("-00:+00/-5", &VAR_3) < 0);
        FUNC_0(FUNC_1("00:+00/-5", &VAR_3) < 0);
        FUNC_0(FUNC_1("2016- 11- 24 12: 30: 00", &VAR_3) < 0);
        FUNC_0(FUNC_1("*~29", &VAR_3) < 0);
        FUNC_0(FUNC_1("*~16..31", &VAR_3) < 0);
        FUNC_0(FUNC_1("12..1/2-*", &VAR_3) < 0);
        FUNC_0(FUNC_1("*:05..05", &VAR_3) < 0);
        FUNC_0(FUNC_1("*:05..10/6", &VAR_3) < 0);
        FUNC_0(FUNC_1("20/4:00", &VAR_3) < 0);
        FUNC_0(FUNC_1("00:00/60", &VAR_3) < 0);
        FUNC_0(FUNC_1("00:00:2300", &VAR_3) < 0);
        FUNC_0(FUNC_1("00:00:18446744073709551615", &VAR_3) < 0);
        FUNC_0(FUNC_1("@88588582097858858", &VAR_3) == -VAR_0);

        FUNC_5();
        FUNC_2();

        return 0;
}
