
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bus_match_component {struct bus_match_component* value_str; } ;


 int FUNC_0 (struct bus_match_component*) ;

void FUNC_1(struct bus_match_component *VAR_0, unsigned VAR_1) {
        unsigned VAR_2;

        for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++)
                FUNC_0(VAR_0[VAR_2].value_str);

        FUNC_0(VAR_0);
}
