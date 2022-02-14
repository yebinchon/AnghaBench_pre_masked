
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vout_window_t ;


 int FUNC_0 (int *,char*,char const*,...) ;

__attribute__((used)) static void FUNC_1(vout_window_t *VAR_0,
                                            const char *VAR_1, const char *VAR_2)
{
    if (VAR_2 != ((void*)0))
        FUNC_0(VAR_0, "fullscreen output %s (%s) added", VAR_1, VAR_2);
    else
        FUNC_0(VAR_0, "fullscreen output %s removed", VAR_1);
}
