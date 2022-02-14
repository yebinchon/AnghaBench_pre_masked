
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vlc_tls_t ;
typedef int vlc_object_t ;
struct TYPE_4__ {int psz_host; } ;
struct TYPE_5__ {int * cmd; TYPE_1__ url; int p_creds; } ;
typedef TYPE_2__ access_sys_t ;


 int FUNC_0 (int *,char*) ;
 int * FUNC_1 (int ,int *,int ,char const*,int *,int *) ;

__attribute__((used)) static int FUNC_2( vlc_object_t *VAR_0, access_sys_t *VAR_1,
                         const char *VAR_2 )
{

    vlc_tls_t *VAR_3 = FUNC_1( VAR_1->p_creds,
                                                     VAR_1->cmd,
                                                     VAR_1->url.psz_host,
                                                     VAR_2,
                                                     ((void*)0), ((void*)0) );
    if( VAR_3 == ((void*)0) )
    {
        FUNC_0( VAR_0, "cannot establish FTP/TLS session on command channel" );
        return -1;
    }
    VAR_1->cmd = VAR_3;
    return 0;
}
