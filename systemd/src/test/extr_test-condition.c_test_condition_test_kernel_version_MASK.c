
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct utsname {char const* release; } ;
typedef int Condition ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ,char const*,int,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char const*,int ) ;
 int FUNC_5 (int ,char*) ;
 char* FUNC_6 (char*,char const*) ;
 int FUNC_7 (char const*,int) ;
 scalar_t__ FUNC_8 (struct utsname*) ;

__attribute__((used)) static void FUNC_9(void) {
        Condition *VAR_2;
        struct utsname VAR_3;
        const char *VAR_4;

        VAR_2 = FUNC_2(VAR_0, "*thisreallyshouldntbeinthekernelversion*", 0, 0);
        FUNC_0(*VAR_2);
        FUNC_0(FUNC_3(VAR_2) == 0);
        FUNC_1(VAR_2);

        VAR_2 = FUNC_2(VAR_0, "*", 0, 0);
        FUNC_0(*VAR_2);
        FUNC_0(FUNC_3(VAR_2) > 0);
        FUNC_1(VAR_2);



        VAR_2 = FUNC_2(VAR_0, "", 0, 0);
        FUNC_0(*VAR_2);
        FUNC_0(FUNC_3(VAR_2) > 0);
        FUNC_1(VAR_2);

        FUNC_0(FUNC_8(&VAR_3) >= 0);

        VAR_2 = FUNC_2(VAR_0, VAR_3.release, 0, 0);
        FUNC_0(*VAR_2);
        FUNC_0(FUNC_3(VAR_2) > 0);
        FUNC_1(VAR_2);

        FUNC_7(VAR_3.release, 4);
        FUNC_5(FUNC_4(VAR_3.release, 0), "*");

        VAR_2 = FUNC_2(VAR_0, VAR_3.release, 0, 0);
        FUNC_0(*VAR_2);
        FUNC_0(FUNC_3(VAR_2) > 0);
        FUNC_1(VAR_2);


        VAR_2 = FUNC_2(VAR_0, "> 0.1.2", 0, 0);
        FUNC_0(*VAR_2);
        FUNC_0(FUNC_3(VAR_2) > 0);
        FUNC_1(VAR_2);

        VAR_2 = FUNC_2(VAR_0, ">0.1.2", 0, 0);
        FUNC_0(*VAR_2);
        FUNC_0(FUNC_3(VAR_2) > 0);
        FUNC_1(VAR_2);

        VAR_2 = FUNC_2(VAR_0, "'>0.1.2' '<9.0.0'", 0, 0);
        FUNC_0(*VAR_2);
        FUNC_0(FUNC_3(VAR_2) > 0);
        FUNC_1(VAR_2);

        VAR_2 = FUNC_2(VAR_0, "> 0.1.2 < 9.0.0", 0, 0);
        FUNC_0(*VAR_2);
        FUNC_0(FUNC_3(VAR_2) == -VAR_1);
        FUNC_1(VAR_2);

        VAR_2 = FUNC_2(VAR_0, ">", 0, 0);
        FUNC_0(*VAR_2);
        FUNC_0(FUNC_3(VAR_2) == -VAR_1);
        FUNC_1(VAR_2);

        VAR_2 = FUNC_2(VAR_0, ">= 0.1.2", 0, 0);
        FUNC_0(*VAR_2);
        FUNC_0(FUNC_3(VAR_2) > 0);
        FUNC_1(VAR_2);

        VAR_2 = FUNC_2(VAR_0, "< 0.1.2", 0, 0);
        FUNC_0(*VAR_2);
        FUNC_0(FUNC_3(VAR_2) == 0);
        FUNC_1(VAR_2);

        VAR_2 = FUNC_2(VAR_0, "<= 0.1.2", 0, 0);
        FUNC_0(*VAR_2);
        FUNC_0(FUNC_3(VAR_2) == 0);
        FUNC_1(VAR_2);

        VAR_2 = FUNC_2(VAR_0, "= 0.1.2", 0, 0);
        FUNC_0(*VAR_2);
        FUNC_0(FUNC_3(VAR_2) == 0);
        FUNC_1(VAR_2);


        VAR_2 = FUNC_2(VAR_0, "< 4711.8.15", 0, 0);
        FUNC_0(*VAR_2);
        FUNC_0(FUNC_3(VAR_2) > 0);
        FUNC_1(VAR_2);

        VAR_2 = FUNC_2(VAR_0, "<= 4711.8.15", 0, 0);
        FUNC_0(*VAR_2);
        FUNC_0(FUNC_3(VAR_2) > 0);
        FUNC_1(VAR_2);

        VAR_2 = FUNC_2(VAR_0, "= 4711.8.15", 0, 0);
        FUNC_0(*VAR_2);
        FUNC_0(FUNC_3(VAR_2) == 0);
        FUNC_1(VAR_2);

        VAR_2 = FUNC_2(VAR_0, "> 4711.8.15", 0, 0);
        FUNC_0(*VAR_2);
        FUNC_0(FUNC_3(VAR_2) == 0);
        FUNC_1(VAR_2);

        VAR_2 = FUNC_2(VAR_0, ">= 4711.8.15", 0, 0);
        FUNC_0(*VAR_2);
        FUNC_0(FUNC_3(VAR_2) == 0);
        FUNC_1(VAR_2);

        FUNC_0(FUNC_8(&VAR_3) >= 0);

        VAR_4 = FUNC_6(">=", VAR_3.release);
        VAR_2 = FUNC_2(VAR_0, VAR_4, 0, 0);
        FUNC_0(*VAR_2);
        FUNC_0(FUNC_3(VAR_2) > 0);
        FUNC_1(VAR_2);

        VAR_4 = FUNC_6("=  ", VAR_3.release);
        VAR_2 = FUNC_2(VAR_0, VAR_4, 0, 0);
        FUNC_0(*VAR_2);
        FUNC_0(FUNC_3(VAR_2) > 0);
        FUNC_1(VAR_2);

        VAR_4 = FUNC_6("<=", VAR_3.release);
        VAR_2 = FUNC_2(VAR_0, VAR_4, 0, 0);
        FUNC_0(*VAR_2);
        FUNC_0(FUNC_3(VAR_2) > 0);
        FUNC_1(VAR_2);

        VAR_4 = FUNC_6("> ", VAR_3.release);
        VAR_2 = FUNC_2(VAR_0, VAR_4, 0, 0);
        FUNC_0(*VAR_2);
        FUNC_0(FUNC_3(VAR_2) == 0);
        FUNC_1(VAR_2);

        VAR_4 = FUNC_6("<   ", VAR_3.release);
        VAR_2 = FUNC_2(VAR_0, VAR_4, 0, 0);
        FUNC_0(*VAR_2);
        FUNC_0(FUNC_3(VAR_2) == 0);
        FUNC_1(VAR_2);
}
