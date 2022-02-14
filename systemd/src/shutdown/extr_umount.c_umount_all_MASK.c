
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int*) ;
 int FUNC_1 (int*,int) ;

int FUNC_2(bool *VAR_0, int VAR_1) {
        bool VAR_2;
        int VAR_3;

        FUNC_0(VAR_0);




        do {
                VAR_2 = 0;

                VAR_3 = FUNC_1(&VAR_2, VAR_1);
                if (VAR_2)
                        *VAR_0 = 1;
        } while (VAR_2);

        return VAR_3;
}
