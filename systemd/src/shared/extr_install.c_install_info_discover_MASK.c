
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UnitFileScope ;
typedef int UnitFileInstallInfo ;
typedef int UnitFileChange ;
typedef int SearchFlags ;
typedef char LookupPaths ;
typedef char const InstallContext ;


 int FUNC_0 (char const*) ;
 int FUNC_1 (char const*,char const*,char const*,int **) ;
 int FUNC_2 (int ,char const*,char const*,int *,int ,int **) ;
 int FUNC_3 (int **,size_t*,int,char const*,int *) ;

__attribute__((used)) static int FUNC_4(
                UnitFileScope VAR_0,
                InstallContext *VAR_1,
                const LookupPaths *VAR_2,
                const char *VAR_3,
                SearchFlags VAR_4,
                UnitFileInstallInfo **VAR_5,
                UnitFileChange **VAR_6,
                size_t *VAR_7) {

        UnitFileInstallInfo *VAR_8;
        int VAR_9;

        FUNC_0(VAR_1);
        FUNC_0(VAR_2);
        FUNC_0(VAR_3);

        VAR_9 = FUNC_1(VAR_1, VAR_2, VAR_3, &VAR_8);
        if (VAR_9 >= 0)
                VAR_9 = FUNC_2(VAR_0, VAR_1, VAR_2, VAR_8, VAR_4, VAR_5);

        if (VAR_9 < 0)
                FUNC_3(VAR_6, VAR_7, VAR_9, VAR_3, ((void*)0));
        return VAR_9;
}
