
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum bus_match_node_type { ____Placeholder_bus_match_node_type } bus_match_node_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char const*,char*) ;
 int FUNC_2 (char const) ;

enum bus_match_node_type FUNC_3(const char *VAR_16, size_t VAR_17) {
        FUNC_0(VAR_16);

        if (VAR_17 == 4 && FUNC_1(VAR_16, "type"))
                return VAR_11;
        if (VAR_17 == 6 && FUNC_1(VAR_16, "sender"))
                return VAR_14;
        if (VAR_17 == 11 && FUNC_1(VAR_16, "destination"))
                return VAR_8;
        if (VAR_17 == 9 && FUNC_1(VAR_16, "interface"))
                return VAR_9;
        if (VAR_17 == 6 && FUNC_1(VAR_16, "member"))
                return VAR_10;
        if (VAR_17 == 4 && FUNC_1(VAR_16, "path"))
                return VAR_12;
        if (VAR_17 == 14 && FUNC_1(VAR_16, "path_namespace"))
                return VAR_13;

        if (VAR_17 == 4 && FUNC_1(VAR_16, "arg")) {
                int VAR_18;

                VAR_18 = FUNC_2(VAR_16[3]);
                if (VAR_18 < 0)
                        return -VAR_15;

                return VAR_0 + VAR_18;
        }

        if (VAR_17 == 5 && FUNC_1(VAR_16, "arg")) {
                int VAR_19, VAR_20;
                enum bus_match_node_type VAR_21;

                VAR_19 = FUNC_2(VAR_16[3]);
                VAR_20 = FUNC_2(VAR_16[4]);
                if (VAR_19 <= 0 || VAR_20 < 0)
                        return -VAR_15;

                VAR_21 = VAR_0 + VAR_19 * 10 + VAR_20;
                if (VAR_21 > VAR_3)
                        return -VAR_15;

                return VAR_21;
        }

        if (VAR_17 == 8 && FUNC_1(VAR_16, "arg") && FUNC_1(VAR_16 + 4, "path")) {
                int VAR_22;

                VAR_22 = FUNC_2(VAR_16[3]);
                if (VAR_22 < 0)
                        return -VAR_15;

                return VAR_6 + VAR_22;
        }

        if (VAR_17 == 9 && FUNC_1(VAR_16, "arg") && FUNC_1(VAR_16 + 5, "path")) {
                enum bus_match_node_type VAR_23;
                int VAR_24, VAR_25;

                VAR_24 = FUNC_2(VAR_16[3]);
                VAR_25 = FUNC_2(VAR_16[4]);
                if (VAR_24 <= 0 || VAR_25 < 0)
                        return -VAR_15;

                VAR_23 = VAR_6 + VAR_24 * 10 + VAR_25;
                if (VAR_23 > VAR_7)
                        return -VAR_15;

                return VAR_23;
        }

        if (VAR_17 == 13 && FUNC_1(VAR_16, "arg") && FUNC_1(VAR_16 + 4, "namespace")) {
                int VAR_26;

                VAR_26 = FUNC_2(VAR_16[3]);
                if (VAR_26 < 0)
                        return -VAR_15;

                return VAR_4 + VAR_26;
        }

        if (VAR_17 == 14 && FUNC_1(VAR_16, "arg") && FUNC_1(VAR_16 + 5, "namespace")) {
                enum bus_match_node_type VAR_27;
                int VAR_28, VAR_29;

                VAR_28 = FUNC_2(VAR_16[3]);
                VAR_29 = FUNC_2(VAR_16[4]);
                if (VAR_28 <= 0 || VAR_29 < 0)
                        return -VAR_15;

                VAR_27 = VAR_4 + VAR_28 * 10 + VAR_29;
                if (VAR_27 > VAR_5)
                        return -VAR_15;

                return VAR_27;
        }

        if (VAR_17 == 7 && FUNC_1(VAR_16, "arg") && FUNC_1(VAR_16 + 4, "has")) {
                int VAR_30;

                VAR_30 = FUNC_2(VAR_16[3]);
                if (VAR_30 < 0)
                        return -VAR_15;

                return VAR_1 + VAR_30;
        }

        if (VAR_17 == 8 && FUNC_1(VAR_16, "arg") && FUNC_1(VAR_16 + 5, "has")) {
                enum bus_match_node_type VAR_31;
                int VAR_32, VAR_33;

                VAR_32 = FUNC_2(VAR_16[3]);
                VAR_33 = FUNC_2(VAR_16[4]);
                if (VAR_32 <= 0 || VAR_33 < 0)
                        return -VAR_15;

                VAR_31 = VAR_1 + VAR_32 * 10 + VAR_33;
                if (VAR_31 > VAR_2)
                        return -VAR_15;

                return VAR_31;
        }

        return -VAR_15;
}
