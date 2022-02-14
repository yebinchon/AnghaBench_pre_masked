
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int const*) ;
 int FUNC_1 (int const,int) ;
 int FUNC_2 (int const,int) ;

__attribute__((used)) static int FUNC_3(const int VAR_0[], size_t VAR_1, size_t VAR_2, bool VAR_3) {
        size_t VAR_4, VAR_5;
        int VAR_6;

        VAR_5 = VAR_1 + VAR_2;
        if (VAR_5 <= 0)
                return 0;

        FUNC_0(VAR_0);




        for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++) {

                if (VAR_4 < VAR_1) {
                        VAR_6 = FUNC_2(VAR_0[VAR_4], VAR_3);
                        if (VAR_6 < 0)
                                return VAR_6;
                }





                VAR_6 = FUNC_1(VAR_0[VAR_4], 0);
                if (VAR_6 < 0)
                        return VAR_6;
        }

        return 0;
}
