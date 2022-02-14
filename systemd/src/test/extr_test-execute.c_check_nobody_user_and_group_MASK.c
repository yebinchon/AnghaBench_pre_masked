
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct passwd {scalar_t__ pw_uid; scalar_t__ pw_gid; int pw_name; } ;
struct group {scalar_t__ gr_gid; int gr_name; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct group* FUNC_0 (scalar_t__) ;
 struct group* FUNC_1 (int ) ;
 struct passwd* FUNC_2 (int ) ;
 struct passwd* FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 () ;

__attribute__((used)) static bool FUNC_6(void) {
        static int VAR_4 = -1;
        struct passwd *VAR_5;
        struct group *VAR_6;

        if (VAR_4 >= 0)
                return !!VAR_4;

        if (!FUNC_5())
                goto invalid;

        VAR_5 = FUNC_2(VAR_2);
        if (!VAR_5 ||
            !FUNC_4(VAR_5->pw_name, VAR_2) ||
            VAR_5->pw_uid != VAR_3 ||
            VAR_5->pw_gid != VAR_0)
                goto invalid;

        VAR_5 = FUNC_3(VAR_3);
        if (!VAR_5 ||
            !FUNC_4(VAR_5->pw_name, VAR_2) ||
            VAR_5->pw_uid != VAR_3 ||
            VAR_5->pw_gid != VAR_0)
                goto invalid;

        VAR_6 = FUNC_1(VAR_1);
        if (!VAR_6 ||
            !FUNC_4(VAR_6->gr_name, VAR_1) ||
            VAR_6->gr_gid != VAR_0)
                goto invalid;

        VAR_6 = FUNC_0(VAR_0);
        if (!VAR_6 ||
            !FUNC_4(VAR_6->gr_name, VAR_1) ||
            VAR_6->gr_gid != VAR_0)
                goto invalid;

        VAR_4 = 1;
        return 1;

invalid:
        VAR_4 = 0;
        return 0;
}
