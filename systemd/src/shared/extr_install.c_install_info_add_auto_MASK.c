
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UnitFileInstallInfo ;
struct TYPE_3__ {int root_dir; } ;
typedef TYPE_1__ LookupPaths ;
typedef char const InstallContext ;


 int FUNC_0 (char const*) ;
 int FUNC_1 (char const*,char const*,char const*,int,int **) ;
 scalar_t__ FUNC_2 (char const*) ;
 char* FUNC_3 (int ,char const*) ;

__attribute__((used)) static int FUNC_4(
                InstallContext *VAR_0,
                const LookupPaths *VAR_1,
                const char *VAR_2,
                UnitFileInstallInfo **VAR_3) {

        FUNC_0(VAR_0);
        FUNC_0(VAR_2);

        if (FUNC_2(VAR_2)) {
                const char *VAR_4;

                VAR_4 = FUNC_3(VAR_1->root_dir, VAR_2);

                return FUNC_1(VAR_0, ((void*)0), VAR_4, 0, VAR_3);
        } else
                return FUNC_1(VAR_0, VAR_2, ((void*)0), 0, VAR_3);
}
