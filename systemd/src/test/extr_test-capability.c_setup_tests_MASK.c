
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct passwd {int pw_gid; int pw_uid; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_5 ;
 struct passwd* FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,int ,int ,int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_4(bool *VAR_8) {
        struct passwd *VAR_9;
        int VAR_10;

        VAR_9 = FUNC_1(VAR_2);
        if (!VAR_9)
                return FUNC_2(FUNC_0(VAR_1), "Could not find nobody user: %m");

        VAR_7 = VAR_9->pw_uid;
        VAR_6 = VAR_9->pw_gid;

        *VAR_8 = 0;

        VAR_10 = FUNC_3(VAR_3, VAR_4, 0, 0, 0);






        if (VAR_10 >= 0 || VAR_5 != VAR_0)
                *VAR_8 = 1;

        return 0;
}
