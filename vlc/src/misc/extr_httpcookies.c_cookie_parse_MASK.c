
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char* psz_name; int b_host_only; int b_secure; int * psz_path; int * psz_domain; int * psz_value; } ;
typedef TYPE_1__ http_cookie_t ;


 int * FUNC_0 (char const*) ;
 int FUNC_1 (TYPE_1__*) ;
 int * FUNC_2 (char const*) ;
 int * FUNC_3 (char const*) ;
 int FUNC_4 (char const*,char*) ;
 TYPE_1__* FUNC_5 (int) ;
 char* FUNC_6 (char const*,char,size_t) ;
 size_t FUNC_7 (char const*,char*) ;
 int * FUNC_8 (char const*) ;
 void* FUNC_9 (char const*,size_t) ;
 scalar_t__ FUNC_10 (int ) ;

__attribute__((used)) static http_cookie_t *FUNC_11(const char *VAR_0,
                                   const char *VAR_1, const char *VAR_2)
{
    http_cookie_t *VAR_3 = FUNC_5(sizeof (*VAR_3));
    if (FUNC_10(VAR_3 == ((void*)0)))
        return ((void*)0);

    VAR_3->psz_domain = ((void*)0);
    VAR_3->psz_path = ((void*)0);


    size_t VAR_4 = FUNC_7(VAR_0, ";");
    const char *VAR_5 = FUNC_6(VAR_0, '=', VAR_4);

    if (VAR_5 != ((void*)0))
    {
        VAR_3->psz_name = FUNC_9(VAR_0, VAR_5 - VAR_0);
        VAR_5++;
        VAR_3->psz_value = FUNC_9(VAR_5, VAR_4 - (VAR_5 - VAR_0));
        if (FUNC_10(VAR_3->psz_value == ((void*)0)))
            goto error;
    }
    else
    {
        VAR_3->psz_name = FUNC_9(VAR_0, VAR_4);
        VAR_3->psz_value = ((void*)0);
    }

    if (FUNC_10(VAR_3->psz_name == ((void*)0)))
        goto error;


    if (VAR_3->psz_name[0] == '\0')
        goto error;


    VAR_3->psz_domain = FUNC_2(VAR_0);
    if (VAR_3->psz_domain == ((void*)0))
    {
        VAR_3->psz_domain = FUNC_8(VAR_1);
        if (FUNC_10(VAR_3->psz_domain == ((void*)0)))
            goto error;

        VAR_3->b_host_only = 1;
    }
    else
        VAR_3->b_host_only = 0;


    VAR_3->psz_path = FUNC_3(VAR_0);
    if (VAR_3->psz_path == ((void*)0))
    {
        VAR_3->psz_path = FUNC_0(VAR_2);
        if (FUNC_10(VAR_3->psz_path == ((void*)0)))
            goto error;
    }


    VAR_3->b_secure = FUNC_4(VAR_0, "secure");

    return VAR_3;

error:
    FUNC_1(VAR_3);
    return ((void*)0);
}
