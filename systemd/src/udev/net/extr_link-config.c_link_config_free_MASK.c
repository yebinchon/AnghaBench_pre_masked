
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* alias; struct TYPE_4__* name; struct TYPE_4__* name_policy; struct TYPE_4__* mac; struct TYPE_4__* description; int conditions; int match_property; int match_name; int match_type; int match_driver; int match_path; int match_mac; struct TYPE_4__* filename; } ;
typedef TYPE_1__ link_config ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(link_config *VAR_0) {
        if (!VAR_0)
                return;

        FUNC_1(VAR_0->filename);

        FUNC_2(VAR_0->match_mac);
        FUNC_3(VAR_0->match_path);
        FUNC_3(VAR_0->match_driver);
        FUNC_3(VAR_0->match_type);
        FUNC_3(VAR_0->match_name);
        FUNC_3(VAR_0->match_property);
        FUNC_0(VAR_0->conditions);

        FUNC_1(VAR_0->description);
        FUNC_1(VAR_0->mac);
        FUNC_1(VAR_0->name_policy);
        FUNC_1(VAR_0->name);
        FUNC_1(VAR_0->alias);

        FUNC_1(VAR_0);
}
