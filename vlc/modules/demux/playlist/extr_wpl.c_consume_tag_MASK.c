
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xml_reader_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char const*,char const*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char const**) ;

__attribute__((used)) static int FUNC_3( xml_reader_t* VAR_4, char const* VAR_5 )
{
    int VAR_6, VAR_7 = 0;
    char const *VAR_8;

    if( FUNC_1( VAR_4 ) == 1 )
        return VAR_1;

    while( ( VAR_6 = FUNC_2( VAR_4, &VAR_8 ) ) > 0 )
    {
        if( VAR_6 == VAR_2 && !FUNC_0( VAR_8, VAR_5 ) )
        {
            if( --VAR_7 < 0 )
                return VAR_1;
        }
        else if( VAR_6 == VAR_3 && !FUNC_0( VAR_8, VAR_5 ) )
        {
            if( FUNC_1( VAR_4 ) != 1 )
                ++VAR_7;
        }
    }

    return VAR_0;
}
