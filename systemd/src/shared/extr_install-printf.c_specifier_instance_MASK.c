
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int default_instance; int name; } ;
typedef TYPE_1__ UnitFileInstallInfo ;


 int FUNC_0 (TYPE_1__ const*) ;
 int FUNC_1 (char**,int ) ;
 scalar_t__ FUNC_2 (char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char**) ;

__attribute__((used)) static int FUNC_5(char VAR_0, const void *VAR_1, const void *VAR_2, char **VAR_3) {
        const UnitFileInstallInfo *VAR_4 = VAR_2;
        char *VAR_5;
        int VAR_6;

        FUNC_0(VAR_4);

        VAR_6 = FUNC_4(VAR_4->name, &VAR_5);
        if (VAR_6 < 0)
                return VAR_6;

        if (FUNC_2(VAR_5)) {
                VAR_6 = FUNC_1(&VAR_5, FUNC_3(VAR_4->default_instance));
                if (VAR_6 < 0)
                        return VAR_6;
        }

        *VAR_3 = VAR_5;
        return 0;
}
