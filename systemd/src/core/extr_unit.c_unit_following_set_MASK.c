
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int * Unit ;
struct TYPE_2__ {int (* following_set ) (int **,int **) ;} ;
typedef int Set ;


 TYPE_1__* FUNC_0 (int **) ;
 int FUNC_1 (int **) ;
 int FUNC_2 (int **,int **) ;

int FUNC_3(Unit *VAR_0, Set **VAR_1) {
        FUNC_1(VAR_0);
        FUNC_1(VAR_1);

        if (FUNC_0(VAR_0)->following_set)
                return FUNC_0(VAR_0)->following_set(VAR_0, VAR_1);

        *VAR_1 = ((void*)0);
        return 0;
}
