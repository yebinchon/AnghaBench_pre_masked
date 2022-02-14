
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Writer ;
typedef int RemoteSource ;


 int FUNC_0 (void**) ;
 int FUNC_1 (int ,char*,int **) ;
 int VAR_0 ;
 int FUNC_2 (char*,int *) ;
 int FUNC_3 () ;
 int FUNC_4 (int,char*,char*) ;
 int * FUNC_5 (int,int,char*,int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(void **VAR_1, int VAR_2, char *VAR_3) {
        RemoteSource *VAR_4;
        Writer *VAR_5;
        int VAR_6;

        FUNC_0(VAR_1);
        if (*VAR_1)
                return 0;

        VAR_6 = FUNC_1(VAR_0, VAR_3, &VAR_5);
        if (VAR_6 < 0)
                return FUNC_4(VAR_6, "Failed to get writer for source %s: %m",
                                         VAR_3);

        VAR_4 = FUNC_5(VAR_2, 1, VAR_3, VAR_5);
        if (!VAR_4) {
                FUNC_6(VAR_5);
                return FUNC_3();
        }

        FUNC_2("Added RemoteSource as connection metadata %p", VAR_4);

        *VAR_1 = VAR_4;
        return 0;
}
