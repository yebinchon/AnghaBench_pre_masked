
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Set ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*) ;
 int VAR_2 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int **,int *) ;
 char* FUNC_4 (char const*) ;

__attribute__((used)) static int FUNC_5(
                Set **VAR_3,
                const char *VAR_4) {

        char *VAR_5;
        int VAR_6;

        FUNC_0(VAR_4);

        VAR_6 = FUNC_3(VAR_3, &VAR_2);
        if (VAR_6 < 0)
                return VAR_6;

        VAR_5 = FUNC_4(VAR_4);
        if (!VAR_5)
                return -VAR_1;

        FUNC_1(VAR_5, 0);

        VAR_6 = FUNC_2(*VAR_3, VAR_5);
        if (VAR_6 == -VAR_0)
                return 0;
        if (VAR_6 < 0)
                return VAR_6;

        return 1;
}
