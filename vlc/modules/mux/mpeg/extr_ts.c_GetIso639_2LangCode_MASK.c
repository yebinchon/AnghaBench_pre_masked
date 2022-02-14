
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char const* psz_iso639_2T; } ;
typedef TYPE_1__ iso639_lang_t ;


 TYPE_1__* FUNC_0 (char const*) ;
 TYPE_1__* FUNC_1 (char const*) ;
 TYPE_1__* FUNC_2 (char const*) ;
 int FUNC_3 (char const*) ;

__attribute__((used)) static const char *FUNC_4(const char *VAR_0)
{
    const iso639_lang_t *VAR_1;

    if (FUNC_3(VAR_0) == 2)
    {
        VAR_1 = FUNC_0(VAR_0);
    }
    else
    {
        VAR_1 = FUNC_1(VAR_0);
        if (!*VAR_1->psz_iso639_2T)
            VAR_1 = FUNC_2(VAR_0);

    }

    return VAR_1->psz_iso639_2T;
}
