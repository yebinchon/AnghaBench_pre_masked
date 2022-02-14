
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int name; scalar_t__ default_instance; } ;
typedef TYPE_1__ UnitFileInstallInfo ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__ const*) ;
 char* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,scalar_t__,char**) ;

__attribute__((used)) static int FUNC_4(char VAR_2, const void *VAR_3, const void *VAR_4, char **VAR_5) {
        const UnitFileInstallInfo *VAR_6 = VAR_4;
        char *VAR_7;

        FUNC_0(VAR_6);

        if (FUNC_2(VAR_6->name, VAR_1) && VAR_6->default_instance)
                return FUNC_3(VAR_6->name, VAR_6->default_instance, VAR_5);

        VAR_7 = FUNC_1(VAR_6->name);
        if (!VAR_7)
                return -VAR_0;
        *VAR_5 = VAR_7;
        return 0;
}
