
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uid_t ;
struct passwd {int dummy; } ;
struct group {int dummy; } ;
typedef scalar_t__ gid_t ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,int ,int ) ;
 int FUNC_2 (scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct group* FUNC_3 (scalar_t__) ;
 struct passwd* FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_7(gid_t VAR_7) {
        struct group *VAR_8;
        struct passwd *VAR_9;

        if (FUNC_6(VAR_5, FUNC_0(VAR_7)))
                return 0;


        if (FUNC_6(VAR_6, FUNC_2(VAR_7)))
                return 0;

        if (FUNC_5(VAR_2, FUNC_0(VAR_7)))
                return 0;

        if (FUNC_5(VAR_3, FUNC_2(VAR_7)))
                return 0;

        if (!VAR_1) {
                VAR_4 = 0;
                VAR_8 = FUNC_3(VAR_7);
                if (VAR_8)
                        return 0;
                if (!FUNC_1(VAR_4, 0, VAR_0))
                        return -VAR_4;

                VAR_4 = 0;
                VAR_9 = FUNC_4((uid_t) VAR_7);
                if (VAR_9)
                        return 0;
                if (!FUNC_1(VAR_4, 0, VAR_0))
                        return -VAR_4;
        }

        return 1;
}
