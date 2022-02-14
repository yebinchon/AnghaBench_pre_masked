
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ type; scalar_t__ function; int psz; } ;
typedef TYPE_1__ vlc_css_term_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;

void FUNC_2( vlc_css_term_t VAR_2 )
{
    if( VAR_2.type >= VAR_1 )
        FUNC_0( VAR_2.psz );

    if( VAR_2.type == VAR_0 )
    {
        if( VAR_2.function )
            FUNC_1( VAR_2.function );
    }
}
