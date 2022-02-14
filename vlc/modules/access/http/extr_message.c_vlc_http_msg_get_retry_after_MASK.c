
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;
struct vlc_http_msg {int dummy; } ;


 unsigned long FUNC_0 (char const*,char**,int) ;
 int FUNC_1 (scalar_t__*) ;
 scalar_t__ FUNC_2 (char const*) ;
 char* FUNC_3 (struct vlc_http_msg const*,char*) ;

unsigned FUNC_4(const struct vlc_http_msg *VAR_0)
{
    const char *VAR_1 = FUNC_3(VAR_0, "Retry-After");
    if (VAR_1 == ((void*)0))
        return 0;

    char *VAR_2;
    unsigned long VAR_3 = FUNC_0(VAR_1, &VAR_2, 10);
    if (VAR_2 != VAR_1 && *VAR_2 == '\0')
        return VAR_3;

    time_t VAR_4 = FUNC_2(VAR_1);
    if (VAR_4 != (time_t)-1)
    {
        time_t VAR_5;

        FUNC_1(&VAR_5);
        if (VAR_4 >= VAR_5)
            return VAR_4 - VAR_5;
    }
    return 0;
}
