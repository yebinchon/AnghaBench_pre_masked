
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ident {char const* email; char const* name; } ;
typedef enum author { ____Placeholder_author } author ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 char const* FUNC_1 (char const*) ;
 char const* FUNC_2 (char const*) ;

const char *
FUNC_3(const struct ident *VAR_4, int VAR_5, enum author VAR_6)
{
 bool VAR_7 = FUNC_0(VAR_5);
 bool VAR_8 = VAR_6 == VAR_0 || !VAR_7;

 if (VAR_6 == VAR_3 || !VAR_4)
  return "";
 if (VAR_6 == VAR_1 && VAR_4->email)
  return VAR_4->email;
 if (VAR_6 == VAR_2 && VAR_4->email)
  return FUNC_2(VAR_4->email);
 if (VAR_8 && VAR_4->name)
  return FUNC_1(VAR_4->name);
 return VAR_4->name;
}
