
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct format_modifier {int argc; char** argv; } ;
typedef int regex_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (char const*,char const*,int) ;
 scalar_t__ FUNC_1 (int *,char const*,int) ;
 scalar_t__ FUNC_2 (int *,char const*,int ,int *,int ) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (char const*,char) ;
 char* FUNC_5 (char*) ;

__attribute__((used)) static char *
FUNC_6(struct format_modifier *VAR_4, const char *VAR_5, const char *VAR_6)
{
 const char *VAR_7 = "";
 regex_t VAR_8;
 int VAR_9 = 0;

 if (VAR_4->argc >= 1)
  VAR_7 = VAR_4->argv[0];
 if (FUNC_4(VAR_7, 'r') == ((void*)0)) {
  if (FUNC_4(VAR_7, 'i') != ((void*)0))
   VAR_9 |= VAR_0;
  if (FUNC_0(VAR_5, VAR_6, VAR_9) != 0)
   return (FUNC_5("0"));
 } else {
  VAR_9 = VAR_1|VAR_3;
  if (FUNC_4(VAR_7, 'i') != ((void*)0))
   VAR_9 |= VAR_2;
  if (FUNC_1(&VAR_8, VAR_5, VAR_9) != 0)
   return (FUNC_5("0"));
  if (FUNC_2(&VAR_8, VAR_6, 0, ((void*)0), 0) != 0) {
   FUNC_3(&VAR_8);
   return (FUNC_5("0"));
  }
  FUNC_3(&VAR_8);
 }
 return (FUNC_5("1"));
}
