
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* psz_path; char* psz_option; int psz_host; } ;
typedef TYPE_1__ vlc_url_t ;


 int FUNC_0 (char**,char*,int ,char*,char*,char const*,char*,char*) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static char *
FUNC_2(vlc_url_t *VAR_0, const char *VAR_1)
{

    char *VAR_2;
    if (FUNC_0(&VAR_2, "smb://%d%s%s%s%s%s", VAR_0->psz_host,
                 VAR_0->psz_path != ((void*)0) ? VAR_0->psz_path : "",
                 VAR_0->psz_path != ((void*)0) && VAR_0->psz_path[0] != '\0' &&
                 VAR_0->psz_path[FUNC_1(VAR_0->psz_path) - 1] != '/' ? "/" : "",
                 VAR_1,
                 VAR_0->psz_option != ((void*)0) ? "?" : "",
                 VAR_0->psz_option != ((void*)0) ? VAR_0->psz_option : "") == -1)
        return ((void*)0);
    else
        return VAR_2;
}
