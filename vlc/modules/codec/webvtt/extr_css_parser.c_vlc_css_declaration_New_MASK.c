
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int psz_property; } ;
typedef TYPE_1__ vlc_css_declaration_t ;


 TYPE_1__* FUNC_0 (int,int) ;
 int FUNC_1 (char const*) ;

vlc_css_declaration_t * FUNC_2( const char *VAR_0 )
{
    vlc_css_declaration_t *VAR_1 = FUNC_0(1, sizeof(*VAR_1));
    VAR_1->psz_property = FUNC_1(VAR_0);
    return VAR_1;
}
