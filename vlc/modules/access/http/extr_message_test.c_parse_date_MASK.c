
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;
struct vlc_http_msg {int dummy; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct vlc_http_msg*,char*,char*,char const*) ;
 int FUNC_2 (struct vlc_http_msg*) ;
 scalar_t__ FUNC_3 (struct vlc_http_msg*) ;
 scalar_t__ FUNC_4 (struct vlc_http_msg*) ;
 scalar_t__ FUNC_5 (struct vlc_http_msg*) ;
 struct vlc_http_msg* FUNC_6 (char*,char*,char*,char*) ;

__attribute__((used)) static time_t FUNC_7(const char *VAR_0)
{
    struct vlc_http_msg *VAR_1;
    time_t VAR_2, VAR_3;

    VAR_1 = FUNC_6("GET", "http", "www.example.com", "/");
    FUNC_0(VAR_1 != ((void*)0));
    FUNC_0(FUNC_1(VAR_1, "Date", "%s", VAR_0) == 0);
    VAR_2 = FUNC_3(VAR_1);
    FUNC_0(FUNC_1(VAR_1, "Last-Modified", "%s", VAR_0) == 0);
    VAR_3 = FUNC_4(VAR_1);
    FUNC_0(FUNC_5(VAR_1) == 0);
    FUNC_0(FUNC_1(VAR_1, "Retry-After", "%s", VAR_0) == 0);
    FUNC_5(VAR_1);
    FUNC_2(VAR_1);

    FUNC_0(VAR_2 == VAR_3);
    return VAR_2;
}
