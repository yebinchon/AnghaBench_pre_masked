
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ type; int path; int symlink_target; int name; } ;
typedef TYPE_1__ UnitFileInstallInfo ;
typedef int SearchFlags ;
typedef TYPE_1__ InstallContext ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_1__*,TYPE_1__*,int ,char const*,int ) ;

__attribute__((used)) static int FUNC_5(
                InstallContext *VAR_4,
                UnitFileInstallInfo *VAR_5,
                const char *VAR_6,
                SearchFlags VAR_7,
                bool VAR_8) {

        FUNC_0(VAR_4);
        FUNC_0(VAR_5);

        if (VAR_5->type != VAR_2)
                return -VAR_0;
        if (!VAR_5->symlink_target)
                return -VAR_0;




        if (!VAR_8 && !FUNC_3(FUNC_1(VAR_5->symlink_target), VAR_5->name))
                return -VAR_1;

        FUNC_2(VAR_5->path, VAR_5->symlink_target);
        VAR_5->type = VAR_3;

        return FUNC_4(VAR_4, VAR_5, VAR_5->path, VAR_6, VAR_7);
}
