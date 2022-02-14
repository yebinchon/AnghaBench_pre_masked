
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int first_nonopt; int last_nonopt; int ind; } ;
typedef TYPE_1__ vlc_getopt_t ;



__attribute__((used)) static void FUNC_0(char **VAR_0, vlc_getopt_t *restrict VAR_1)
{
    int VAR_2 = VAR_1->first_nonopt;
    int VAR_3 = VAR_1->last_nonopt;
    int VAR_4 = VAR_1->ind;
    char *VAR_5;






    while (VAR_4 > VAR_3 && VAR_3 > VAR_2)
    {
        if (VAR_4 - VAR_3 > VAR_3 - VAR_2)
        {

            int VAR_6 = VAR_3 - VAR_2;
            register int VAR_7;


            for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++)
            {
                VAR_5 = VAR_0[VAR_2 + VAR_7];
                VAR_0[VAR_2 + VAR_7] = VAR_0[VAR_4 - (VAR_3 - VAR_2) + VAR_7];
                VAR_0[VAR_4 - (VAR_3 - VAR_2) + VAR_7] = VAR_5;
            }

            VAR_4 -= VAR_6;
        }
        else
        {

            int VAR_8 = VAR_4 - VAR_3;
            register int VAR_9;


            for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++)
            {
                VAR_5 = VAR_0[VAR_2 + VAR_9];
                VAR_0[VAR_2 + VAR_9] = VAR_0[VAR_3 + VAR_9];
                VAR_0[VAR_3 + VAR_9] = VAR_5;
            }

            VAR_2 += VAR_8;
        }
    }



    VAR_1->first_nonopt += (VAR_1->ind - VAR_1->last_nonopt);
    VAR_1->last_nonopt = VAR_1->ind;
}
