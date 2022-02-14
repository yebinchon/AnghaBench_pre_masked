
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlc_memstream {char* ptr; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (char const) ;
 scalar_t__ FUNC_2 (unsigned char) ;
 scalar_t__ FUNC_3 (unsigned char) ;
 int * FUNC_4 (char const*,unsigned char) ;
 scalar_t__ FUNC_5 (struct vlc_memstream*) ;
 int FUNC_6 (struct vlc_memstream*) ;
 int FUNC_7 (struct vlc_memstream*,char*,unsigned char) ;
 int FUNC_8 (struct vlc_memstream*,unsigned char) ;

__attribute__((used)) static char *FUNC_9(const char *VAR_0, const char *VAR_1)
{
    FUNC_0(VAR_0 && VAR_1);

    bool VAR_2 = 0;
    for (size_t VAR_3 = 0; VAR_0[VAR_3] != '\0'; VAR_3++)
        if (VAR_0[VAR_3] == '%' && !(FUNC_1(VAR_0[VAR_3+1]) && FUNC_1(VAR_0[VAR_3+2])))
        {
            VAR_2 = 1;
            break;
        }

    struct vlc_memstream VAR_4;

    FUNC_6(&VAR_4);

    for (size_t VAR_5 = 0; VAR_0[VAR_5] != '\0'; VAR_5++)
    {
        unsigned char VAR_6 = VAR_0[VAR_5];

        if (FUNC_2(VAR_6) || FUNC_3(VAR_6) || (FUNC_4(VAR_1, VAR_6) != ((void*)0))
         || (VAR_6 == '%' && !VAR_2))
            FUNC_8(&VAR_4, VAR_6);
        else
            FUNC_7(&VAR_4, "%%%02hhX", VAR_6);
    }

    if (FUNC_5(&VAR_4))
        return ((void*)0);
    return VAR_4.ptr;
}
