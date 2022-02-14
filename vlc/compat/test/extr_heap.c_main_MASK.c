
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t VAR_0 ;
 void* FUNC_0 (size_t,size_t) ;
 size_t* VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (size_t,size_t) ;

int FUNC_4(void)
{
    void *VAR_2;



    for (size_t VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
        size_t VAR_4 = VAR_1[VAR_3];

        FUNC_1((VAR_4 & (VAR_4 - 1)) == 0);

        VAR_2 = FUNC_0(VAR_1[VAR_3], 0);
        FUNC_2(VAR_2);

        for (size_t VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
             size_t VAR_6 = VAR_1[VAR_5];

             if (VAR_6 < VAR_4)
                 continue;

             VAR_2 = FUNC_0(VAR_4, VAR_6);
             FUNC_1(VAR_2 != ((void*)0));
             FUNC_1(((uintptr_t)VAR_2 & (VAR_4 - 1)) == 0);
             FUNC_2(VAR_2);
        }
    }



    for (size_t VAR_7 = 0; VAR_7 < 21; VAR_7++) {
        size_t VAR_8 = (size_t)1 << VAR_7;

        FUNC_3(VAR_8, 0);
        FUNC_3(VAR_8, 1);
        FUNC_3(VAR_8, VAR_8 - 1);
        FUNC_3(VAR_8, VAR_8);
        FUNC_3(VAR_8, VAR_8 * 2);
    }

    return 0;
}
