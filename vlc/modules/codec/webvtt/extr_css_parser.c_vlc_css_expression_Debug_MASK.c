
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {size_t i_count; TYPE_1__* seq; } ;
typedef TYPE_2__ vlc_css_expr_t ;
struct TYPE_4__ {int term; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static void FUNC_2( const vlc_css_expr_t *VAR_0, int VAR_1 )
{
    if( VAR_0 )
    {
        for(int VAR_2=0;VAR_2<VAR_1;VAR_2++) FUNC_0(" ");
        FUNC_0("expression: \n");
        for(size_t VAR_3=0; VAR_3<VAR_0->i_count; VAR_3++)
            FUNC_1( VAR_0->seq[VAR_3].term, VAR_1 + 1 );
    }
}
