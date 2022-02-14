
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct view {int dummy; } ;
struct ref_format {int end; int start; } ;
struct ref {int name; struct ref* next; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct view*,char const*,int ) ;
 struct ref_format* FUNC_1 (int ,struct ref const*) ;
 struct ref* FUNC_2 (char const*) ;
 int VAR_3 ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (char*,size_t*,char*,char const*,int ,int ,int ) ;
 scalar_t__ FUNC_5 (struct view*,int ) ;

__attribute__((used)) static void
FUNC_6(struct view *VAR_4, const char *VAR_5)
{
 char VAR_6[VAR_1];
 const struct ref *VAR_7;
 size_t VAR_8 = 0;
 const char *VAR_9 = "Refs: ";

 VAR_7 = FUNC_2(VAR_5);
 if (!VAR_7) {
  if (FUNC_5(VAR_4, VAR_2) && FUNC_3())
   FUNC_0(VAR_4, VAR_9, VAR_0);
  return;
 }

 for (; VAR_7; VAR_7 = VAR_7->next) {
  const struct ref *VAR_10 = VAR_7;
  const struct ref_format *VAR_11 = FUNC_1(VAR_3, VAR_10);

  if (!FUNC_4(VAR_6, &VAR_8, "%s%s%s%s", VAR_9,
     VAR_11->start, VAR_10->name, VAR_11->end))
   return;
  VAR_9 = ", ";
 }

 if (VAR_8 == 0)
  return;

 FUNC_0(VAR_4, VAR_6, VAR_0);
}
