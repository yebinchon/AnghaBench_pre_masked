
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Item {int seen; } ;
typedef int OrderedSet ;


 int FUNC_0 (struct Item*) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int * FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *,struct Item*) ;

__attribute__((used)) static void FUNC_5(void) {
        OrderedSet *VAR_1;
        struct Item VAR_2[4] = {};
        unsigned VAR_3;

        FUNC_1(*(VAR_1 = FUNC_3(&VAR_0)));
        for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_2) - 1; VAR_3++)
                FUNC_1(FUNC_4(VAR_1, VAR_2 + VAR_3) == 1);

        VAR_1 = FUNC_2(VAR_1);
        FUNC_1(VAR_2[0].seen == 1);
        FUNC_1(VAR_2[1].seen == 1);
        FUNC_1(VAR_2[2].seen == 1);
        FUNC_1(VAR_2[3].seen == 0);
}
