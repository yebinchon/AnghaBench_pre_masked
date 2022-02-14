
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlc_plugin_symbol {void* addr; } ;


 void** FUNC_0 (char const**,void**,int ) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(void *VAR_1, const char *VAR_2,
                                 void **restrict VAR_3)
{
    if (VAR_2 == ((void*)0))
    {
        *VAR_3 = ((void*)0);
        return 0;
    }

    const void **VAR_4 = FUNC_0(&VAR_2, &VAR_1, VAR_0);

    if (VAR_4 == ((void*)0))
        return -1;

    const struct vlc_plugin_symbol *VAR_5 = *VAR_4;

    *VAR_3 = VAR_5->addr;
    return 0;
}
