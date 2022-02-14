
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int msg ;
typedef int filter_t ;


 scalar_t__ FUNC_0 (char*,int,char*,float) ;
 int FUNC_1 (int ,char*,char*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(filter_t *VAR_0, float *VAR_1, int VAR_2)
{
    char VAR_3[256];
    size_t VAR_4 = 0;

    for (int VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
        if (VAR_4 >= sizeof (VAR_3))
            break;
        VAR_4 += FUNC_0(VAR_3 + VAR_4, sizeof (VAR_3) - VAR_4, "%f:", VAR_1[VAR_5]);
    }


    FUNC_1(FUNC_2(VAR_0), "audiobargraph_v-i_values",
                  VAR_3);
}
