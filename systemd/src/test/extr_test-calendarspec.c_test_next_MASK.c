
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ usec_t ;
typedef int CalendarSpec ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (char const*,int **) ;
 int FUNC_4 (int *,scalar_t__,scalar_t__*) ;
 char* FUNC_5 (char*,int,scalar_t__) ;
 char* FUNC_6 (char*) ;
 int FUNC_7 (char*,char const*) ;
 scalar_t__ FUNC_8 (char*,char*,int) ;
 char* FUNC_9 (char*) ;
 char* FUNC_10 (int) ;
 char* FUNC_11 (char*,char const*) ;
 int FUNC_12 () ;
 scalar_t__ FUNC_13 (char*) ;

__attribute__((used)) static void FUNC_14(const char *VAR_2, const char *VAR_3, usec_t VAR_4, usec_t VAR_5) {
        CalendarSpec *VAR_6;
        usec_t VAR_7;
        char *VAR_8;
        char VAR_9[VAR_1];
        int VAR_10;

        VAR_8 = FUNC_6("TZ");
        if (VAR_8)
                VAR_8 = FUNC_9(VAR_8);

        if (VAR_3) {
                char *VAR_11;

                VAR_11 = FUNC_11(":", VAR_3);
                FUNC_1(FUNC_8("TZ", VAR_11, 1) >= 0);
        } else
                FUNC_1(FUNC_13("TZ") >= 0);
        FUNC_12();

        FUNC_1(FUNC_3(VAR_2, &VAR_6) >= 0);

        FUNC_7("\"%s\"\n", VAR_2);

        VAR_7 = VAR_4;
        VAR_10 = FUNC_4(VAR_6, VAR_4, &VAR_7);
        FUNC_7("At: %s\n", VAR_10 < 0 ? FUNC_10(VAR_10) : FUNC_5(VAR_9, sizeof VAR_9, VAR_7));
        if (VAR_5 != (usec_t)-1)
                FUNC_1(VAR_10 >= 0 && VAR_7 == VAR_5);
        else
                FUNC_0(VAR_10 == -VAR_0);

        FUNC_2(VAR_6);

        if (VAR_8)
                FUNC_1(FUNC_8("TZ", VAR_8, 1) >= 0);
        else
                FUNC_1(FUNC_13("TZ") >= 0);
        FUNC_12();
}
