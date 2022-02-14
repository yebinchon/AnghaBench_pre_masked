
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* psz; } ;
struct TYPE_5__ {TYPE_1__ value; int i_type; } ;
typedef TYPE_2__ module_config_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 TYPE_2__* FUNC_2 (char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (char const*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void FUNC_7(const char *VAR_2, const char *VAR_3)
{
    module_config_t *VAR_4 = FUNC_2( VAR_2 );



    FUNC_1(VAR_4 != ((void*)0));
    FUNC_1(FUNC_0(VAR_4->i_type));

    char *VAR_5, *VAR_6;
    if ((VAR_3 != ((void*)0)) && *VAR_3)
        VAR_5 = FUNC_4 (VAR_3);
    else
        VAR_5 = ((void*)0);

    FUNC_6 (&VAR_1);
    VAR_6 = (char *)VAR_4->value.psz;
    VAR_4->value.psz = VAR_5;
    VAR_0 = 1;
    FUNC_5 (&VAR_1);

    FUNC_3 (VAR_6);
}
