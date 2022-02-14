
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int*) ;
 scalar_t__ FUNC_1 (int,int ,int ,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(int *VAR_6, int *VAR_7) {
        int VAR_8 = -1, VAR_9 = -1;
        int VAR_10, VAR_11;

        FUNC_0(VAR_6);
        FUNC_0(VAR_7);

        VAR_11 = FUNC_2(1);
        if (VAR_11 < 0)
                return VAR_11;

        for (VAR_10 = VAR_3; VAR_10 < VAR_11 + VAR_3; VAR_10++) {
                if (FUNC_1(VAR_10, VAR_0, VAR_5, -1) > 0) {
                        if (VAR_8 >= 0)
                                return -VAR_2;
                        VAR_8 = VAR_10;
                        continue;
                }

                if (FUNC_1(VAR_10, VAR_1, VAR_4, -1) > 0) {
                        if (VAR_9 >= 0)
                                return -VAR_2;
                        VAR_9 = VAR_10;
                        continue;
                }

                return -VAR_2;
        }

        *VAR_6 = VAR_8;
        *VAR_7 = VAR_9;

        return 0;
}
