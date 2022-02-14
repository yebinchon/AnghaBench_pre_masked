
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int value ;
struct option_info {char* type; int name; } ;
typedef int name ;
typedef enum status_code { ____Placeholder_status_code } status_code ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct option_info*,char*,int) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*,size_t,size_t*,char*,char const*,char*,char const*,char*) ;

__attribute__((used)) static enum status_code
FUNC_5(struct option_info VAR_2[], size_t VAR_3, char VAR_4[], size_t VAR_5)
{
 char VAR_6[VAR_0];
 char VAR_7[VAR_0];
 size_t VAR_8 = 0;
 const char *VAR_9 = ":";
 int VAR_10;

 VAR_4[0] = 0;

 for (VAR_10 = 0; VAR_10 < VAR_3; VAR_10++) {
  struct option_info *VAR_11 = &VAR_2[VAR_10];
  const char *VAR_12 = "=";

  if (!FUNC_0(VAR_6, sizeof(VAR_6), VAR_11->name)
      || !FUNC_2(VAR_11, VAR_7, sizeof(VAR_7)))
   return FUNC_1("No space left in buffer");

  if (!FUNC_3(VAR_6, "display")) {
   VAR_6[0] = 0;
   VAR_12 = "";

  }

  if (!FUNC_3(VAR_11->type, "bool") && !FUNC_3(VAR_7, "yes")) {
   if (!*VAR_6) {
    VAR_9 = ":yes,";
    continue;
   }






  }

  if (!FUNC_3(VAR_11->type, "int") && !FUNC_3(VAR_7, "0"))
   continue;

  if (!FUNC_4(VAR_4, VAR_5, &VAR_8, "%s%s%s%s",
        VAR_9, VAR_6, VAR_12, VAR_7))
   return FUNC_1("No space left in buffer");

  VAR_9 = ",";
 }

 return VAR_1;
}
