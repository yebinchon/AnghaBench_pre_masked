
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uid_t ;
typedef int gid_t ;
typedef int Unit ;
struct TYPE_3__ {int remove_ipc; } ;
typedef TYPE_1__ ExecContext ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int,char*) ;
 TYPE_1__* FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int ,int) ;

int FUNC_4(Unit *VAR_0, uid_t VAR_1, gid_t VAR_2) {
        ExecContext *VAR_3;
        int VAR_4;

        FUNC_0(VAR_0);

        VAR_3 = FUNC_2(VAR_0);

        VAR_4 = FUNC_3(VAR_0, VAR_1, VAR_2, VAR_3 ? VAR_3->remove_ipc : 0);
        if (VAR_4 < 0)
                return FUNC_1(VAR_0, VAR_4, "Couldn't add UID/GID reference to unit, proceeding without: %m");

        return VAR_4;
}
