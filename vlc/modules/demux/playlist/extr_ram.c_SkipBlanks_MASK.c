
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static const char *FUNC_0( const char *VAR_0, size_t VAR_1 )
{
    while( VAR_1 > 0 ) {
        switch( *VAR_0 )
        {
            case ' ':
            case '\t':
            case '\r':
            case '\n':
                --VAR_1;
                ++VAR_0;
                break;
            default:
                VAR_1 = 0;
        }
    }
    return VAR_0;
}
