
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int dummy; } ;


 int VAR_0 ;
 char* FUNC_0 (char const*) ;
 int VAR_1 ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char const*,struct stat*) ;
 int FUNC_3 (char const*,struct stat*) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5 (const char *VAR_2, struct stat *VAR_3, bool VAR_4)
{
    const char *VAR_5 = FUNC_0 (VAR_2);
    if (FUNC_4(VAR_5 == ((void*)0)))
    {
        VAR_1 = VAR_0;
        return -1;
    }

    int VAR_6 = VAR_4 ? FUNC_3 (VAR_5, VAR_3)
                    : FUNC_2 (VAR_5, VAR_3);
    FUNC_1 (VAR_5);
    return VAR_6;
}
