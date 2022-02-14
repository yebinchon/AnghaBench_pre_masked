
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlc_memstream {int dummy; } ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int * FUNC_2 (char const*,int) ;
 int FUNC_3 (struct vlc_memstream*,char*,unsigned char) ;
 int FUNC_4 (struct vlc_memstream*,int) ;

__attribute__((used)) static void FUNC_5(struct vlc_memstream *VAR_0, int VAR_1, const char *VAR_2)
{
    if (FUNC_0(VAR_1) || FUNC_1(VAR_1) || (FUNC_2(VAR_2, VAR_1) != ((void*)0)))
        FUNC_4(VAR_0, VAR_1);
    else
        FUNC_3(VAR_0, "%%%02hhX", (unsigned char)VAR_1);
}
