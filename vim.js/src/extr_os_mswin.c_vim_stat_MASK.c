
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int dummy; } ;
struct _stat {int dummy; } ;
typedef int char_u ;
typedef int buf ;
typedef int WCHAR ;


 scalar_t__ FUNC_0 () ;
 char VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_1 (char*,int *) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,struct stat*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *,int) ;
 int FUNC_7 (int *,struct _stat*) ;

int
FUNC_8(const char *VAR_5, struct stat *VAR_6)
{






    char VAR_7[VAR_2 + 1];

    char *VAR_8;

    FUNC_6((char_u *)VAR_7, (char_u *)VAR_5, sizeof(VAR_7) - 1);
    VAR_8 = VAR_7 + FUNC_4(VAR_7);
    if (VAR_8 > VAR_7)
 FUNC_2(VAR_7, VAR_8);
    if (VAR_8 > VAR_7 && (*VAR_8 == '\\' || *VAR_8 == '/') && VAR_8[-1] != ':')
 *VAR_8 = VAR_0;
    return FUNC_3(VAR_7, VAR_6);
}
