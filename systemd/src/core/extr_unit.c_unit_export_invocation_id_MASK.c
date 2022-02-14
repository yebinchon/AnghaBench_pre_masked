
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int exported_invocation_id; int invocation_id_string; int id; int invocation_id; } ;
typedef TYPE_1__ Unit ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int,char*,char const*) ;
 scalar_t__ FUNC_2 (int ) ;
 char* FUNC_3 (char*,int ) ;
 int FUNC_4 (int ,char const*) ;

__attribute__((used)) static int FUNC_5(Unit *VAR_0) {
        const char *VAR_1;
        int VAR_2;

        FUNC_0(VAR_0);

        if (VAR_0->exported_invocation_id)
                return 0;

        if (FUNC_2(VAR_0->invocation_id))
                return 0;

        VAR_1 = FUNC_3("/run/systemd/units/invocation:", VAR_0->id);
        VAR_2 = FUNC_4(VAR_0->invocation_id_string, VAR_1);
        if (VAR_2 < 0)
                return FUNC_1(VAR_0, VAR_2, "Failed to create invocation ID symlink %s: %m", VAR_1);

        VAR_0->exported_invocation_id = 1;
        return 0;
}
