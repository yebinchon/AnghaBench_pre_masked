
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bus_match_component {int dummy; } ;
typedef enum bus_match_scope { ____Placeholder_bus_match_scope } bus_match_scope ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct bus_match_component*,unsigned int) ;
 scalar_t__ FUNC_2 (char const*,struct bus_match_component**,unsigned int*) ;
 int FUNC_3 (struct bus_match_component*,unsigned int) ;

__attribute__((used)) static void FUNC_4(const char *VAR_0, enum bus_match_scope VAR_1) {
        struct bus_match_component *VAR_2 = ((void*)0);
        unsigned VAR_3 = 0;

        FUNC_0(FUNC_2(VAR_0, &VAR_2, &VAR_3) >= 0);
        FUNC_0(FUNC_1(VAR_2, VAR_3) == VAR_1);
        FUNC_3(VAR_2, VAR_3);
}
