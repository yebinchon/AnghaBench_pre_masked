
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef long wchar_t ;
struct utf8_data {scalar_t__ size; } ;
struct cmdq_item {int dummy; } ;
struct cmd_find_state {int dummy; } ;
struct client {int dummy; } ;
struct args {char** argv; } ;
typedef long key_code ;


 long VAR_0 ;
 long VAR_1 ;
 long VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct args*,char) ;
 struct cmdq_item* FUNC_1 (struct client*,struct cmd_find_state*,struct cmdq_item*,long) ;
 int FUNC_2 (struct utf8_data*) ;
 long FUNC_3 (char const*) ;
 long FUNC_4 (char const*,char**,int) ;
 scalar_t__ FUNC_5 (struct utf8_data*,long*) ;
 struct utf8_data* FUNC_6 (char const*) ;

__attribute__((used)) static struct cmdq_item *
FUNC_7(struct client *VAR_4, struct cmd_find_state *VAR_5,
    struct cmdq_item *VAR_6, struct args *VAR_7, int VAR_8)
{
 const char *VAR_9 = VAR_7->argv[VAR_8];
 struct utf8_data *VAR_10, *VAR_11;
 wchar_t VAR_12;
 key_code VAR_13;
 char *VAR_14;
 long VAR_15;
 int VAR_16;

 if (FUNC_0(VAR_7, 'H')) {
  VAR_15 = FUNC_4(VAR_9, &VAR_14, 16);
  if (*VAR_9 =='\0' || VAR_15 < 0 || VAR_15 > 0xff || *VAR_14 != '\0')
   return (VAR_6);
  return (FUNC_1(VAR_4, VAR_5, VAR_6, VAR_0|VAR_15));
 }

 VAR_16 = FUNC_0(VAR_7, 'l');
 if (!VAR_16) {
  VAR_13 = FUNC_3(VAR_9);
  if (VAR_13 != VAR_1 && VAR_13 != VAR_2)
   return (FUNC_1(VAR_4, VAR_5, VAR_6, VAR_13));
  VAR_16 = 1;
 }
 if (VAR_16) {
  VAR_10 = FUNC_6(VAR_9);
  for (VAR_11 = VAR_10; VAR_11->size != 0; VAR_11++) {
   if (FUNC_5(VAR_11, &VAR_12) != VAR_3)
    continue;
   VAR_6 = FUNC_1(VAR_4, VAR_5, VAR_6, VAR_12);
  }
  FUNC_2(VAR_10);
 }
 return (VAR_6);
}
