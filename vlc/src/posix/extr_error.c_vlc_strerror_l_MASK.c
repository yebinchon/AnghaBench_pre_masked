
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ locale_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int ,char const*,scalar_t__) ;
 char* FUNC_3 (int,scalar_t__) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static const char *FUNC_5(int VAR_4, const char *VAR_5)
{
    int VAR_6 = VAR_3;
    locale_t VAR_7 = FUNC_2(VAR_2, VAR_5, (locale_t)0);

    if (FUNC_4(VAR_7 == (locale_t)0))
    {
        if (VAR_3 == VAR_1)
            VAR_7 = FUNC_2(VAR_2, "C", (locale_t)0);

        if (FUNC_4(VAR_7 == (locale_t)0))
        {
            FUNC_0(VAR_3 != VAR_0 && VAR_3 != VAR_1);
            VAR_3 = VAR_6;
            return "Error message unavailable";
        }
        VAR_3 = VAR_6;
    }

    const char *VAR_8 = FUNC_3(VAR_4, VAR_7);

    FUNC_1(VAR_7);
    return VAR_8;
}
