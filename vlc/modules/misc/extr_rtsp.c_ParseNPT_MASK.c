
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_tick_t ;
typedef scalar_t__ locale_t ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ,char*,int *) ;
 int FUNC_2 (char const*,char*,...) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (float) ;

__attribute__((used)) static vlc_tick_t FUNC_5 (const char *VAR_1)
{
    locale_t VAR_2 = FUNC_1 (VAR_0, "C", ((void*)0));
    locale_t VAR_3 = FUNC_3 (VAR_2);
    unsigned VAR_4, VAR_5;
    float VAR_6;

    if (FUNC_2 (VAR_1, "%u:%u:%f", &VAR_4, &VAR_5, &VAR_6) == 3)
        VAR_6 += ((VAR_4 * 60) + VAR_5) * 60;
    else
    if (FUNC_2 (VAR_1, "%f", &VAR_6) != 1)
        VAR_6 = 0.;

    if (VAR_2 != (locale_t)0)
    {
        FUNC_3 (VAR_3);
        FUNC_0 (VAR_2);
    }
    return FUNC_4( VAR_6 );
}
