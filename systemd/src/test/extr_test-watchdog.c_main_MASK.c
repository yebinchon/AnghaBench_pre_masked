
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usec_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 () ;
 int FUNC_7 (int*) ;

int FUNC_8(int VAR_3, char *VAR_4[]) {
        usec_t VAR_5;
        unsigned VAR_6, VAR_7;
        int VAR_8;
        bool VAR_9;

        FUNC_3(VAR_1);

        VAR_9 = FUNC_2();

        VAR_5 = VAR_9 ? 10 * VAR_2 : 1 * VAR_2;
        VAR_7 = VAR_9 ? 5 : 3;

        VAR_8 = FUNC_7(&VAR_5);
        if (VAR_8 < 0)
                FUNC_1(VAR_8, "Failed to open watchdog: %m");
        if (VAR_8 == -VAR_0)
                VAR_5 = 0;

        for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++) {
                FUNC_0("Pinging...");
                VAR_8 = FUNC_6();
                if (VAR_8 < 0)
                        FUNC_1(VAR_8, "Failed to ping watchdog: %m");

                FUNC_4(VAR_5/2);
        }

        FUNC_5(1);
        return 0;
}
