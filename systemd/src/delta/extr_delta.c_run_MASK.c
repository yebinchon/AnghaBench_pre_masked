
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int VAR_5 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,char**) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (char*,char*,int) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(int VAR_6, char *VAR_7[]) {
        int VAR_8, VAR_9, VAR_10 = 0;

        FUNC_2(1);
        FUNC_1();
        FUNC_0();

        VAR_8 = FUNC_4(VAR_6, VAR_7);
        if (VAR_8 <= 0)
                return VAR_8;

        if (VAR_3 == 0)
                VAR_3 = VAR_0;

        if (VAR_2 < 0)
                VAR_2 = !!(VAR_3 & VAR_1);
        else if (VAR_2)
                VAR_3 |= VAR_1;

        (void) FUNC_3(VAR_4);

        if (VAR_5 < VAR_6) {
                int VAR_11;

                for (VAR_11 = VAR_5; VAR_11 < VAR_6; VAR_11++) {
                        FUNC_5(VAR_7[VAR_11], 0);

                        VAR_9 = FUNC_7(VAR_7[VAR_11]);
                        if (VAR_9 < 0)
                                VAR_8 = VAR_9;
                        else
                                VAR_10 += VAR_9;
                }

        } else {
                VAR_9 = FUNC_8(((void*)0));
                if (VAR_9 < 0)
                        VAR_8 = VAR_9;
                else
                        VAR_10 += VAR_9;
        }

        if (VAR_8 >= 0)
                FUNC_6("%s%i overridden configuration files found.\n", VAR_10 ? "\n" : "", VAR_10);
        return VAR_8;
}
