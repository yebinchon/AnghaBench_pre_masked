
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ usec_t ;
typedef int tmp ;
typedef int buf_relative ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int,scalar_t__) ;
 int FUNC_2 (char*,int,scalar_t__) ;
 int FUNC_3 (char*,char*,int) ;
 int FUNC_4 (char*,char const*,...) ;
 scalar_t__ FUNC_5 (char const*,scalar_t__*) ;
 char const* FUNC_6 (char*) ;

__attribute__((used)) static void FUNC_7(const char *VAR_2) {
        usec_t VAR_3, VAR_4;
        char VAR_5[VAR_0], VAR_6[VAR_1];

        FUNC_4("Test: %s", VAR_2);
        FUNC_0(FUNC_5(VAR_2, &VAR_3) >= 0);
        FUNC_0(FUNC_2(VAR_5, sizeof(VAR_5), VAR_3));
        FUNC_4("\"%s\" → \"%s\"", VAR_2, VAR_5);

        FUNC_0(FUNC_5(VAR_5, &VAR_4) >= 0);
        if (VAR_4 != VAR_3) {
                char VAR_7[VAR_0];

                FUNC_3("round-trip failed: \"%s\" → \"%s\"",
                          VAR_5, FUNC_2(VAR_7, sizeof(VAR_7), VAR_4));
        }
        FUNC_0(VAR_4 == VAR_3);

        FUNC_0(FUNC_1(VAR_6, sizeof(VAR_6), VAR_3));
        FUNC_4("%s", FUNC_6(VAR_6));
}
