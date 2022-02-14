
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_fourcc_t ;
struct vlc_memstream {char* ptr; } ;


 scalar_t__ FUNC_0 (struct vlc_memstream*) ;
 scalar_t__ FUNC_1 (struct vlc_memstream*) ;
 int FUNC_2 (struct vlc_memstream*,char*,...) ;
 int FUNC_3 (struct vlc_memstream*,char) ;
 int FUNC_4 (struct vlc_memstream*,char const*) ;

__attribute__((used)) static char * FUNC_5( const char *VAR_0, vlc_fourcc_t VAR_1, int VAR_2,
                            const char *VAR_3, const char *VAR_4 )
{
    struct vlc_memstream VAR_5;
    unsigned char VAR_6;

    if (FUNC_1(&VAR_5))
        return ((void*)0);

    if( VAR_0 == ((void*)0) || !*VAR_0 )
        VAR_0 = "stream-%n-%c.%m";

    while ((VAR_6 = *(VAR_0++)) != '\0')
    {
        if (VAR_6 != '%')
        {
            FUNC_3(&VAR_5, VAR_6);
            continue;
        }

        switch (VAR_6 = *(VAR_0++))
        {
            case 'n':
                FUNC_2(&VAR_5, "%d", VAR_2);
                break;
            case 'c':
                FUNC_2(&VAR_5, "%4.4s", (char *)&VAR_1);
                break;
            case 'm':
                FUNC_4(&VAR_5, VAR_4);
                break;
            case 'a':
                FUNC_4(&VAR_5, VAR_3);
                break;
            case '\0':
                FUNC_3(&VAR_5, '%');
                goto out;
            default:
                FUNC_2(&VAR_5, "%%%c", (int) VAR_6);
                break;
        }
    }
out:
    if (FUNC_0(&VAR_5))
        return ((void*)0);
    return VAR_5.ptr;
}
