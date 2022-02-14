
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct error_messages_s {char const* psz_error; int const i_error; } ;



__attribute__((used)) static const char * FUNC_0( const int VAR_0,
                               const struct error_messages_s const *VAR_1 )
{
    int VAR_2 = 0;
    while( VAR_1[VAR_2].psz_error )
    {
        if ( VAR_1[VAR_2].i_error == VAR_0 )
            return VAR_1[VAR_2].psz_error;
        VAR_2++;
    }
    return "unknown error";
}
