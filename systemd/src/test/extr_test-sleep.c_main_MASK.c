
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;

int FUNC_7(int VAR_1, char* VAR_2[]) {
        int VAR_3, VAR_4 = 0, VAR_5;

        FUNC_5(VAR_0);

        if (FUNC_1() != 0)
                FUNC_2("This program is unlikely to work for unprivileged users");

        FUNC_4();
        FUNC_6();

        if (VAR_1 <= 1)
                FUNC_0(FUNC_3(VAR_2[0]) == 0);
        else
                for (VAR_3 = 1; VAR_3 < VAR_1; VAR_3++) {
                        VAR_5 = FUNC_3(VAR_2[VAR_3]);
                        if (VAR_4 == 0)
                                VAR_4 = VAR_5;
                }

        return VAR_4;
}
