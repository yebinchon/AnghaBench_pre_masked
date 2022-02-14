
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int type; int path; } ;
typedef TYPE_1__ Item ;


 int VAR_0 ;


 int VAR_1 ;

 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (char*,char,...) ;
 int FUNC_3 (int,char*,int ) ;
 int VAR_2 ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(Item *VAR_3) {
        int VAR_4;

        FUNC_0(VAR_3);

        FUNC_2("Running remove action for entry %c %s", (char) VAR_3->type, VAR_3->path);

        switch (VAR_3->type) {

        case 128:

                FUNC_2("rm -rf \"%s\"", VAR_3->path);
                VAR_4 = FUNC_4(VAR_3->path, VAR_1);
                if (VAR_4 < 0 && VAR_4 != -VAR_0)
                        return FUNC_3(VAR_4, "rm_rf(%s): %m", VAR_3->path);

                return 0;

        case 129:
        case 130:
                return FUNC_1(VAR_3, VAR_2);

        default:
                return 0;
        }
}
