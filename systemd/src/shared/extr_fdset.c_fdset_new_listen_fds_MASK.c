
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FDSet ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (int **) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;

int FUNC_6(FDSet **VAR_2, bool VAR_3) {
        int VAR_4, VAR_5, VAR_6;
        FDSet *VAR_7;

        FUNC_1(VAR_2);



        VAR_7 = FUNC_2();
        if (!VAR_7) {
                VAR_6 = -VAR_0;
                goto fail;
        }

        VAR_4 = FUNC_4(VAR_3);
        for (VAR_5 = VAR_1; VAR_5 < VAR_1 + VAR_4; VAR_5 ++) {
                VAR_6 = FUNC_3(VAR_7, VAR_5);
                if (VAR_6 < 0)
                        goto fail;
        }

        *VAR_2 = VAR_7;
        return 0;

fail:
        if (VAR_7)
                FUNC_5(FUNC_0(VAR_7));

        return VAR_6;
}
