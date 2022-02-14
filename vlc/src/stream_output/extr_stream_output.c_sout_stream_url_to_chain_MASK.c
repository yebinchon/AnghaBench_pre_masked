
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* psz_access; char* psz_name; int psz_way; } ;
typedef TYPE_1__ mrl_t ;


 int FUNC_0 (char**,char*,char*,...) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,char const*) ;
 char* FUNC_4 (char*,char) ;
 scalar_t__ FUNC_5 (char const*,char*) ;
 int FUNC_6 (char const*,char*) ;
 scalar_t__ FUNC_7 (char const*) ;
 char* FUNC_8 (char*,char*) ;

__attribute__((used)) static char *FUNC_9( bool VAR_0,
                                       const char *VAR_1 )
{
    mrl_t VAR_2;
    char *VAR_3;

    FUNC_3( &VAR_2, VAR_1 );


    static const char VAR_4[] = "dccp\0sctp\0tcp\0udplite\0";
    for (const char *VAR_5 = VAR_4; *VAR_5; VAR_5 += FUNC_7 (VAR_5) + 1)
        if (FUNC_5 (VAR_5, VAR_2.psz_access) == 0)
            goto rtp;

    if (FUNC_5 (VAR_2.psz_access, "rtp") == 0)
    {
        char *VAR_6;

        FUNC_6 (VAR_2.psz_access, "udp");
rtp:
        if (VAR_2.psz_name[0] == '[')
        {
            VAR_6 = FUNC_8 (VAR_2.psz_name, "]:");
            if (VAR_6 != ((void*)0))
                VAR_6++;
        }
        else
            VAR_6 = FUNC_4 (VAR_2.psz_name, ':');
        if (VAR_6 != ((void*)0))
            *VAR_6++ = '\0';

        if (FUNC_0 (&VAR_3,
                      "rtp{mux=\"%s\",proto=\"%s\",dst=\"%s%s%s\"}",
                      VAR_2.psz_way, VAR_2.psz_access, VAR_2.psz_name,
                      VAR_6 ? "\",port=\"" : "", VAR_6 ? VAR_6 : "") == -1)
            VAR_3 = ((void*)0);
    }
    else
    {

        if (FUNC_0 (&VAR_3,
                      "standard{mux=\"%s\",access=\"%s\",dst=\"%s\"}",
                      VAR_2.psz_way, VAR_2.psz_access, VAR_2.psz_name) == -1)
            VAR_3 = ((void*)0);
    }


    if (VAR_3 && VAR_0)
    {
        char *VAR_7;
        if (FUNC_0 (&VAR_7, "duplicate{dst=display,dst=%s}", VAR_3) == -1)
            VAR_7 = ((void*)0);
        FUNC_1 (VAR_3);
        VAR_3 = VAR_7;
    }

    FUNC_2( &VAR_2 );
    return VAR_3;
}
