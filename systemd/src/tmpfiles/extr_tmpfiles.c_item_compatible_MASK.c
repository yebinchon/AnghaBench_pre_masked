
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ uid_set; scalar_t__ uid; scalar_t__ gid_set; scalar_t__ gid; scalar_t__ mode_set; scalar_t__ mode; scalar_t__ age_set; scalar_t__ age; scalar_t__ mask_perms; scalar_t__ keep_first_level; scalar_t__ major_minor; int argument; int type; int path; } ;
typedef TYPE_1__ Item ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static bool FUNC_4(Item *VAR_0, Item *VAR_1) {
        FUNC_0(VAR_0);
        FUNC_0(VAR_1);
        FUNC_0(FUNC_1(VAR_0->path, VAR_1->path));

        if (FUNC_3(VAR_0->type) && FUNC_3(VAR_1->type))

                return FUNC_2(VAR_0->argument, VAR_1->argument) &&

                        VAR_0->uid_set == VAR_1->uid_set &&
                        VAR_0->uid == VAR_1->uid &&

                        VAR_0->gid_set == VAR_1->gid_set &&
                        VAR_0->gid == VAR_1->gid &&

                        VAR_0->mode_set == VAR_1->mode_set &&
                        VAR_0->mode == VAR_1->mode &&

                        VAR_0->age_set == VAR_1->age_set &&
                        VAR_0->age == VAR_1->age &&

                        VAR_0->mask_perms == VAR_1->mask_perms &&

                        VAR_0->keep_first_level == VAR_1->keep_first_level &&

                        VAR_0->major_minor == VAR_1->major_minor;

        return 1;
}
