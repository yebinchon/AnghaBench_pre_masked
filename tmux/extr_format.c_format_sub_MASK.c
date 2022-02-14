
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct format_modifier {int argc; int * argv; } ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (char const*,char const*,char const*,int) ;
 int * FUNC_1 (int ,char) ;
 char* FUNC_2 (char const*) ;

__attribute__((used)) static char *
FUNC_3(struct format_modifier *VAR_2, const char *VAR_3, const char *VAR_4,
    const char *VAR_5)
{
 char *VAR_6;
 int VAR_7 = VAR_0;

 if (VAR_2->argc >= 3 && FUNC_1(VAR_2->argv[2], 'i') != ((void*)0))
  VAR_7 |= VAR_1;
 VAR_6 = FUNC_0(VAR_4, VAR_5, VAR_3, VAR_7);
 if (VAR_6 == ((void*)0))
  return (FUNC_2(VAR_3));
 return (VAR_6);
}
