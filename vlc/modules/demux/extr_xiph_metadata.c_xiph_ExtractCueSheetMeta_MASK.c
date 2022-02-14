
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (int) ;
 char* FUNC_1 (char const*) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (char const*,char const*,int) ;

__attribute__((used)) static char * FUNC_4( const char *VAR_0,
                                        const char *VAR_1, int VAR_2,
                                        bool VAR_3 )
{
    if( !FUNC_3( VAR_0, VAR_1, VAR_2 ) )
    {
        if( !VAR_3 )
            return FUNC_1( &VAR_0[VAR_2] );


        char *VAR_4 = FUNC_0( FUNC_2( VAR_0 ) - VAR_2 + 1 );
        if( VAR_4 )
        {
            char *VAR_5 = VAR_4;
            VAR_0 += VAR_2;
            bool VAR_6 = 0;
            while( *VAR_0 )
            {
                switch( *VAR_0 )
                {
                    case '\\':
                        if( VAR_6 )
                        {
                            VAR_6 = 0;
                            *(VAR_5++) = *VAR_0;
                        }
                        else
                        {
                            VAR_6 = 1;
                        }
                        break;
                    case '"':
                        if( VAR_6 )
                        {
                            VAR_6 = 0;
                            *(VAR_5++) = *VAR_0;
                        }
                        break;
                    default:
                        *(VAR_5++) = *VAR_0;
                        break;
                }
                VAR_0++;
            }
            *VAR_5 = 0;
            return VAR_4;
        }
    }
    return ((void*)0);
}
