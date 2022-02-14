
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int path; int unit; } ;
typedef TYPE_1__ InvalidEnvInfo ;


 int FUNC_0 (int ,char*,char const*,int ) ;

__attribute__((used)) static void FUNC_1(const char *VAR_0, void *VAR_1) {
        InvalidEnvInfo *VAR_2 = VAR_1;

        FUNC_0(VAR_2->unit, "Ignoring invalid environment assignment '%s': %s", VAR_0, VAR_2->path);
}
