
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_css_term_t ;
typedef int vlc_css_expr_t ;


 int * FUNC_0 (int,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int ) ;

vlc_css_expr_t * FUNC_3( vlc_css_term_t VAR_0 )
{
    vlc_css_expr_t *VAR_1 = FUNC_0(1, sizeof(*VAR_1));
    if(!FUNC_2( VAR_1, 0, VAR_0 ))
    {
        FUNC_1(VAR_1);
        VAR_1 = ((void*)0);
    }
    return VAR_1;
}
