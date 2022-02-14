
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int picture_t ;


 int FUNC_0 (int **) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(int VAR_0, picture_t **VAR_1)
{
    for (int VAR_2 = 0; VAR_2 < VAR_0; ++VAR_2) {
        if (VAR_1[VAR_2]) {
            FUNC_1(VAR_1[VAR_2]);
        }
    }
    FUNC_0(VAR_1);
}
