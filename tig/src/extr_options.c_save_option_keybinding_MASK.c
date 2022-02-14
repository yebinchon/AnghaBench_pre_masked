
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct run_request {char const** argv; } ;
struct request_info {int name; } ;
struct keymap {int name; } ;
typedef enum request { ____Placeholder_request } request ;
typedef int FILE ;


 char const* FUNC_0 (int ) ;
 char* FUNC_1 (struct run_request const*) ;
 int FUNC_2 (int *,char*,char const*,...) ;

__attribute__((used)) static bool
FUNC_3(void *VAR_0, const char *VAR_1, struct keymap *VAR_2,
         enum request VAR_3, const char *VAR_4,
         const struct request_info *VAR_5,
         const struct run_request *VAR_6)
{
 FILE *VAR_7 = VAR_0;

 if (VAR_1 && !FUNC_2(VAR_7, "\n# %s", VAR_1))
  return 0;

 if (!FUNC_2(VAR_7, "\nbind %-10s %-15s ", FUNC_0(VAR_2->name), VAR_4))
  return 0;

 if (VAR_5) {
  return FUNC_2(VAR_7, "%s", FUNC_0(VAR_5->name));

 } else {
  const char *VAR_8 = FUNC_1(VAR_6);
  int VAR_9;

  for (VAR_9 = 0; VAR_6->argv[VAR_9]; VAR_9++) {
   if (!FUNC_2(VAR_7, "%s%s", VAR_8, VAR_6->argv[VAR_9]))
    return 0;
   VAR_8 = " ";
  }

  return 1;
 }
}
