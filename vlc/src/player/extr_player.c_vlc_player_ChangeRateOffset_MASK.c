
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_player_t ;


 size_t FUNC_0 (float const*) ;
 int FUNC_1 (int *,float) ;
 float FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(vlc_player_t *VAR_0, bool VAR_1)
{
    static const float VAR_2[] = {
        1.0/64, 1.0/32, 1.0/16, 1.0/8, 1.0/4, 1.0/3, 1.0/2, 2.0/3,
        1.0/1,
        3.0/2, 2.0/1, 3.0/1, 4.0/1, 8.0/1, 16.0/1, 32.0/1, 64.0/1,
    };
    float VAR_3 = FUNC_2(VAR_0) * (VAR_1 ? 1.1f : 0.9f);


    for (size_t VAR_4 = 0; VAR_4 < FUNC_0(VAR_2); ++VAR_4)
    {
        if ((VAR_1 && VAR_2[VAR_4] > VAR_3) ||
            (!VAR_1 && VAR_2[VAR_4] >= VAR_3 && VAR_4))
        {
            VAR_3 = VAR_1 ? VAR_2[VAR_4] : VAR_2[VAR_4-1];
            break;
        }
    }

    FUNC_1(VAR_0, VAR_3);
}
