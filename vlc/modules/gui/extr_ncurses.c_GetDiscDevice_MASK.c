
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char const*) ;
 size_t FUNC_1 (char*,char*) ;
 char* FUNC_2 (char const*) ;
 int FUNC_3 (char const*,char const*,size_t) ;

__attribute__((used)) static char *FUNC_4(const char *VAR_0)
{
    static const struct { const char *s; size_t n; const char *v; } VAR_1[] =
    {
        { "cdda://", 7, "cd-audio", },
        { "dvd://", 6, "dvd", },
        { "vcd://", 6, "vcd", },
    };
    char *VAR_2;

    for (unsigned VAR_3 = 0; VAR_3 < sizeof VAR_1 / sizeof *VAR_1; VAR_3++) {
        size_t VAR_4 = VAR_1[VAR_3].n;
        if (!FUNC_3(VAR_0, VAR_1[VAR_3].s, VAR_4)) {
            if (VAR_0[VAR_4] == '@' || VAR_0[VAR_4] == '\0')
                return FUNC_0(VAR_1[VAR_3].v);

            return FUNC_2(VAR_0 + VAR_4);
        }
    }

    VAR_2 = FUNC_2(VAR_0);

    if (VAR_2)
        VAR_2[FUNC_1(VAR_2, "@")] = '\0';

    return VAR_2;
}
