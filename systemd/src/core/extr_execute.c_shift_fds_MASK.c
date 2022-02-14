
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int*) ;
 int VAR_1 ;
 int FUNC_1 (int,int ,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(int VAR_2[], size_t VAR_3) {
        int VAR_4, VAR_5;

        if (VAR_3 <= 0)
                return 0;



        FUNC_0(VAR_2);

        VAR_4 = 0;
        for (;;) {
                int VAR_6;

                VAR_5 = -1;

                for (VAR_6 = VAR_4; VAR_6 < (int) VAR_3; VAR_6++) {
                        int VAR_7;


                        if (VAR_2[VAR_6] == VAR_6+3)
                                continue;

                        VAR_7 = FUNC_1(VAR_2[VAR_6], VAR_0, VAR_6 + 3);
                        if (VAR_7 < 0)
                                return -VAR_1;

                        FUNC_2(VAR_2[VAR_6]);
                        VAR_2[VAR_6] = VAR_7;



                        if (VAR_7 != VAR_6+3 && VAR_5 < 0)
                                VAR_5 = VAR_6;
                }

                if (VAR_5 < 0)
                        break;

                VAR_4 = VAR_5;
        }

        return 0;
}
