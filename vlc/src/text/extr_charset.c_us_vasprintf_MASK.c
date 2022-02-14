
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;
typedef scalar_t__ locale_t ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ,char*,int *) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (char**,char const*,int ) ;

int FUNC_4( char **VAR_1, const char *VAR_2, va_list VAR_3 )
{
    locale_t VAR_4 = FUNC_1( VAR_0, "C", ((void*)0) );
    locale_t VAR_5 = FUNC_2( VAR_4 );

    int VAR_6 = FUNC_3( VAR_1, VAR_2, VAR_3 );

    if ( VAR_4 != (locale_t)0 )
    {
        FUNC_2( VAR_5 );
        FUNC_0( VAR_4 );
    }

    return VAR_6;
}
