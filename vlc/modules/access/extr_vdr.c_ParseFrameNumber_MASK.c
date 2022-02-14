
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int64_t ;


 int FUNC_0 (int,int) ;
 unsigned int FUNC_1 (char const*,char*,unsigned int*,unsigned int*,unsigned int*,unsigned int*) ;
 int FUNC_2 (char const*,int *,int) ;

__attribute__((used)) static int64_t FUNC_3( const char *VAR_0, float VAR_1 )
{
    unsigned VAR_2, VAR_3, VAR_4, VAR_5, VAR_6;


    VAR_6 = FUNC_1( VAR_0, "%u:%u:%u.%u", &VAR_2, &VAR_3, &VAR_4, &VAR_5 );
    if( VAR_6 >= 3 )
    {
        if( VAR_6 < 4 )
            VAR_5 = 1;
        int64_t VAR_7 = (int64_t)VAR_2 * 3600 + (int64_t)VAR_3 * 60 + VAR_4;
        return (int64_t)( VAR_7 * (double)VAR_1 ) + FUNC_0(1, VAR_5) - 1;
    }


    int64_t VAR_8 = FUNC_2( VAR_0, ((void*)0), 10 );
    return FUNC_0(1, VAR_8) - 1;
}
