
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;
struct vlc_http_msg {char*** headers; int count; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 int FUNC_0 (char**,char*,char*,char,char*) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char*,int) ;
 char*** FUNC_4 (char***,int) ;
 scalar_t__ FUNC_5 (char const*,char*) ;
 char* FUNC_6 (char const*) ;
 size_t FUNC_7 (char*,char*) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (char**,char const*,int ) ;
 int FUNC_10 (char const*) ;
 size_t FUNC_11 (struct vlc_http_msg*,char const*) ;

__attribute__((used)) static int FUNC_12(struct vlc_http_msg *VAR_2, const char *VAR_3,
                                    const char *VAR_4, va_list VAR_5)
{
    if (!FUNC_10(VAR_3))
    {
        VAR_1 = VAR_0;
        return -1;
    }

    char *VAR_6;
    int VAR_7 = FUNC_9(&VAR_6, VAR_4, VAR_5);
    if (FUNC_8(VAR_7 < 0))
        return -1;


    for (char *VAR_8 = VAR_6; *VAR_8; VAR_8++)
        if (*VAR_8 == '\r' || *VAR_8 == '\n')
            *VAR_8 = ' ';


    size_t VAR_9 = FUNC_7(VAR_6, "\t ");
    if (VAR_9 > 0)
    {
        FUNC_1((unsigned)VAR_7 >= VAR_9);
        FUNC_3(VAR_6, VAR_6 + VAR_9, VAR_7 - VAR_9 + 1);
        VAR_7 -= VAR_9;
    }


    while (VAR_7 > 0 && (VAR_6[VAR_7 - 1] == '\t' || VAR_6[VAR_7 - 1] == ' '))
        VAR_6[--VAR_7] = '\0';



    ssize_t VAR_10 = FUNC_11(VAR_2, VAR_3);
    if (VAR_10 >= 0 && FUNC_5(VAR_3, "Set-Cookie"))
    {
        char *VAR_11;
        char VAR_12 = FUNC_5(VAR_3, "Cookie") ? ',' : ';';

        int VAR_13 = FUNC_0(&VAR_11, "%s%c %s", VAR_2->headers[VAR_10][1], VAR_12, VAR_6);

        FUNC_2(VAR_6);

        if (FUNC_8(VAR_13 == -1))
            return -1;

        FUNC_2(VAR_2->headers[VAR_10][1]);
        VAR_2->headers[VAR_10][1] = VAR_11;
        return 0;
    }

    char *(*VAR_14)[2] = FUNC_4(VAR_2->headers, sizeof (char *[2]) * (VAR_2->count + 1));
    if (FUNC_8(VAR_14 == ((void*)0)))
    {
        FUNC_2(VAR_6);
        return -1;
    }

    VAR_2->headers = VAR_14;
    VAR_14 += VAR_2->count;

    VAR_14[0][0] = FUNC_6(VAR_3);
    if (FUNC_8(VAR_14[0][0] == ((void*)0)))
    {
        FUNC_2(VAR_6);
        return -1;
    }

    VAR_14[0][1] = VAR_6;
    VAR_2->count++;
    return 0;
}
