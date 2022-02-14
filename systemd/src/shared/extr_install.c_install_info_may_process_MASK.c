
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ type; int path; } ;
typedef TYPE_1__ UnitFileInstallInfo ;
typedef int UnitFileChange ;
typedef TYPE_1__ LookupPaths ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_1__ const*) ;
 scalar_t__ FUNC_1 (TYPE_1__ const*,int ) ;
 scalar_t__ FUNC_2 (TYPE_1__ const*,int ) ;
 int FUNC_3 (int **,size_t*,int,int ,int *) ;

__attribute__((used)) static int FUNC_4(
                const UnitFileInstallInfo *VAR_3,
                const LookupPaths *VAR_4,
                UnitFileChange **VAR_5,
                size_t *VAR_6) {
        FUNC_0(VAR_3);
        FUNC_0(VAR_4);




        if (VAR_3->type == VAR_2) {
                FUNC_3(VAR_5, VAR_6, -VAR_1, VAR_3->path, ((void*)0));
                return -VAR_1;
        }
        if (FUNC_1(VAR_4, VAR_3->path) ||
            FUNC_2(VAR_4, VAR_3->path)) {
                FUNC_3(VAR_5, VAR_6, -VAR_0, VAR_3->path, ((void*)0));
                return -VAR_0;
        }

        return 0;
}
