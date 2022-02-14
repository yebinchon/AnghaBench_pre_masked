
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmdline_info {int dummy; } ;
typedef int char_u ;


 scalar_t__ FUNC_0 (unsigned int) ;
 int FUNC_1 (struct cmdline_info*) ;

char_u *
FUNC_2()
{
    struct cmdline_info *VAR_0;

    VAR_0 = (struct cmdline_info *)FUNC_0((unsigned)sizeof(struct cmdline_info));
    if (VAR_0 != ((void*)0))
 FUNC_1(VAR_0);
    return (char_u *)VAR_0;
}
