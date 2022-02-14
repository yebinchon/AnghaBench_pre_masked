
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UnitFileScope ;
typedef int UnitFileInstallInfo ;
typedef int UnitFileChange ;
typedef int SearchFlags ;
typedef int LookupPaths ;
typedef int InstallContext ;


 int FUNC_0 (int ,int *,int const*,char const*,int ,int **,int **,size_t*) ;
 int FUNC_1 (int *,int const*,int **,size_t*) ;

__attribute__((used)) static int FUNC_2(
                        UnitFileScope VAR_0,
                        InstallContext *VAR_1,
                        const LookupPaths *VAR_2,
                        const char *VAR_3,
                        SearchFlags VAR_4,
                        UnitFileInstallInfo **VAR_5,
                        UnitFileChange **VAR_6,
                        size_t *VAR_7) {

        int VAR_8;

        VAR_8 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
        if (VAR_8 < 0)
                return VAR_8;

        return FUNC_1(VAR_5 ? *VAR_5 : ((void*)0), VAR_2, VAR_6, VAR_7);
}
