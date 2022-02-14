
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*) ;
 int FUNC_1 (void**) ;
 char* FUNC_2 (void*,char*) ;
 scalar_t__ FUNC_3 (int,char*,void***) ;
 char* FUNC_4 (char*,char) ;
 int FUNC_5 (char*,char*) ;
 scalar_t__ FUNC_6 (int ) ;
 char** FUNC_7 (char**,unsigned int) ;
 char* FUNC_8 (char*) ;

__attribute__((used)) static int FUNC_9(char const *VAR_0,
                       char ***restrict VAR_1, char ***restrict VAR_2)
{
    void **VAR_3;

    if (FUNC_3(-1, "pcm", &VAR_3) < 0)
        return -1;

    char **VAR_4 = ((void*)0), **VAR_5 = ((void*)0);
    unsigned VAR_6 = 0;
    bool VAR_7 = 0;

    for (size_t VAR_8 = 0; VAR_3[VAR_8] != ((void*)0); VAR_8++)
    {
        void *VAR_9 = VAR_3[VAR_8];

        char *VAR_10 = FUNC_2(VAR_9, "NAME");
        if (FUNC_6(VAR_10 == ((void*)0)))
            continue;

        char *VAR_11 = FUNC_2(VAR_9, "DESC");
        if (VAR_11 == ((void*)0))
            VAR_11 = FUNC_8 (VAR_10);
        for (char *VAR_12 = FUNC_4(VAR_11, '\n'); VAR_12; VAR_12 = FUNC_4(VAR_12, '\n'))
            *VAR_12 = ' ';

        VAR_4 = FUNC_7 (VAR_4, (VAR_6 + 1) * sizeof (*VAR_4));
        VAR_5 = FUNC_7 (VAR_5, (VAR_6 + 1) * sizeof (*VAR_5));
        VAR_4[VAR_6] = VAR_10;
        VAR_5[VAR_6] = VAR_11;
        VAR_6++;

        if (!FUNC_5(VAR_10, "default"))
            VAR_7 = 1;
    }

    FUNC_1(VAR_3);

    if (!VAR_7)
    {
        VAR_4 = FUNC_7 (VAR_4, (VAR_6 + 1) * sizeof (*VAR_4));
        VAR_5 = FUNC_7 (VAR_5, (VAR_6 + 1) * sizeof (*VAR_5));
        VAR_4[VAR_6] = FUNC_8 ("default");
        VAR_5[VAR_6] = FUNC_8 (FUNC_0("Default"));
        VAR_6++;
    }

    *VAR_1 = VAR_4;
    *VAR_2 = VAR_5;
    (void) VAR_0;
    return VAR_6;
}
