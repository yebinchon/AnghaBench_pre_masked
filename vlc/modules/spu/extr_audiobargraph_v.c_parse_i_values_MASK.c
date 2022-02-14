
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nbChannels; int scale; int * i_values; } ;
typedef TYPE_1__ BarGraph_t ;


 int FUNC_0 (int,int ,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (float) ;
 int FUNC_4 (int ) ;
 char* FUNC_5 (char*,char*,char**) ;
 int * FUNC_6 (int *,int) ;

__attribute__((used)) static void FUNC_7(BarGraph_t *VAR_0, char *VAR_1)
{
    char VAR_2[] = ":";
    char* VAR_3;

    VAR_0->nbChannels = 0;
    FUNC_2(VAR_0->i_values);
    VAR_0->i_values = ((void*)0);
    char *VAR_4 = FUNC_5(VAR_1, VAR_2, &VAR_3);
    while (VAR_4 != ((void*)0)) {
        VAR_0->nbChannels++;
        VAR_0->i_values = FUNC_6(VAR_0->i_values,
                                          VAR_0->nbChannels*sizeof(int));
        float VAR_5 = FUNC_4(FUNC_1(VAR_4)) * 20;
        VAR_0->i_values[VAR_0->nbChannels-1] = FUNC_0(FUNC_3(VAR_5)*VAR_0->scale, 0, VAR_0->scale);
        VAR_4 = FUNC_5(((void*)0), VAR_2, &VAR_3);
    }
}
