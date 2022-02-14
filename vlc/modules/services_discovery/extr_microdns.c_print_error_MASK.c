
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_object_t ;
typedef int psz_err_str ;


 scalar_t__ FUNC_0 (int,char*,int) ;
 int FUNC_1 (int *,char*,char const*,...) ;

__attribute__((used)) static void
FUNC_2( vlc_object_t *VAR_0, const char *VAR_1, int VAR_2 )
{
    char VAR_3[128];

    if( FUNC_0( VAR_2, VAR_3, sizeof(VAR_3) ) == 0)
        FUNC_1( VAR_0, "mDNS %s error: %s", VAR_1, VAR_3);
    else
        FUNC_1( VAR_0, "mDNS %s error: unknown: %d", VAR_1, VAR_2);
}
