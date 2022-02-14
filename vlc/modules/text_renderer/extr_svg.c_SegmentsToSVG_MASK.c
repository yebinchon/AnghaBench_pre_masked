
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int psz_text; struct TYPE_3__* p_next; } ;
typedef TYPE_1__ text_segment_t ;


 scalar_t__ FUNC_0 (char**,char*,char*,int,char*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int ) ;

__attribute__((used)) static char * FUNC_3( text_segment_t *VAR_0, int VAR_1, int *VAR_2 )
{
    char *VAR_3 = ((void*)0);

    VAR_1 = 6 * VAR_1 / 100;
    *VAR_2 = 0;

    for( ; VAR_0; VAR_0 = VAR_0->p_next )
    {
        char *VAR_4 = VAR_3;
        char *VAR_5 = FUNC_2( VAR_0->psz_text );
        if( FUNC_0( &VAR_3, "%s<tspan x='0' dy='%upx'>%s</tspan>\n",
                                   (VAR_4) ? VAR_4 : "",
                                    VAR_1,
                                    VAR_5 ) < 0 )
            VAR_3 = ((void*)0);
        FUNC_1( VAR_4 );
        FUNC_1( VAR_5 );

        *VAR_2 += VAR_1;
    }

    return VAR_3;
}
