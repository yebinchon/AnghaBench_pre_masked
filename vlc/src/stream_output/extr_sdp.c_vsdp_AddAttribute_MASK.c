
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;
struct vlc_memstream {int dummy; } ;


 int FUNC_0 (struct vlc_memstream*,char*,char const*) ;
 int FUNC_1 (struct vlc_memstream*,char*) ;
 int FUNC_2 (struct vlc_memstream*,char const*,int ) ;

__attribute__((used)) static void FUNC_3(struct vlc_memstream *restrict VAR_0,
                              const char *VAR_1, const char *VAR_2, va_list VAR_3)
{
    if (VAR_2 == ((void*)0))
    {
        FUNC_0(VAR_0, "a=%s\r\n", VAR_1);
        return;
    }
    FUNC_0(VAR_0, "a=%s:", VAR_1);
    FUNC_2(VAR_0, VAR_2, VAR_3);
    FUNC_1(VAR_0, "\r\n");
}
