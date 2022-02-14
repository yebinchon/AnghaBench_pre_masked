
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dirent {char const* d_name; } ;
typedef int DIR ;


 struct dirent* FUNC_0 (int *) ;

const char *FUNC_1(DIR *VAR_0)
{
    struct dirent *VAR_1 = FUNC_0 (VAR_0);
    return (VAR_1 != ((void*)0)) ? VAR_1->d_name : ((void*)0);
}
