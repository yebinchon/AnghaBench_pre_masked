
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t FUNC_0 (char const*,size_t) ;

__attribute__((used)) static size_t FUNC_1( const char *VAR_0, size_t VAR_1,
                                   bool VAR_2 )
{
    if( VAR_2 )
    {
        size_t VAR_3 = 0;
        for( size_t VAR_4=0; VAR_4<VAR_1/2; VAR_4++ )
        {
            if(VAR_0[0] == 0 && VAR_0[1] == 0)
                break;
            VAR_3 += 2;
            VAR_0 += 2;
        }
        return VAR_3;
    }
    else return FUNC_0( VAR_0, VAR_1 );
}
