
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char const*,int) ;
 scalar_t__ FUNC_1 (unsigned char) ;

__attribute__((used)) static int FUNC_2( const char *VAR_0, size_t VAR_1)
{

    int VAR_2 = 0;
    int VAR_3;
    const char *VAR_4 = VAR_0 + VAR_1;

    VAR_0 = FUNC_0(VAR_0, VAR_1);

    VAR_3 = 0;
    while( (VAR_0 < VAR_4) && FUNC_1((unsigned char)*VAR_0) )
    {
        int VAR_5 = VAR_3*10 + (*VAR_0 - '0');
        if( VAR_5 < VAR_3 )
        {

            VAR_3 = 0;
            break;
        }
        VAR_3 = VAR_5;
        ++VAR_0;
    }
    VAR_2 = VAR_3;
    VAR_0 = FUNC_0(VAR_0, VAR_4-VAR_0);
    if( *VAR_0 == ':' )
    {
        ++VAR_0;
        VAR_0 = FUNC_0(VAR_0, VAR_4-VAR_0);
        VAR_2 = VAR_2 * 60;
        VAR_3 = 0;
        while( (VAR_0 < VAR_4) && FUNC_1((unsigned char)*VAR_0) )
        {
            int VAR_6 = VAR_3*10 + (*VAR_0 - '0');
            if( VAR_6 < VAR_3 )
            {

                VAR_3 = 0;
                break;
            }
            VAR_3 = VAR_6;
            ++VAR_0;
        }
        VAR_2 += VAR_3;
        VAR_0 = FUNC_0(VAR_0, VAR_4-VAR_0);
        if( *VAR_0 == ':' )
        {
            ++VAR_0;
            VAR_0 = FUNC_0(VAR_0, VAR_4-VAR_0);
            VAR_2 = VAR_2 * 60;
            VAR_3 = 0;
            while( (VAR_0 < VAR_4) && FUNC_1((unsigned char)*VAR_0) )
            {
                int VAR_7 = VAR_3*10 + (*VAR_0 - '0');
                if( VAR_7 < VAR_3 )
                {

                    VAR_3 = 0;
                    break;
                }
                VAR_3 = VAR_7;
                ++VAR_0;
            }
            VAR_2 += VAR_3;

        }
    }
    return VAR_2;
}
