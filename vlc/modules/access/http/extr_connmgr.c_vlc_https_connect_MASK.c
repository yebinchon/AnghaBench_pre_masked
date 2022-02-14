
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_tls_t ;
typedef int vlc_tls_client_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char*) ;
 int * FUNC_2 (int *,char const*,unsigned int,char*,char const**,char**) ;

vlc_tls_t *FUNC_3(vlc_tls_client_t *VAR_0, const char *VAR_1,
                             unsigned VAR_2, bool *restrict VAR_3)
{
    if (VAR_2 == 0)
        VAR_2 = 443;


    const char *VAR_4[] = { "h2", "http/1.1", ((void*)0) };
    char *VAR_5;

    vlc_tls_t *VAR_6 = FUNC_2(VAR_0, VAR_1, VAR_2, "https",
                                           VAR_4 + !*VAR_3, &VAR_5);
    if (VAR_6 != ((void*)0))
    {
        *VAR_3 = (VAR_5 != ((void*)0)) && !FUNC_1(VAR_5, "h2");
        FUNC_0(VAR_5);
    }
    return VAR_6;
}
