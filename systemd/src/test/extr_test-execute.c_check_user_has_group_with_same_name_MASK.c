
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct passwd {int pw_gid; int pw_name; } ;
struct group {int gr_name; } ;


 int FUNC_0 (char const*) ;
 struct group* FUNC_1 (int ) ;
 struct passwd* FUNC_2 (char const*) ;
 int FUNC_3 (int ,char const*) ;

__attribute__((used)) static bool FUNC_4(const char *VAR_0) {
        struct passwd *VAR_1;
        struct group *VAR_2;

        FUNC_0(VAR_0);

        VAR_1 = FUNC_2(VAR_0);
        if (!VAR_1 ||
            !FUNC_3(VAR_1->pw_name, VAR_0))
                return 0;

        VAR_2 = FUNC_1(VAR_1->pw_gid);
        if (!VAR_2 ||
            !FUNC_3(VAR_2->gr_name, VAR_0))
                return 0;

        return 1;
}
