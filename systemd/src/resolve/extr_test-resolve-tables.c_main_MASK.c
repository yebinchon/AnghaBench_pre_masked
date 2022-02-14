
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 char* FUNC_3 (scalar_t__) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 scalar_t__ FUNC_11 (scalar_t__) ;
 scalar_t__ FUNC_12 (scalar_t__) ;
 char* FUNC_13 (scalar_t__) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_14 (char*,...) ;
 scalar_t__ FUNC_15 (char const*) ;
 int FUNC_16 (int ,int ) ;
 int FUNC_17 (int ,int ) ;

int FUNC_18(int VAR_15, char **VAR_16) {
        uint16_t VAR_17;

        FUNC_16(VAR_10, VAR_2);
        FUNC_16(VAR_13, VAR_0);
        FUNC_16(VAR_14, VAR_1);

        FUNC_17(VAR_11, VAR_3);
        FUNC_17(VAR_12, VAR_4);

        FUNC_14("/* DNS_TYPE */");
        for (VAR_17 = 0; VAR_17 < VAR_8; VAR_17++) {
                const char *VAR_18;

                VAR_18 = FUNC_13(VAR_17);
                FUNC_0(VAR_18 == ((void*)0) || FUNC_15(VAR_18) < VAR_9);

                if (VAR_18)
                        FUNC_14("%-*s %s%s%s%s%s%s%s%s%s",
                                 (int) VAR_9 - 1, VAR_18,
                                 FUNC_7(VAR_17) ? "pseudo " : "",
                                 FUNC_8(VAR_17) ? "valid_query " : "",
                                 FUNC_9(VAR_17) ? "is_valid_rr " : "",
                                 FUNC_10(VAR_17) ? "may_redirect " : "",
                                 FUNC_5(VAR_17) ? "dnssec " : "",
                                 FUNC_6(VAR_17) ? "obsolete " : "",
                                 FUNC_11(VAR_17) ? "wildcard " : "",
                                 FUNC_4(VAR_17) ? "apex_only " : "",
                                 FUNC_12(VAR_17) ? "needs_authentication" : "");
        }

        FUNC_14("/* DNS_CLASS */");
        for (VAR_17 = 0; VAR_17 < VAR_6; VAR_17++) {
                const char *VAR_19;

                VAR_19 = FUNC_3(VAR_17);
                FUNC_0(VAR_19 == ((void*)0) || FUNC_15(VAR_19) < VAR_7);

                if (VAR_19)
                        FUNC_14("%-*s %s%s",
                                 (int) VAR_7 - 1, VAR_19,
                                 FUNC_1(VAR_17) ? "is_pseudo " : "",
                                 FUNC_2(VAR_17) ? "is_valid_rr " : "");
        }

        return VAR_5;
}
