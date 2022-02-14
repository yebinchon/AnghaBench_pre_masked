
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int vlc_tls_t ;
typedef int vlc_tick_t ;
struct TYPE_5__ {int * url; int * sock; } ;
typedef TYPE_1__ httpd_client_t ;


 int FUNC_0 (TYPE_1__*,int ) ;
 TYPE_1__* FUNC_1 (int) ;

__attribute__((used)) static httpd_client_t *FUNC_2(vlc_tls_t *VAR_0, vlc_tick_t VAR_1)
{
    httpd_client_t *VAR_2 = FUNC_1(sizeof(httpd_client_t));

    if (!VAR_2) return ((void*)0);

    VAR_2->sock = VAR_0;
    VAR_2->url = ((void*)0);

    FUNC_0(VAR_2, VAR_1);
    return VAR_2;
}
