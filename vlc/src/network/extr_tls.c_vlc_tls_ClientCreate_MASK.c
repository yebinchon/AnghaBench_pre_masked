
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_tls_client_t ;
typedef int vlc_object_t ;


 int FUNC_0 (int *,char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int * FUNC_2 (int *,int,char*) ;
 int * FUNC_3 (int *,char*,int *,int,int ,int *) ;
 int FUNC_4 (int *) ;

vlc_tls_client_t *FUNC_5(vlc_object_t *VAR_1)
{
    vlc_tls_client_t *VAR_2 = FUNC_2(VAR_1, sizeof (*VAR_2),
                                              "tls client");
    if (FUNC_1(VAR_2 == ((void*)0)))
        return ((void*)0);

    if (FUNC_3(VAR_2, "tls client", ((void*)0), 0,
                        VAR_0, VAR_2) == ((void*)0))
    {
        FUNC_0 (VAR_2, "TLS client plugin not available");
        FUNC_4(VAR_2);
        return ((void*)0);
    }

    return VAR_2;
}
