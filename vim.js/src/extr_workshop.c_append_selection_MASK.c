
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int linenr_T ;


 int VAR_0 ;
 char VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (void*,int) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static char *
FUNC_4(
 int VAR_2,
 char *VAR_3,
 int *VAR_4,
 int *VAR_5)
{
    char *VAR_6;
    int VAR_7;
    char *VAR_8;

    VAR_6 = (char *)FUNC_0((linenr_T)VAR_2);
    VAR_7 = FUNC_3(VAR_6);

    if ((*VAR_5 + VAR_7) <= *VAR_4)
    {
 VAR_8 = (char *) FUNC_1((void *) VAR_3, VAR_0 + *VAR_5 + VAR_7);
 if (*VAR_8 != VAR_1)
 {
     *VAR_4 = VAR_0 + *VAR_5 + VAR_7;
     VAR_3 = VAR_8;
 }
    }
    if ((*VAR_5 + VAR_7) > *VAR_4)
    {
 FUNC_2(&VAR_3[*VAR_5], VAR_6);
 *VAR_5 += VAR_7;
 VAR_3[*VAR_5++] = '\n';
    }

    return VAR_3;
}
