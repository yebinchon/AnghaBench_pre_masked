
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_tls_server_t ;
typedef int vlc_object_t ;


 int FUNC_0 (int *,char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int * FUNC_2 (int *,int,char*) ;
 int * FUNC_3 (int *,char*,int *,int,int ,int *,char const*,char const*) ;
 int FUNC_4 (int *) ;

vlc_tls_server_t *
FUNC_5 (vlc_object_t *VAR_1, const char *VAR_2,
                      const char *VAR_3)
{
    vlc_tls_server_t *VAR_4 = FUNC_2(VAR_1, sizeof (*VAR_4),
                                              "tls server");
    if (FUNC_1(VAR_4 == ((void*)0)))
        return ((void*)0);

    if (VAR_3 == ((void*)0))
        VAR_3 = VAR_2;

    if (FUNC_3(VAR_4, "tls server", ((void*)0), 0,
                        VAR_0, VAR_4, VAR_2, VAR_3) == ((void*)0))
    {
        FUNC_0 (VAR_4, "TLS server plugin not available");
        FUNC_4(VAR_4);
        return ((void*)0);
    }

    return VAR_4;
}
