
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
struct stat {int dummy; } ;
struct _stati64 {int dummy; } ;


 int FUNC_0 (int *,struct stat*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,char*) ;
 int * FUNC_3 (char const*) ;

int FUNC_4 (const char *VAR_0, struct stat *VAR_1)
{
    wchar_t *VAR_2 = FUNC_3 (VAR_0);
    if (VAR_2 == ((void*)0))
        return -1;

    FUNC_2 (sizeof (*VAR_1) == sizeof (struct _stati64),
                   "Mismatched struct stat definition.");

    int VAR_3 = FUNC_0 (VAR_2, VAR_1);
    FUNC_1 (VAR_2);
    return VAR_3;
}
