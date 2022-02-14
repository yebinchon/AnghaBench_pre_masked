
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint_t ;


 int VAR_0 ;
 int FUNC_0 (char const*,char const*,int) ;
 char* FUNC_1 (char const*,char) ;

__attribute__((used)) static int
FUNC_2(const char *VAR_1, const char *VAR_2, uint_t VAR_3)
{
 char *VAR_4;

 if (VAR_3 & VAR_0) {
  VAR_4 = FUNC_1(VAR_1, ',');
  if (VAR_4 != ((void*)0) && VAR_4 < VAR_2) {
   if (!FUNC_0(VAR_1, VAR_4, 1))
    return (0);
   VAR_1 = VAR_4 + 1;
  }
 }

 return (FUNC_0(VAR_1, VAR_2, 0));
}
