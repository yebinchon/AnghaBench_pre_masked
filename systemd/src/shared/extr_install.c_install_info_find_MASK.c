
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UnitFileInstallInfo ;
struct TYPE_3__ {int will_process; int have_processed; } ;
typedef TYPE_1__ InstallContext ;


 int * FUNC_0 (int ,char const*) ;

__attribute__((used)) static UnitFileInstallInfo *FUNC_1(InstallContext *VAR_0, const char *VAR_1) {
        UnitFileInstallInfo *VAR_2;

        VAR_2 = FUNC_0(VAR_0->have_processed, VAR_1);
        if (VAR_2)
                return VAR_2;

        return FUNC_0(VAR_0->will_process, VAR_1);
}
