
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int psz_password; int psz_username; int psz_path; } ;
typedef TYPE_1__ vlc_url_t ;
typedef int vlc_http_auth_t ;
typedef int stream_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *,char const*,char*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_2( stream_t *VAR_0, const char *VAR_1,
                           vlc_url_t *VAR_2, vlc_http_auth_t *VAR_3 )
{
    return
        FUNC_1( FUNC_0(VAR_0),
                                                     VAR_3,
                                                     VAR_1, "",
                                                     VAR_2->psz_path,
                                                     VAR_2->psz_username,
                                                     VAR_2->psz_password );
}
