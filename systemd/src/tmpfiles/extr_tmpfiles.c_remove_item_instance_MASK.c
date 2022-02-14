
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int type; } ;
typedef TYPE_1__ Item ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*) ;
 int VAR_4 ;
 int FUNC_2 (char*,char const*) ;
 int FUNC_3 (int,char*,char const*) ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (char const*,int) ;

__attribute__((used)) static int FUNC_6(Item *VAR_5, const char *VAR_6) {
        int VAR_7;

        FUNC_0(VAR_5);

        switch (VAR_5->type) {

        case 128:
                if (FUNC_4(VAR_6) < 0 && VAR_4 != VAR_0)
                        return FUNC_3(VAR_4, "rm(%s): %m", VAR_6);

                break;

        case 129:

                FUNC_2("rm -rf \"%s\"", VAR_6);
                VAR_7 = FUNC_5(VAR_6, VAR_2|VAR_3|VAR_1);
                if (VAR_7 < 0 && VAR_7 != -VAR_0)
                        return FUNC_3(VAR_7, "rm_rf(%s): %m", VAR_6);

                break;

        default:
                FUNC_1("wut?");
        }

        return 0;
}
