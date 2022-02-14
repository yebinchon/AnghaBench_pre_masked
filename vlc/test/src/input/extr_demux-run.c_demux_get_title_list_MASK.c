
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int input_title_t ;
typedef int demux_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *,int ,int ***,int*,int*,int*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(demux_t *VAR_2)
{
    int VAR_3;
    int VAR_4;
    int VAR_5;
    input_title_t **VAR_6;

    if (FUNC_0(VAR_2, VAR_0, &VAR_6, &VAR_3,
                      &VAR_4, &VAR_5) == VAR_1)
    {
        for (int VAR_7 = 0; VAR_7 < VAR_3; VAR_7++)
            FUNC_1(VAR_6[VAR_7]);
    }
}
