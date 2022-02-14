
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int char_u ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (char*) ;
 int * FUNC_2 (unsigned int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ VAR_1 ;
 int * VAR_2 ;
 int FUNC_4 (char*,char*,long) ;

__attribute__((used)) static char_u *
FUNC_5()
{
    char_u *VAR_3, *VAR_4;



    if (VAR_2 != ((void*)0)
     && (FUNC_3() || VAR_1 != VAR_0)
     && VAR_1 != 0)
    {
 VAR_4 = (char_u *)FUNC_1("line %4ld:");
 VAR_3 = FUNC_2((unsigned)(FUNC_0(VAR_4) + 20));
 if (VAR_3 != ((void*)0))
     FUNC_4((char *)VAR_3, (char *)VAR_4, (long)VAR_1);
 return VAR_3;
    }
    return ((void*)0);
}
