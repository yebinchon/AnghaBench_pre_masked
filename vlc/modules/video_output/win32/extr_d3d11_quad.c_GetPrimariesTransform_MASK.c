
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t video_color_primaries_t ;
struct cie1931_primaries {int white; } ;
typedef double FLOAT ;


 int FUNC_0 (int *,int *,double*) ;
 int FUNC_1 (double*,double*) ;
 int FUNC_2 (struct cie1931_primaries const*,double*) ;
 int FUNC_3 (struct cie1931_primaries const*,double*) ;
 struct cie1931_primaries* VAR_0 ;

__attribute__((used)) static void FUNC_4(FLOAT VAR_1[4*4], video_color_primaries_t VAR_2,
                                  video_color_primaries_t VAR_3)
{
    const struct cie1931_primaries *VAR_4 = &VAR_0[VAR_2];
    const struct cie1931_primaries *VAR_5 = &VAR_0[VAR_3];
    double VAR_6[3 * 3], VAR_7[3 * 3];


    FUNC_2(VAR_4, VAR_6);


    FUNC_0(&VAR_4->white, &VAR_5->white, VAR_6);


    FUNC_3(VAR_5, VAR_7);


    FUNC_1(VAR_7, VAR_6);

    for (size_t VAR_8=0;VAR_8<3; ++VAR_8)
    {
        for (size_t VAR_9=0;VAR_9<3; ++VAR_9)
            VAR_1[VAR_9 + VAR_8*4] = VAR_7[VAR_9 + VAR_8*3];
        VAR_1[3 + VAR_8*4] = 0;
    }
    for (size_t VAR_10=0;VAR_10<4; ++VAR_10)
        VAR_1[VAR_10 + 3*4] = VAR_10 == 3;
}
