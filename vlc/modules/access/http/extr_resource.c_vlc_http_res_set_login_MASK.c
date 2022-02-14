
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlc_http_resource {char* password; char* username; int * response; } ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct vlc_http_resource *VAR_0,
                           const char *VAR_1, const char *VAR_2)
{
    char *VAR_3 = ((void*)0);
    char *VAR_4 = ((void*)0);

    if (VAR_1 != ((void*)0))
    {
        VAR_3 = FUNC_1(VAR_1);
        if (FUNC_2(VAR_3 == ((void*)0)))
            return -1;

        VAR_4 = FUNC_1((VAR_2 != ((void*)0)) ? VAR_2 : "");
        if (FUNC_2(VAR_4 == ((void*)0)))
        {
            FUNC_0(VAR_3);
            return -1;
        }
    }

    FUNC_0(VAR_0->password);
    FUNC_0(VAR_0->username);
    VAR_0->username = VAR_3;
    VAR_0->password = VAR_4;

    if (VAR_0->response != ((void*)0) && FUNC_4(VAR_0->response) == 401)
    {
        FUNC_3(VAR_0->response);
        VAR_0->response = ((void*)0);
    }

    return 0;
}
