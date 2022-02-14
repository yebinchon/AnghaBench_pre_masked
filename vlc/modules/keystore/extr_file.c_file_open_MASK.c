
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int,int ) ;
 scalar_t__ FUNC_3 (int) ;
 int * FUNC_4 (char const*,char const*) ;

__attribute__((used)) static int
FUNC_5(const char *VAR_1, const char *VAR_2, FILE **VAR_3)
{
    FILE *VAR_4 = FUNC_4(VAR_1, VAR_2);
    if (VAR_4 == ((void*)0))
        return -1;

    int VAR_5 = FUNC_1(VAR_4);
    if (VAR_5 == -1)
    {
        FUNC_0(VAR_4);
        return -1;
    }
    *VAR_3 = VAR_4;
    return VAR_5;
}
