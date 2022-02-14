
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nvlist_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char const*) ;
 int * FUNC_2 (char const*,char) ;

__attribute__((used)) static int
FUNC_3(const char *VAR_1, nvlist_t *VAR_2, nvlist_t *VAR_3)
{
 int VAR_4 = 0;

 if (FUNC_2(VAR_1, '@') != ((void*)0) || FUNC_2(VAR_1, '%') != ((void*)0)) {
  VAR_4 = (FUNC_0(VAR_0));
  goto out;
 }

 VAR_4 = FUNC_1(VAR_1);
 if (VAR_4 != 0)
  goto out;

out:
 return (VAR_4);
}
