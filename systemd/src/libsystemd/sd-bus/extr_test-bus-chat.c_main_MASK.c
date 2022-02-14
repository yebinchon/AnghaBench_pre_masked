
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sd_bus ;
typedef int pthread_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (void*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,int *,int ,int *) ;
 int FUNC_4 (int ,void**) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int **) ;
 int FUNC_7 (int ) ;

int FUNC_8(int VAR_5, char *VAR_6[]) {
        pthread_t VAR_7, VAR_8;
        sd_bus *VAR_9;
        void *VAR_10;
        int VAR_11, VAR_12;

        FUNC_7(VAR_2);

        VAR_12 = FUNC_6(&VAR_9);
        if (VAR_12 < 0)
                return FUNC_2("Failed to connect to bus");

        FUNC_1("Initialized...");

        VAR_12 = FUNC_3(&VAR_7, ((void*)0), VAR_3, VAR_9);
        if (VAR_12 != 0)
                return VAR_0;

        VAR_12 = FUNC_3(&VAR_8, ((void*)0), VAR_4, VAR_9);
        if (VAR_12 != 0)
                return VAR_0;

        VAR_12 = FUNC_5(VAR_9);

        VAR_11 = FUNC_4(VAR_7, &VAR_10);
        if (VAR_11 != 0)
                return VAR_0;
        if (FUNC_0(VAR_10) < 0)
                return VAR_0;

        VAR_11 = FUNC_4(VAR_8, &VAR_10);
        if (VAR_11 != 0)
                return VAR_0;
        if (FUNC_0(VAR_10) < 0)
                return VAR_0;

        if (VAR_12 < 0)
                return VAR_0;

        return VAR_1;
}
