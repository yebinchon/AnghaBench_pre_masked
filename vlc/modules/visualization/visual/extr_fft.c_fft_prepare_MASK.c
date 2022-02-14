
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sound_sample ;


 unsigned int VAR_0 ;

__attribute__((used)) static void FUNC_0( const sound_sample *VAR_1, float * VAR_2, float * VAR_3,
                         const unsigned int *VAR_4 ) {
    unsigned int VAR_5;
    float *VAR_6 = VAR_2;
    float *VAR_7 = VAR_3;


    for(VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
    {
        *VAR_6++ = VAR_1[VAR_4[VAR_5]];
        *VAR_7++ = 0;
    }
}
