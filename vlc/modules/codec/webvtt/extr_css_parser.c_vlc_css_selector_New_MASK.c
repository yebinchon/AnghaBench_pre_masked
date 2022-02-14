
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int p_first; int * pp_append; } ;
struct TYPE_6__ {int type; TYPE_1__ specifiers; int combinator; int psz_name; } ;
typedef TYPE_2__ vlc_css_selector_t ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int,int) ;
 int FUNC_1 (char const*) ;

vlc_css_selector_t * FUNC_2( int VAR_1, const char *VAR_2 )
{
    vlc_css_selector_t *VAR_3 = FUNC_0(1, sizeof(*VAR_3));
    VAR_3->psz_name = FUNC_1(VAR_2);
    VAR_3->type = VAR_1;
    VAR_3->combinator = VAR_0;
    VAR_3->specifiers.pp_append = &VAR_3->specifiers.p_first;
    return VAR_3;
}
