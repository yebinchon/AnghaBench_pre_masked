
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int multibytes; } ;
struct TYPE_3__ {int bytes; } ;
struct key {TYPE_2__ modifiers; TYPE_1__ data; } ;
typedef enum status_code { ____Placeholder_status_code } status_code ;


 int VAR_0 ;
 int FUNC_0 (char*,char const*) ;
 size_t FUNC_1 (char const*) ;
 int FUNC_2 (int ,char const*,size_t) ;
 int FUNC_3 (char*,int,char const*) ;
 size_t FUNC_4 (char const*) ;
 scalar_t__ FUNC_5 (char const*,size_t) ;

__attribute__((used)) static enum status_code
FUNC_6(struct key *VAR_1, const char **VAR_2, size_t VAR_3,
  const char *VAR_4, const char *VAR_5)
{
 const char *VAR_6 = VAR_4 ? VAR_4 : *VAR_2 + VAR_3;
 size_t VAR_7 = FUNC_4(VAR_6);
 const char *VAR_8 = VAR_6 + VAR_7;

 if (FUNC_1(VAR_6) < VAR_7 || FUNC_5(VAR_6, VAR_7) == 0)
  return FUNC_0("Error parsing UTF-8 bytes: %s", VAR_6);

 FUNC_2(VAR_1->data.bytes, VAR_6, VAR_7);
 VAR_1->modifiers.multibytes = 1;
 if (VAR_5) {
  *VAR_2 = VAR_5 + 1;
  if (!VAR_4 && VAR_8 + 1 < VAR_5)
   return FUNC_3("Ignoring text after key mapping: %.*s",
    (int) (VAR_5 - VAR_8), VAR_8);
 } else {
  *VAR_2 = VAR_8;
 }

 return VAR_0;
}
