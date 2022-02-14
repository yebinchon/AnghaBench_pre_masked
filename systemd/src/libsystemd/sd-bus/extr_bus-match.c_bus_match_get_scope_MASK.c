
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bus_match_component {scalar_t__ type; int value_str; } ;
typedef enum bus_match_scope { ____Placeholder_bus_match_scope } bus_match_scope ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct bus_match_component const*) ;
 scalar_t__ FUNC_1 (int ,char*) ;

enum bus_match_scope FUNC_2(const struct bus_match_component *VAR_6, unsigned VAR_7) {
        bool VAR_8 = 0;
        unsigned VAR_9;

        if (VAR_7 <= 0)
                return VAR_1;

        FUNC_0(VAR_6);







        for (VAR_9 = 0; VAR_9 < VAR_7; VAR_9++) {
                const struct bus_match_component *VAR_10 = VAR_6 + VAR_9;

                if (VAR_10->type == VAR_5) {
                        if (FUNC_1(VAR_10->value_str, "org.freedesktop.DBus.Local"))
                                return VAR_3;

                        if (FUNC_1(VAR_10->value_str, "org.freedesktop.DBus"))
                                VAR_8 = 1;
                }

                if (VAR_10->type == VAR_2 && FUNC_1(VAR_10->value_str, "org.freedesktop.DBus.Local"))
                        return VAR_3;

                if (VAR_10->type == VAR_4 && FUNC_1(VAR_10->value_str, "/org/freedesktop/DBus/Local"))
                        return VAR_3;
        }

        return VAR_8 ? VAR_0 : VAR_1;

}
