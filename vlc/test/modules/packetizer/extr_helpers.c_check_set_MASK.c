
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct results_s {size_t offset; } ;
typedef size_t ssize_t ;


 int FUNC_0 (char*,size_t,int) ;

__attribute__((used)) static int FUNC_1( const uint8_t *VAR_0, const uint8_t *VAR_1,
                      const struct results_s *VAR_2, size_t VAR_3,
                      ssize_t VAR_4,
                      const uint8_t *(*VAR_5)(const uint8_t *, const uint8_t *))
{
    const uint8_t *VAR_6 = VAR_0;
    size_t VAR_7 = 0;
    while( VAR_6 != ((void*)0) )
    {
        VAR_6 = VAR_5( VAR_6, VAR_1 );
        if( VAR_6 == ((void*)0) )
            break;
        FUNC_0("- entry %zu offset %ld\n", VAR_7, VAR_6 - VAR_0);
        if( VAR_7 == VAR_3 )
            break;
        if( VAR_2[VAR_7].offset + VAR_4 != (size_t) (VAR_6 - VAR_0) )
            return 1;
        VAR_7++;
        VAR_6++;
    }

    if( VAR_6 != ((void*)0) || VAR_7 != VAR_3 )
        return 1;

    return 0;
}
