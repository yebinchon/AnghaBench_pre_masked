
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int,int ,int ,int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(void) {
        int VAR_4, VAR_5, VAR_6 = -VAR_1;

        VAR_4 = FUNC_1(1);
        if (VAR_4 <= 0)
                return -VAR_1;

        for (VAR_5 = VAR_2; VAR_5 < VAR_2 + VAR_4; VAR_5 ++) {
                if (FUNC_0(VAR_5, VAR_0, VAR_3, -1) > 0) {
                        if (VAR_6 >= 0)
                                return -VAR_1;

                        VAR_6 = VAR_5;
                }
        }

        return VAR_6;
}
