
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef float int16_t ;



__attribute__((used)) static void FUNC_0( int16_t *VAR_0, int16_t *VAR_1,
                           unsigned int VAR_2, unsigned int VAR_3 )
{
    unsigned int VAR_4 = 0;
    float VAR_5 = (float)*VAR_1 / 32768.f;

    *VAR_0 = *VAR_1;
    VAR_0 += 2;
    VAR_1 += 2;

    for ( unsigned int VAR_6 = 1; VAR_6 < VAR_3; VAR_6++ )
    {
        float VAR_7 = (float)*VAR_1 / 32768.f;
        while ( VAR_4 < VAR_2 )
        {
            float VAR_8 = VAR_5;
            VAR_8 += (VAR_7 - VAR_5) * VAR_4 / VAR_2;
            if ( VAR_8 >= 1.f ) *VAR_0 = 32767;
            else if ( VAR_8 < -1.f ) *VAR_0 = -32768;
            else *VAR_0 = VAR_8 * 32768.f;
            VAR_0 += 2;
            VAR_4 += VAR_3;
        }

        VAR_5 = VAR_7;
        VAR_1 += 2;
        VAR_4 -= VAR_2;
    }
}
