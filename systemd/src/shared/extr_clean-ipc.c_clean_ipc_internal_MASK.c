
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uid_t ;
typedef scalar_t__ gid_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__,scalar_t__,int) ;
 int FUNC_1 (scalar_t__,scalar_t__,int) ;
 int FUNC_2 (scalar_t__,scalar_t__,int) ;
 int FUNC_3 (scalar_t__,scalar_t__,int) ;
 int FUNC_4 (scalar_t__,scalar_t__,int) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;

int FUNC_7(uid_t VAR_2, gid_t VAR_3, bool VAR_4) {
        int VAR_5 = 0, VAR_6;
        if (VAR_2 == 0) {
                if (!VAR_4)
                        return 1;

                VAR_2 = VAR_1;
        }
        if (VAR_3 == 0) {
                if (!VAR_4)
                        return 1;

                VAR_3 = VAR_0;
        }


        if (!FUNC_6(VAR_2) && !FUNC_5(VAR_3))
                return 0;

        VAR_6 = FUNC_4(VAR_2, VAR_3, VAR_4);
        if (VAR_6 != 0) {
                if (!VAR_4)
                        return VAR_6;
                if (VAR_5 == 0)
                        VAR_5 = VAR_6;
        }

        VAR_6 = FUNC_3(VAR_2, VAR_3, VAR_4);
        if (VAR_6 != 0) {
                if (!VAR_4)
                        return VAR_6;
                if (VAR_5 == 0)
                        VAR_5 = VAR_6;
        }

        VAR_6 = FUNC_2(VAR_2, VAR_3, VAR_4);
        if (VAR_6 != 0) {
                if (!VAR_4)
                        return VAR_6;
                if (VAR_5 == 0)
                        VAR_5 = VAR_6;
        }

        VAR_6 = FUNC_1(VAR_2, VAR_3, VAR_4);
        if (VAR_6 != 0) {
                if (!VAR_4)
                        return VAR_6;
                if (VAR_5 == 0)
                        VAR_5 = VAR_6;
        }

        VAR_6 = FUNC_0(VAR_2, VAR_3, VAR_4);
        if (VAR_6 != 0) {
                if (!VAR_4)
                        return VAR_6;
                if (VAR_5 == 0)
                        VAR_5 = VAR_6;
        }

        return VAR_5;
}
