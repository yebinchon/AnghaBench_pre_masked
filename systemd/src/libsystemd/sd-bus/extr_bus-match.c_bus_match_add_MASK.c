
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct match_callback {int dummy; } ;
typedef struct match_callback bus_match_node ;
struct bus_match_component {int value_str; int value_u8; int type; } ;


 int FUNC_0 (struct match_callback*) ;
 int FUNC_1 (struct match_callback*,int ,int ,int ,struct match_callback**) ;
 int FUNC_2 (struct match_callback*,struct match_callback*) ;

int FUNC_3(
                struct bus_match_node *VAR_0,
                struct bus_match_component *VAR_1,
                unsigned VAR_2,
                struct match_callback *VAR_3) {

        unsigned VAR_4;
        struct bus_match_node *VAR_5;
        int VAR_6;

        FUNC_0(VAR_0);
        FUNC_0(VAR_3);

        VAR_5 = VAR_0;
        for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
                VAR_6 = FUNC_1(
                                VAR_5, VAR_1[VAR_4].type,
                                VAR_1[VAR_4].value_u8, VAR_1[VAR_4].value_str, &VAR_5);
                if (VAR_6 < 0)
                        return VAR_6;
        }

        return FUNC_2(VAR_5, VAR_3);
}
