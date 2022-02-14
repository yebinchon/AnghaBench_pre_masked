
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int psz_text; } ;
typedef TYPE_1__ text_segment_t ;


 TYPE_1__* FUNC_0 (int,int) ;
 int FUNC_1 (char const*) ;

text_segment_t *FUNC_2( const char *VAR_0 )
{
    text_segment_t* VAR_1 = FUNC_0( 1, sizeof(*VAR_1) );
    if( !VAR_1 )
        return ((void*)0);

    if ( VAR_0 )
        VAR_1->psz_text = FUNC_1( VAR_0 );

    return VAR_1;
}
