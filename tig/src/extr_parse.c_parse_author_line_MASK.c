
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct time {int dummy; } ;
struct ident {int dummy; } ;
struct TYPE_2__ {char const* name; char const* email; } ;


 scalar_t__ FUNC_0 (char*) ;
 struct ident* FUNC_1 (char const*,char const*) ;
 int FUNC_2 (struct time*,char*) ;
 int FUNC_3 (struct time*,char*) ;
 char* FUNC_4 (char*,char) ;
 char* FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (char*) ;
 TYPE_1__ VAR_0 ;

void
FUNC_7(char *VAR_1, const struct ident **VAR_2, struct time *VAR_3)
{
 char *VAR_4 = FUNC_4(VAR_1, '<');
 char *VAR_5 = FUNC_4(VAR_1, '>');
 const char *VAR_6, *VAR_7 = "";

 if (VAR_4 && VAR_5)
  *VAR_4 = *VAR_5 = 0;
 VAR_6 = FUNC_5(VAR_1);
 if (VAR_4)
  VAR_7 = FUNC_5(VAR_4 + 1);
 if (!*VAR_6)
  VAR_6 = *VAR_7 ? VAR_7 : VAR_0.name;
 if (!*VAR_7)
  VAR_7 = *VAR_6 ? VAR_6 : VAR_0.email;

 *VAR_2 = FUNC_1(VAR_6, VAR_7);


 if (VAR_3 && VAR_5 && VAR_5[1] == ' ') {
  char *VAR_8 = VAR_5 + 2;
  char *VAR_9 = FUNC_4(VAR_8, ' ');

  FUNC_2(VAR_3, VAR_8);

  if (VAR_9 && FUNC_6(VAR_9) == FUNC_0(" +0700"))
   FUNC_3(VAR_3, VAR_9 + 1);
 }
}
