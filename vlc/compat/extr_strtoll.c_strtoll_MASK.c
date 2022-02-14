
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*,char*) ;
 long long FUNC_1 (char const*,char**,int) ;

long long int FUNC_2( const char *VAR_0, char **VAR_1, int VAR_2 )
{
    long long VAR_3 = 0;
    int VAR_4 = 1, VAR_5 = VAR_2 ? VAR_2 : 10;

    VAR_0 += FUNC_0( VAR_0, "\t " );
    if( *VAR_0 == '-' )
    {
        VAR_4 = -1;
        VAR_0++;
    }


    if( *VAR_0 == '0' )
    {
        VAR_5 = 8;
        VAR_0++;

        if( *VAR_0 == 'x' )
        {
            VAR_5 = 16;
            VAR_0++;
        }
    }

    if( VAR_2 && VAR_5 != VAR_2 )
    {
        if( VAR_1 ) *VAR_1 = (char *)VAR_0;
        return VAR_3;
    }

    switch( VAR_5 )
    {
        case 10:
            while( *VAR_0 >= '0' && *VAR_0 <= '9' )
            {
                VAR_3 *= 10;
                VAR_3 += ( *VAR_0++ - '0' );
            }
            if( VAR_1 ) *VAR_1 = (char *)VAR_0;
            break;

        case 16:
            while( (*VAR_0 >= '0' && *VAR_0 <= '9') ||
                   (*VAR_0 >= 'a' && *VAR_0 <= 'f') ||
                   (*VAR_0 >= 'A' && *VAR_0 <= 'F') )
            {
                int VAR_6 = 0;
                if(*VAR_0 >= '0' && *VAR_0 <= '9') VAR_6 = *VAR_0 - '0';
                else if(*VAR_0 >= 'a' && *VAR_0 <= 'f') VAR_6 = *VAR_0 - 'a' +10;
                else if(*VAR_0 >= 'A' && *VAR_0 <= 'F') VAR_6 = *VAR_0 - 'A' +10;
                VAR_3 *= 16;
                VAR_3 += VAR_6;
                VAR_0++;
            }
            if( VAR_1 ) *VAR_1 = (char *)VAR_0;
            break;

        default:
            VAR_3 = FUNC_1( VAR_0, VAR_1, VAR_5 );
            break;
    }

    return VAR_3 * VAR_4;
}
