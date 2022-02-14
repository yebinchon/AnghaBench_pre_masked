
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xml_reader_t ;
typedef int stream_t ;
typedef int filter_t ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (char*,char const*) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *,char const*) ;
 int * FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,char const**) ;

__attribute__((used)) static int FUNC_9( filter_t *VAR_3, const char *VAR_4,
                                     bool VAR_5 )
{
    int VAR_6 = VAR_1;
    stream_t *VAR_7 = FUNC_5( VAR_3, VAR_4 );

    if( !VAR_7 )
        return VAR_0;

    xml_reader_t *VAR_8 = FUNC_6( VAR_3, VAR_7 );

    if( !VAR_8 )
    {
        FUNC_4( VAR_7 );
        return VAR_0;
    }

    const char *VAR_9;
    int VAR_10;
    while( ( VAR_10 = FUNC_8( VAR_8, &VAR_9 ) ) > 0 )
    {
        if( VAR_10 == VAR_2 && !FUNC_3( "family", VAR_9 ) && VAR_5 )
        {
            if( ( VAR_6 = FUNC_1( VAR_3, VAR_8 ) ) )
                break;
        }
        else if( VAR_10 == VAR_2 && !FUNC_3( "family", VAR_9 ) && !VAR_5 )
        {
            if( ( VAR_6 = FUNC_0( VAR_3, VAR_8 ) ) )
                break;
        }
        else if( VAR_10 == VAR_2 && !FUNC_3( "alias", VAR_9 ) && VAR_5 )
        {
            if( ( VAR_6 = FUNC_2( VAR_3, VAR_8 ) ) )
                break;
        }
    }

    FUNC_7( VAR_8 );
    FUNC_4( VAR_7 );
    return VAR_6;
}
