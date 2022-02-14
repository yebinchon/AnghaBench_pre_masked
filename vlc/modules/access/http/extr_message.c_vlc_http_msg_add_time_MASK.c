
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct vlc_http_msg {int dummy; } ;
struct tm {size_t tm_wday; size_t tm_mon; int tm_sec; int tm_min; int tm_hour; scalar_t__ tm_year; int tm_mday; } ;


 int * FUNC_0 (int const*,struct tm*) ;
 int * VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (struct vlc_http_msg*,char const*,char*,int ,int ,int ,scalar_t__,int ,int ,int ) ;

int FUNC_2(struct vlc_http_msg *VAR_2, const char *VAR_3,
                          const time_t *VAR_4)
{
    struct tm VAR_5;

    if (FUNC_0(VAR_4, &VAR_5) == ((void*)0))
        return -1;
    return FUNC_1(VAR_2, VAR_3,
                                   "%s, %02d %s %04d %02d:%02d:%02d GMT",
                                   VAR_0[VAR_5.tm_wday], VAR_5.tm_mday,
                                   VAR_1[VAR_5.tm_mon],
                                   1900 + VAR_5.tm_year,
                                   VAR_5.tm_hour, VAR_5.tm_min, VAR_5.tm_sec);
}
