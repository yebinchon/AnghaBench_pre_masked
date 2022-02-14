
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int children; } ;
struct bus_match_node {scalar_t__ type; TYPE_1__ compare; scalar_t__ child; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct bus_match_node*) ;
 int FUNC_2 (struct bus_match_node*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static bool FUNC_4(struct bus_match_node *VAR_1) {
        FUNC_1(VAR_1);

        if (VAR_1->type == VAR_0)
                return 0;

        if (VAR_1->child)
                return 0;

        if (FUNC_0(VAR_1->type) && !FUNC_3(VAR_1->compare.children))
                return 1;

        FUNC_2(VAR_1);
        return 1;
}
