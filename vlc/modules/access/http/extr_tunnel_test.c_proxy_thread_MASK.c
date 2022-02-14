
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int,int *,int *,int ) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 () ;

__attribute__((used)) static void *FUNC_6(void *VAR_2)
{
    int *VAR_3 = VAR_2;

    for (;;)
    {
        int VAR_4 = FUNC_0(*VAR_3, ((void*)0), ((void*)0), VAR_0);
        if (VAR_4 == -1)
            continue;

        int VAR_5 = FUNC_5();
        FUNC_1(VAR_4);
        FUNC_3(VAR_4);
        VAR_1++;
        FUNC_4(VAR_5);
    }
    FUNC_2();
}
