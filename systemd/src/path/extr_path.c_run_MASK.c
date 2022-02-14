
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 int VAR_0 ;
 int FUNC_4 (int,char**) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static int FUNC_6(int VAR_1, char* VAR_2[]) {
        int VAR_3;

        FUNC_3(1);
        FUNC_2();
        FUNC_1();

        VAR_3 = FUNC_4(VAR_1, VAR_2);
        if (VAR_3 <= 0)
                return VAR_3;

        if (VAR_1 > VAR_0) {
                int VAR_4, VAR_5;

                for (VAR_4 = VAR_0; VAR_4 < VAR_1; VAR_4++) {
                        VAR_5 = FUNC_5(VAR_2[VAR_4]);
                        if (VAR_5 < 0)
                                VAR_3 = VAR_5;
                }

                return VAR_3;
        } else
                return FUNC_0();
}
