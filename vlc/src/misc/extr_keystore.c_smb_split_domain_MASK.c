
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* psz_username; int psz_split_domain; int psz_realm; } ;
typedef TYPE_1__ vlc_credential ;


 int FUNC_0 (int ) ;
 char* FUNC_1 (char*,char) ;
 int FUNC_2 (char*,size_t) ;

__attribute__((used)) static void
FUNC_3(vlc_credential *VAR_0)
{
    char *VAR_1 = FUNC_1(VAR_0->psz_username, ';');
    if (VAR_1)
    {
        size_t VAR_2 = VAR_1 - VAR_0->psz_username;
        if (VAR_2 > 0)
        {
            FUNC_0(VAR_0->psz_split_domain);
            VAR_0->psz_split_domain =
                FUNC_2(VAR_0->psz_username, VAR_2);
            VAR_0->psz_realm = VAR_0->psz_split_domain;
        }
        VAR_0->psz_username = VAR_1 + 1;
    }
}
