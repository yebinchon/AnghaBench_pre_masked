
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint_fast32_t ;
struct TYPE_2__ {uintptr_t i_code; char* psz; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 char const* FUNC_0 (char*) ;
 int FUNC_1 (char**,char*,char*,char*,char*,char*,char*,char const*) ;
 char const* FUNC_2 (char const*) ;
 TYPE_1__* VAR_7 ;
 int * FUNC_3 (uintptr_t,char*) ;
 char const* FUNC_4 (char const*) ;

char *FUNC_5 (uint_fast32_t VAR_8, bool VAR_9)
{
    const char *(*VAR_10)(const char *) = VAR_9 ? FUNC_4 : FUNC_2;
    const char *VAR_11;
    char *VAR_12, VAR_13[5];
    uintptr_t VAR_14 = VAR_8 & ~VAR_1;

    for (size_t VAR_15 = 0; VAR_15 < VAR_0; VAR_15++)
        if (VAR_7[VAR_15].i_code == VAR_14)
        {
            VAR_11 = VAR_7[VAR_15].psz;
            goto found;
        }

    if (FUNC_3 (VAR_14, VAR_13) == ((void*)0))
        return ((void*)0);
    VAR_11 = VAR_13;

found:
    if (FUNC_1 (&VAR_12, "%s%s%s%s%s%s",
                  (VAR_8 & VAR_4) ? VAR_10(FUNC_0("Ctrl+")) : "",
                  (VAR_8 & VAR_2) ? VAR_10(FUNC_0("Alt+")) : "",
                  (VAR_8 & VAR_6) ? VAR_10(FUNC_0("Shift+")) : "",
                  (VAR_8 & VAR_5) ? VAR_10(FUNC_0("Meta+")) : "",
                  (VAR_8 & VAR_3) ? VAR_10(FUNC_0("Command+")) : "",
                  VAR_10(VAR_11)) == -1)
        return ((void*)0);
    return VAR_12;
}
