
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FDSet ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int **) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *,int const) ;
 int FUNC_4 (int ) ;

int FUNC_5(FDSet **VAR_1, const int *VAR_2, size_t VAR_3) {
        size_t VAR_4;
        FDSet *VAR_5;
        int VAR_6;

        FUNC_1(VAR_1);

        VAR_5 = FUNC_2();
        if (!VAR_5)
                return -VAR_0;

        for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {

                VAR_6 = FUNC_3(VAR_5, VAR_2[VAR_4]);
                if (VAR_6 < 0) {
                        FUNC_4(FUNC_0(VAR_5));
                        return VAR_6;
                }
        }

        *VAR_1 = VAR_5;
        return 0;
}
