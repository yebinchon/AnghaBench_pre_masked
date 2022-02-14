
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FDSet ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int,int ,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int) ;

int FUNC_4(FDSet *VAR_2, int VAR_3) {
        int VAR_4, VAR_5;

        FUNC_0(*VAR_2);
        FUNC_0(VAR_3 >= 0);

        VAR_4 = FUNC_1(VAR_3, VAR_0, 3);
        if (VAR_4 < 0)
                return -VAR_1;

        VAR_5 = FUNC_2(VAR_2, VAR_4);
        if (VAR_5 < 0) {
                FUNC_3(VAR_4);
                return VAR_5;
        }

        return VAR_4;
}
