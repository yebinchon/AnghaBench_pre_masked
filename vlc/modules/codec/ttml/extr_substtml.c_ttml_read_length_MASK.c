
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {double member_0; float i_value; int unit; int member_1; } ;
typedef TYPE_1__ ttml_length_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 float FUNC_0 (char const*,char**) ;

__attribute__((used)) static ttml_length_t FUNC_1( const char *VAR_4 )
{
    ttml_length_t VAR_5 = { 0.0, VAR_3 };

    char* VAR_6 = ((void*)0);
    float VAR_7 = FUNC_0( VAR_4, &VAR_6 );
    VAR_5.i_value = VAR_7;
    if( VAR_6 )
    {
        if( *VAR_6 == 'c' || *VAR_6 == 'r' )
            VAR_5.unit = VAR_0;
        else if( *VAR_6 == '%' )
            VAR_5.unit = VAR_1;
        else if( *VAR_6 == 'p' && *(VAR_6 + 1) == 'x' )
            VAR_5.unit = VAR_2;
    }
    return VAR_5;
}
