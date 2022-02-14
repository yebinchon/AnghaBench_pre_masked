
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*) ;
 scalar_t__ FUNC_1 (int,int ) ;
 int VAR_2 ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(int *VAR_3, int *VAR_4) {
        int VAR_5 = 0;

        FUNC_0(VAR_3);
        FUNC_0(VAR_4);

        FUNC_2();

        if (*VAR_3 >= 0)
                if (FUNC_1(*VAR_3, VAR_0) < 0)
                        VAR_5 = -VAR_2;

        if (*VAR_4 >= 0)
                if (FUNC_1(*VAR_4, VAR_1) < 0)
                        VAR_5 = -VAR_2;

        *VAR_3 = FUNC_3(*VAR_3);
        *VAR_4 = FUNC_3(*VAR_4);

        return VAR_5;
}
