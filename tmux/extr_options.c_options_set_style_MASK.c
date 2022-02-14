
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct style {int dummy; } ;
struct TYPE_2__ {struct style style; } ;
struct options_entry {TYPE_1__ value; } ;
struct options {int dummy; } ;


 scalar_t__ FUNC_0 (struct options_entry*) ;
 int FUNC_1 (char*,char const*) ;
 int VAR_0 ;
 struct options_entry* FUNC_2 (struct options*,int ) ;
 struct options_entry* FUNC_3 (struct options*,char const*) ;
 int FUNC_4 (struct options*,char const*) ;
 int FUNC_5 (struct style*,struct style*) ;
 int FUNC_6 (struct style*,int *,char const*) ;
 int FUNC_7 (struct style*,int *) ;

struct options_entry *
FUNC_8(struct options *VAR_1, const char *VAR_2, int VAR_3,
    const char *VAR_4)
{
 struct options_entry *VAR_5;
 struct style VAR_6;

 if (*VAR_2 == '@')
  FUNC_1("user option %s must be a string", VAR_2);

 VAR_5 = FUNC_3(VAR_1, VAR_2);
 if (VAR_5 != ((void*)0) && VAR_3 && FUNC_0(VAR_5))
  FUNC_5(&VAR_6, &VAR_5->value.style);
 else
  FUNC_7(&VAR_6, &VAR_0);
 if (FUNC_6(&VAR_6, &VAR_0, VAR_4) == -1)
  return (((void*)0));
 if (VAR_5 == ((void*)0)) {
  VAR_5 = FUNC_2(VAR_1, FUNC_4(VAR_1, VAR_2));
  if (VAR_5 == ((void*)0))
   return (((void*)0));
 }

 if (!FUNC_0(VAR_5))
  FUNC_1("option %s is not a style", VAR_2);
 FUNC_5(&VAR_5->value.style, &VAR_6);
 return (VAR_5);
}
