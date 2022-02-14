
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* psz_username; int * psz_password; } ;
typedef TYPE_1__ vlc_credential ;



__attribute__((used)) static bool
FUNC_0(vlc_credential *VAR_0)
{
    if (VAR_0->psz_username && *VAR_0->psz_username != '\0'
     && VAR_0->psz_password)
        return 1;
    VAR_0->psz_password = ((void*)0);
    return 0;
}
