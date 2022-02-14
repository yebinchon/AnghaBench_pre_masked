
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int audio_output_t ;


 scalar_t__ VAR_0 ;
 float FUNC_0 (int *) ;
 int FUNC_1 (int *,float) ;
 float FUNC_2 (float) ;
 float FUNC_3 (int *,char*) ;

int FUNC_4 (audio_output_t *VAR_1, int VAR_2, float *VAR_3)
{
    int VAR_4 = -1;
    float VAR_5 = FUNC_3 (VAR_1, "volume-step") / (float)VAR_0;
    float VAR_6 = VAR_2 * VAR_5;
    float VAR_7 = FUNC_0 (VAR_1);

    if (VAR_7 >= 0.f)
    {
        VAR_7 += VAR_6;
        if (VAR_7 < 0.f)
            VAR_7 = 0.f;
        if (VAR_7 > 2.f)
            VAR_7 = 2.f;
        VAR_7 = (FUNC_2 (VAR_7 / VAR_5)) * VAR_5;
        if (VAR_3 != ((void*)0))
            *VAR_3 = VAR_7;
        VAR_4 = FUNC_1 (VAR_1, VAR_7);
    }
    return VAR_4;
}
