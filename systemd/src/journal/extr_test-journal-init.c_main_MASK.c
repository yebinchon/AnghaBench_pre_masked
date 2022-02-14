
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sd_journal ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int ,int ,int *) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (char*,int) ;
 int FUNC_5 (char*,int*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int **,int ) ;
 int FUNC_8 (int **,char*,int ) ;
 int FUNC_9 (int ) ;

int FUNC_10(int VAR_6, char *VAR_7[]) {
        sd_journal *VAR_8;
        int VAR_9, VAR_10, VAR_11 = 100;
        char VAR_12[] = "/var/tmp/journal-stream-XXXXXX";

        FUNC_9(VAR_2);

        if (VAR_6 >= 2) {
                VAR_9 = FUNC_5(VAR_7[1], &VAR_11);
                if (VAR_9 < 0)
                        FUNC_2("Could not parse loop count argument. Using default.");
        }

        FUNC_2("Running %d loops", VAR_11);

        FUNC_0(FUNC_3(VAR_12));
        (void) FUNC_1(VAR_12, VAR_1, VAR_1, ((void*)0));

        for (VAR_10 = 0; VAR_10 < VAR_11; VAR_10++) {
                VAR_9 = FUNC_7(&VAR_8, VAR_5);
                FUNC_0(VAR_9 == 0);

                FUNC_6(VAR_8);

                VAR_9 = FUNC_8(&VAR_8, VAR_12, 0);
                FUNC_0(VAR_9 == 0);

                FUNC_6(VAR_8);

                VAR_8 = ((void*)0);
                VAR_9 = FUNC_8(&VAR_8, VAR_12, VAR_5);
                FUNC_0(VAR_9 == -VAR_0);
                FUNC_0(VAR_8 == ((void*)0));
        }

        FUNC_0(FUNC_4(VAR_12, VAR_4|VAR_3) >= 0);

        return 0;
}
