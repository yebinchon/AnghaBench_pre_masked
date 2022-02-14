
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int type; int id_set_strict; int gid; int gid_set; int todo_group; int name; } ;
typedef TYPE_1__ Item ;




 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (char*) ;
 int VAR_0 ;
 TYPE_1__* FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(Item *VAR_1) {
        int VAR_2;

        FUNC_2(VAR_1);

        switch (VAR_1->type) {

        case 128: {
                Item *VAR_3;

                VAR_3 = FUNC_4(VAR_0, VAR_1->name);
                if (VAR_3 && VAR_3->todo_group) {



                        VAR_1->gid_set = VAR_3->gid_set;
                        VAR_1->gid = VAR_3->gid;
                        VAR_1->id_set_strict = 1;
                } else {
                        VAR_2 = FUNC_0(VAR_1);
                        if (VAR_2 < 0)
                                return VAR_2;
                }

                return FUNC_1(VAR_1);
        }

        case 129:
                return FUNC_0(VAR_1);

        default:
                FUNC_3("Unknown item type");
        }
}
