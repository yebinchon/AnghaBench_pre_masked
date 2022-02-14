
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;


 scalar_t__ FUNC_0 (char**,char*,char const*,char*,char const*,char*,int ) ;

__attribute__((used)) static char *
FUNC_1( const char *VAR_0, const char *VAR_1, bool VAR_2,
            uint16_t VAR_3 )
{
    char *VAR_4;

    return FUNC_0( &VAR_4, "%s://%s%s%s:%u", VAR_0,
                     VAR_2 ? "[" : "", VAR_1, VAR_2 ? "]" : "",
                     VAR_3 ) < 0 ? ((void*)0) : VAR_4;
}
