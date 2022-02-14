
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_5(int VAR_1, int VAR_2, int VAR_3, int VAR_4)
{
    int VAR_5;
    int VAR_6;
    const static int VAR_7[8] = {1, 0, 0, 0, 1, 2, 2, 2 };
    int VAR_8 = FUNC_1(VAR_2 + 1) - 1;

    FUNC_4(&VAR_0);

    VAR_6 = VAR_7[FUNC_0(VAR_3) % 8];
    FUNC_3(FUNC_0(VAR_3), VAR_8 - VAR_6);

    for (VAR_5 = FUNC_0(VAR_3); VAR_5 < FUNC_0(VAR_3 + VAR_4); ++VAR_5)
    {
 VAR_6 = VAR_7[VAR_5 % 8];
 FUNC_2(VAR_5, VAR_8 - VAR_6);
    }
}
