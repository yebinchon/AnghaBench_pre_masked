
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int shell; int home; int description; int gid_path; int uid_path; int name; } ;
typedef TYPE_1__ Item ;


 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static Item* FUNC_2(Item *VAR_0) {
        if (!VAR_0)
                return ((void*)0);

        FUNC_0(VAR_0->name);
        FUNC_0(VAR_0->uid_path);
        FUNC_0(VAR_0->gid_path);
        FUNC_0(VAR_0->description);
        FUNC_0(VAR_0->home);
        FUNC_0(VAR_0->shell);
        return FUNC_1(VAR_0);
}
