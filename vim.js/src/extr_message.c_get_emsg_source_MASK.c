
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int char_u ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (char*) ;
 int * FUNC_2 (unsigned int) ;
 scalar_t__ FUNC_3 () ;
 int * VAR_0 ;
 int FUNC_4 (char*,char*,int *) ;

__attribute__((used)) static char_u *
FUNC_5()
{
    char_u *VAR_1, *VAR_2;

    if (VAR_0 != ((void*)0) && FUNC_3())
    {
 VAR_2 = (char_u *)FUNC_1("Error detected while processing %s:");
 VAR_1 = FUNC_2((unsigned)(FUNC_0(VAR_0) + FUNC_0(VAR_2)));
 if (VAR_1 != ((void*)0))
     FUNC_4((char *)VAR_1, (char *)VAR_2, VAR_0);
 return VAR_1;
    }
    return ((void*)0);
}
