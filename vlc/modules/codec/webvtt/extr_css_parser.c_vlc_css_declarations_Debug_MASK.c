
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* psz_property; struct TYPE_3__* p_next; int expr; } ;
typedef TYPE_1__ vlc_css_declaration_t ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static void FUNC_2( const vlc_css_declaration_t *VAR_0, int VAR_1 )
{
    while( VAR_0 )
    {
        for(int VAR_2=0;VAR_2<VAR_1;VAR_2++) FUNC_0(" ");
        FUNC_0("declaration: %s\n", VAR_0->psz_property );
        FUNC_1( VAR_0->expr, VAR_1 + 1 );
        VAR_0 = VAR_0->p_next;
    }
}
