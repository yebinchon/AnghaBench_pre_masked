
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct passwd {char const* pw_dir; } ;
typedef int buf ;


 int VAR_0 ;
 char* FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ,struct passwd*,char*,int,struct passwd**) ;
 int FUNC_2 () ;
 char* FUNC_3 (char const*) ;
 long FUNC_4 (int ) ;

__attribute__((used)) static char *FUNC_5 (void)
{

    const char *VAR_1 = FUNC_0 ("HOME");
    if (VAR_1 != ((void*)0))
        return FUNC_3 (VAR_1);
    return ((void*)0);
}
