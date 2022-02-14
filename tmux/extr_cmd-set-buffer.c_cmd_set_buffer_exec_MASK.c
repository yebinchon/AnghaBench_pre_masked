
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct paste_buffer {int dummy; } ;
struct cmdq_item {int dummy; } ;
struct cmd {int * entry; struct args* args; } ;
struct args {int argc; char const** argv; } ;
typedef enum cmd_retval { ____Placeholder_cmd_retval } cmd_retval ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (struct args*,char) ;
 scalar_t__ FUNC_1 (struct args*,char) ;
 int VAR_2 ;
 int FUNC_2 (struct cmdq_item*,char*,...) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,char const*,size_t) ;
 char* FUNC_5 (struct paste_buffer*,size_t*) ;
 int FUNC_6 (struct paste_buffer*) ;
 struct paste_buffer* FUNC_7 (char const*) ;
 struct paste_buffer* FUNC_8 (char const**) ;
 scalar_t__ FUNC_9 (char const*,char*,char**) ;
 scalar_t__ FUNC_10 (char*,size_t,char const*,char**) ;
 size_t FUNC_11 (char const*) ;
 char* FUNC_12 (size_t) ;
 char* FUNC_13 (char*,size_t) ;

__attribute__((used)) static enum cmd_retval
FUNC_14(struct cmd *VAR_3, struct cmdq_item *VAR_4)
{
 struct args *VAR_5 = VAR_3->args;
 struct paste_buffer *VAR_6;
 char *VAR_7, *VAR_8;
 const char *VAR_9, *VAR_10;
 size_t VAR_11, VAR_12;

 VAR_9 = FUNC_0(VAR_5, 'b');
 if (VAR_9 == ((void*)0))
  VAR_6 = ((void*)0);
 else
  VAR_6 = FUNC_7(VAR_9);

 if (VAR_3->entry == &VAR_2) {
  if (VAR_6 == ((void*)0))
   VAR_6 = FUNC_8(&VAR_9);
  if (VAR_6 == ((void*)0)) {
   FUNC_2(VAR_4, "no buffer");
   return (VAR_0);
  }
  FUNC_6(VAR_6);
  return (VAR_1);
 }

 if (FUNC_1(VAR_5, 'n')) {
  if (VAR_6 == ((void*)0))
   VAR_6 = FUNC_8(&VAR_9);
  if (VAR_6 == ((void*)0)) {
   FUNC_2(VAR_4, "no buffer");
   return (VAR_0);
  }
  if (FUNC_9(VAR_9, FUNC_0(VAR_5, 'n'), &VAR_8) != 0) {
   FUNC_2(VAR_4, "%s", VAR_8);
   FUNC_3(VAR_8);
   return (VAR_0);
  }
  return (VAR_1);
 }

 if (VAR_5->argc != 1) {
  FUNC_2(VAR_4, "no data specified");
  return (VAR_0);
 }
 if ((VAR_12 = FUNC_11(VAR_5->argv[0])) == 0)
  return (VAR_1);

 VAR_11 = 0;
 VAR_7 = ((void*)0);

 if (FUNC_1(VAR_5, 'a') && VAR_6 != ((void*)0)) {
  VAR_10 = FUNC_5(VAR_6, &VAR_11);
  VAR_7 = FUNC_12(VAR_11);
  FUNC_4(VAR_7, VAR_10, VAR_11);
 }

 VAR_7 = FUNC_13(VAR_7, VAR_11 + VAR_12);
 FUNC_4(VAR_7 + VAR_11, VAR_5->argv[0], VAR_12);
 VAR_11 += VAR_12;

 if (FUNC_10(VAR_7, VAR_11, VAR_9, &VAR_8) != 0) {
  FUNC_2(VAR_4, "%s", VAR_8);
  FUNC_3(VAR_7);
  FUNC_3(VAR_8);
  return (VAR_0);
 }

 return (VAR_1);
}
