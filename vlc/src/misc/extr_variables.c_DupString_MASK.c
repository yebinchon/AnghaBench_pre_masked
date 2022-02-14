
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* psz_string; } ;
typedef TYPE_1__ vlc_value_t ;


 char* FUNC_0 (char*) ;

__attribute__((used)) static void FUNC_1( vlc_value_t *VAR_0 )
{
    VAR_0->psz_string = FUNC_0( VAR_0->psz_string ? VAR_0->psz_string : "" );
}
