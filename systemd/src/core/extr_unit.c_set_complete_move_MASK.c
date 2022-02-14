
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Set ;


 int * FUNC_0 (int *) ;
 int FUNC_1 (int **) ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static int FUNC_3(Set **VAR_0, Set **VAR_1) {
        FUNC_1(VAR_0);
        FUNC_1(VAR_1);

        if (!VAR_1)
                return 0;

        if (*VAR_0)
                return FUNC_2(*VAR_0, *VAR_1);
        else
                *VAR_0 = FUNC_0(*VAR_1);

        return 0;
}
