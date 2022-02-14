
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int psz_string; } ;
typedef TYPE_1__ vlc_value_t ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1( vlc_value_t VAR_0, vlc_value_t VAR_1 )
{
    if( !VAR_0.psz_string )
        return !VAR_1.psz_string ? 0 : -1;
    else
        return !VAR_1.psz_string ? 1 : FUNC_0( VAR_0.psz_string, VAR_1.psz_string );
}
