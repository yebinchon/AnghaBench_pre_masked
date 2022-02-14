
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ type; scalar_t__ uid_set; scalar_t__ uid; scalar_t__ gid_set; scalar_t__ gid; int shell; int home; int description; int gid_path; int uid_path; int name; } ;
typedef TYPE_1__ Item ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static bool FUNC_2(Item *VAR_0, Item *VAR_1) {
        FUNC_0(VAR_0);
        FUNC_0(VAR_1);

        if (VAR_0->type != VAR_1->type)
                return 0;

        if (!FUNC_1(VAR_0->name, VAR_1->name))
                return 0;

        if (!FUNC_1(VAR_0->uid_path, VAR_1->uid_path))
                return 0;

        if (!FUNC_1(VAR_0->gid_path, VAR_1->gid_path))
                return 0;

        if (!FUNC_1(VAR_0->description, VAR_1->description))
                return 0;

        if (VAR_0->uid_set != VAR_1->uid_set)
                return 0;

        if (VAR_0->uid_set && VAR_0->uid != VAR_1->uid)
                return 0;

        if (VAR_0->gid_set != VAR_1->gid_set)
                return 0;

        if (VAR_0->gid_set && VAR_0->gid != VAR_1->gid)
                return 0;

        if (!FUNC_1(VAR_0->home, VAR_1->home))
                return 0;

        if (!FUNC_1(VAR_0->shell, VAR_1->shell))
                return 0;

        return 1;
}
