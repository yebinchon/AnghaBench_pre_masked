
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* psz_text; } ;
typedef TYPE_1__ text_segment_t ;


 char* FUNC_0 (char*,char) ;

__attribute__((used)) static void FUNC_1( text_segment_t *VAR_0 )
{

    char *VAR_1 = VAR_0->psz_text;
    while( (VAR_1 = FUNC_0( VAR_1, '\n' )) )
        *VAR_1 = ' ';
}
