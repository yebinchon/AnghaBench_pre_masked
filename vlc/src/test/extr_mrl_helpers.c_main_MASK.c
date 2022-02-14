
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vlc_array_t ;
struct TYPE_3__ {char* payload; char* extra; char const** results; scalar_t__ success; } ;


 size_t FUNC_0 (TYPE_1__*) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char**,char*) ;
 int FUNC_4 (int *,char const**,char*) ;
 scalar_t__ FUNC_5 (char const*,char*) ;
 scalar_t__ FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (char const*,char*,scalar_t__) ;
 TYPE_1__* VAR_2 ;
 int FUNC_8 (int *) ;
 size_t FUNC_9 (int *) ;
 char* FUNC_10 (int *,size_t) ;

int FUNC_11 (void)
{
    for (size_t VAR_3 = 0; VAR_3 < FUNC_0(VAR_2); ++VAR_3)
    {
        vlc_array_t VAR_4;
        const char *VAR_5 = ((void*)0);
        int VAR_6 = FUNC_4(&VAR_4, &VAR_5, VAR_2[VAR_3].payload);
        if (VAR_2[VAR_3].success)
        {
            FUNC_1(VAR_6 == VAR_1);
            if (VAR_5 != ((void*)0))
                FUNC_1(FUNC_5(VAR_5, VAR_2[VAR_3].extra) == 0);
            else
                FUNC_1(VAR_2[VAR_3].extra == ((void*)0));

            const char *VAR_7 = VAR_2[VAR_3].payload + 2;
            for (size_t VAR_8 = 0; VAR_2[VAR_3].results[VAR_8] != ((void*)0); ++VAR_8)
            {
                FUNC_1(VAR_8 < FUNC_9(&VAR_4) && VAR_8 < VAR_0);
                char *VAR_9 = FUNC_10(&VAR_4, VAR_8);

                FUNC_1(FUNC_5(VAR_2[VAR_3].results[VAR_8], VAR_9) == 0);

                char *VAR_10 = ((void*)0);
                VAR_6 = FUNC_3(&VAR_10, VAR_9);
                FUNC_1(VAR_6 == VAR_1 && VAR_10 != ((void*)0));
                FUNC_1(FUNC_7(VAR_7, VAR_10, FUNC_6(VAR_10)) == 0);
                VAR_7 += FUNC_6(VAR_10) + 2;

                FUNC_2(VAR_10);
                FUNC_2(VAR_9);
            }
            FUNC_8(&VAR_4);
        }
        else
        {
            FUNC_1(VAR_6 != VAR_1);
        }
    }
    return 0;
}
