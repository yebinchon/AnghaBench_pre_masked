
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* psz_protocol; char* psz_username; char* psz_password; unsigned long i_port; char* psz_path; char* psz_option; char* psz_fragment; char* psz_buffer; int * psz_host; int * psz_pathbuffer; } ;
typedef TYPE_1__ vlc_url_t ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (char) ;
 int * FUNC_2 (char*,char,int) ;
 char* FUNC_3 (char*,char) ;
 int * FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (char*,char*,int) ;
 char* FUNC_6 (char*,char) ;
 unsigned long FUNC_7 (char*,char**,int) ;
 scalar_t__ FUNC_8 (int ) ;
 int * FUNC_9 (char const*) ;
 char* FUNC_10 (char const*) ;
 scalar_t__ FUNC_11 (char*,char*) ;
 char* FUNC_12 (char*) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static int FUNC_14(vlc_url_t *restrict VAR_3, const char *VAR_4)
{
    VAR_3->psz_protocol = ((void*)0);
    VAR_3->psz_username = ((void*)0);
    VAR_3->psz_password = ((void*)0);
    VAR_3->psz_host = ((void*)0);
    VAR_3->i_port = 0;
    VAR_3->psz_path = ((void*)0);
    VAR_3->psz_option = ((void*)0);
    VAR_3->psz_fragment = ((void*)0);
    VAR_3->psz_buffer = ((void*)0);
    VAR_3->psz_pathbuffer = ((void*)0);

    if (VAR_4 == ((void*)0))
    {
        VAR_2 = VAR_0;
        return -1;
    }

    char *VAR_5 = FUNC_10(VAR_4);
    if (FUNC_8(VAR_5 == ((void*)0)))
        return -1;
    VAR_3->psz_buffer = VAR_5;

    char *VAR_6 = VAR_5, *VAR_7;
    int VAR_8 = 0;


    VAR_7 = VAR_5;
    while (FUNC_1(*VAR_7) || FUNC_2 ("+-.", *VAR_7, 3) != ((void*)0))
        VAR_7++;

    if (*VAR_7 == ':')
    {
        *(VAR_7++) = '\0';
        VAR_3->psz_protocol = VAR_6;
        VAR_6 = VAR_7;
    }


    VAR_7 = FUNC_3(VAR_6, '#');
    if (VAR_7 != ((void*)0))
    {
       *(VAR_7++) = '\0';
       if (FUNC_11(VAR_7, "/?"))
           VAR_3->psz_fragment = VAR_7;
    }


    VAR_7 = FUNC_3(VAR_6, '?');
    if (VAR_7 != ((void*)0))
    {
        *(VAR_7++) = '\0';
        VAR_3->psz_option = VAR_7;
    }


    if (FUNC_5(VAR_6, "//", 2) == 0)
    {
        VAR_6 += 2;


        VAR_7 = FUNC_3(VAR_6, '/');
        if (VAR_7 != ((void*)0))
        {
            *VAR_7 = '\0';
            VAR_3->psz_path = VAR_7;
        }




        VAR_7 = FUNC_6(VAR_6, '@');
        if (VAR_7 != ((void*)0))
        {
            *(VAR_7++) = '\0';
            VAR_3->psz_username = VAR_6;
            VAR_6 = VAR_7;


            VAR_7 = FUNC_3(VAR_3->psz_username, ':');
            if (VAR_7 != ((void*)0))
            {
                *(VAR_7++) = '\0';
                VAR_3->psz_password = VAR_7;
                FUNC_12(VAR_3->psz_password);
            }
            FUNC_12(VAR_3->psz_username);
        }


        if (*VAR_6 == '[' && (VAR_7 = FUNC_6(VAR_6, ']')) != ((void*)0))
        {
            *(VAR_7++) = '\0';
            VAR_3->psz_host = FUNC_4(VAR_6 + 1);

            if (*VAR_7 == ':')
                VAR_7++;
            else
                VAR_7 = ((void*)0);
        }
        else
        {
            VAR_7 = FUNC_3(VAR_6, ':');
            if (VAR_7 != ((void*)0))
                *(VAR_7++) = '\0';

            const char *VAR_9 = FUNC_12(VAR_6);
            VAR_3->psz_host = (VAR_9 != ((void*)0)) ? FUNC_9(VAR_9) : ((void*)0);
        }

        if (VAR_3->psz_host == ((void*)0))
            VAR_8 = -1;
        else
        if (!FUNC_13(VAR_3->psz_host))
        {
            FUNC_0(VAR_3->psz_host);
            VAR_3->psz_host = ((void*)0);
            VAR_2 = VAR_0;
            VAR_8 = -1;
        }


        if (VAR_7 != ((void*)0) && *VAR_7)
        {
            char* VAR_10;
            unsigned long VAR_11 = FUNC_7(VAR_7, &VAR_10, 10);

            if (FUNC_3("0123456789", *VAR_7) == ((void*)0) || *VAR_10 || VAR_11 > VAR_1)
            {
                VAR_2 = VAR_0;
                VAR_8 = -1;
            }

            VAR_3->i_port = VAR_11;
        }

        if (VAR_3->psz_path != ((void*)0))
            *VAR_3->psz_path = '/';
    }
    else
    {
        VAR_3->psz_path = VAR_6;
    }

    return VAR_8;
}
