
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ locale_t ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ,char*,int *) ;
 float FUNC_2 (char const*,char**) ;
 scalar_t__ FUNC_3 (scalar_t__) ;

float FUNC_4( const char *VAR_1, char **VAR_2 )
{
    locale_t VAR_3 = FUNC_1 (VAR_0, "C", ((void*)0));
    locale_t VAR_4 = FUNC_3 (VAR_3);
    float VAR_5 = FUNC_2 (VAR_1, VAR_2);

    if (VAR_3 != (locale_t)0)
    {
        FUNC_3 (VAR_4);
        FUNC_0 (VAR_3);
    }
    return VAR_5;
}
