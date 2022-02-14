
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* psz_text; } ;
typedef TYPE_1__ text_segment_t ;


 scalar_t__ FUNC_0 (char**,char*,char*,char const*) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static bool FUNC_2( text_segment_t* VAR_0, const char* VAR_1 )
{
    char* VAR_2;
    if ( FUNC_0( &VAR_2, "%s%s", VAR_0->psz_text ? VAR_0->psz_text : "", VAR_1 ) < 0 )
        return 0;
    FUNC_1( VAR_0->psz_text );
    VAR_0->psz_text = VAR_2;
    return 1;
}
