
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct TYPE_3__* p_next; int p_declarations; int p_selectors; } ;
typedef TYPE_1__ vlc_css_rule_t ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static void FUNC_3( const vlc_css_rule_t *VAR_0, int VAR_1 )
{
    int VAR_2 = 0;
    while(VAR_0)
    {
        for(int VAR_3=0;VAR_3<VAR_1;VAR_3++) FUNC_0(" "); FUNC_0("rule %d:\n", VAR_2++);
        FUNC_2( VAR_0->p_selectors, VAR_1 + 1 );
        FUNC_1( VAR_0->p_declarations, VAR_1 + 1 );
        VAR_0 = VAR_0->p_next;
    }
}
