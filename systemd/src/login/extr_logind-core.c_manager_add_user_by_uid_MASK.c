
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uid_t ;
struct passwd {int pw_dir; int pw_name; int pw_gid; } ;
typedef int User ;
typedef int Manager ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ) ;
 struct passwd* FUNC_2 (int ) ;
 int FUNC_3 (int *,int ,int ,int ,int ,int **) ;

int FUNC_4(Manager *VAR_2, uid_t VAR_3, User **VAR_4) {
        struct passwd *VAR_5;

        FUNC_0(VAR_2);

        VAR_1 = 0;
        VAR_5 = FUNC_2(VAR_3);
        if (!VAR_5)
                return FUNC_1(VAR_0);

        return FUNC_3(VAR_2, VAR_3, VAR_5->pw_gid, VAR_5->pw_name, VAR_5->pw_dir, VAR_4);
}
