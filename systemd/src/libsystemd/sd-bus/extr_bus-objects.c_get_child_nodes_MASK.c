
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * node ;
typedef int sd_bus_error ;
typedef int * sd_bus ;
typedef int Set ;


 int VAR_0 ;
 int FUNC_0 (int **,char const*,int **,unsigned int,int *,int *) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_4(
                sd_bus *VAR_2,
                const char *VAR_3,
                struct node *VAR_4,
                unsigned VAR_5,
                Set **VAR_6,
                sd_bus_error *VAR_7) {

        Set *VAR_8 = ((void*)0);
        int VAR_9;

        FUNC_1(VAR_2);
        FUNC_1(VAR_3);
        FUNC_1(VAR_4);
        FUNC_1(VAR_6);

        VAR_8 = FUNC_3(&VAR_1);
        if (!VAR_8)
                return -VAR_0;

        VAR_9 = FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5, VAR_8, VAR_7);
        if (VAR_9 < 0) {
                FUNC_2(VAR_8);
                return VAR_9;
        }

        *VAR_6 = VAR_8;
        return 0;
}
