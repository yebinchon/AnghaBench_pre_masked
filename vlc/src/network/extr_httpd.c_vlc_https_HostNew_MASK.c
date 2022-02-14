
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_tls_server_t ;
typedef int vlc_object_t ;
typedef int httpd_host_t ;


 int FUNC_0 (char*) ;
 int * FUNC_1 (int *,char*,char*,int *) ;
 int FUNC_2 (int *,char*,...) ;
 char* FUNC_3 (int *,char*) ;
 int * FUNC_4 (int *,char*,char*) ;

httpd_host_t *FUNC_5(vlc_object_t *VAR_0)
{
    char *VAR_1 = FUNC_3(VAR_0, "http-cert");
    if (!VAR_1) {
        FUNC_2(VAR_0, "HTTP/TLS certificate not specified!");
        return ((void*)0);
    }

    char *VAR_2 = FUNC_3(VAR_0, "http-key");
    vlc_tls_server_t *VAR_3 = FUNC_4(VAR_0, VAR_1, VAR_2);

    if (!VAR_3) {
        FUNC_2(VAR_0, "HTTP/TLS certificate error (%s and %s)",
                 VAR_1, VAR_2 ? VAR_2 : VAR_1);
        FUNC_0(VAR_2);
        FUNC_0(VAR_1);
        return ((void*)0);
    }
    FUNC_0(VAR_2);
    FUNC_0(VAR_1);

    return FUNC_1(VAR_0, "http-host", "https-port", VAR_3);
}
