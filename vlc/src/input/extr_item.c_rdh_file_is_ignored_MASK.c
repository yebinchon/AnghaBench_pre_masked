
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlc_readdir_helper {int psz_ignored_exts; int b_show_hiddenfiles; } ;


 scalar_t__ FUNC_0 (char const*,int ) ;
 scalar_t__ FUNC_1 (char const*,char*) ;

__attribute__((used)) static bool FUNC_2(struct vlc_readdir_helper *VAR_0,
                                const char *VAR_1)
{
    return (VAR_1[0] == '\0'
         || FUNC_1(VAR_1, ".") == 0
         || FUNC_1(VAR_1, "..") == 0
         || (!VAR_0->b_show_hiddenfiles && VAR_1[0] == '.')
         || FUNC_0(VAR_1, VAR_0->psz_ignored_exts));
}
