
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uid_t ;
typedef int gid_t ;
typedef int Unit ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (int *,int) ;

__attribute__((used)) static int FUNC_6(Unit *VAR_0, uid_t VAR_1, gid_t VAR_2, bool VAR_3) {
        int VAR_4 = 0, VAR_5 = 0;

        FUNC_0(VAR_0);



        if (FUNC_2(VAR_1)) {
                VAR_4 = FUNC_4(VAR_0, VAR_1, VAR_3);
                if (VAR_4 < 0)
                        return VAR_4;
        }

        if (FUNC_1(VAR_2)) {
                VAR_5 = FUNC_3(VAR_0, VAR_2, VAR_3);
                if (VAR_5 < 0) {
                        if (VAR_4 > 0)
                                FUNC_5(VAR_0, 0);

                        return VAR_5;
                }
        }

        return VAR_4 > 0 || VAR_5 > 0;
}
