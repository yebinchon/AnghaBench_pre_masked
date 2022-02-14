
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int value ;
typedef int type ;
struct view_column {size_t type; struct view_column* next; } ;
struct enum_map {TYPE_1__* entries; } ;
typedef enum status_code { ____Placeholder_status_code } status_code ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct view_column*,char*,int) ;
 int FUNC_3 (char*,size_t,size_t*,char*,char const*,char*,char*) ;
 struct enum_map* VAR_2 ;

enum status_code
FUNC_4(struct view_column *VAR_3, char VAR_4[], size_t VAR_5)
{
 const struct enum_map *VAR_6 = VAR_2;
 const char *VAR_7 = "";
 size_t VAR_8 = 0;
 char VAR_9[VAR_0];
 char VAR_10[VAR_0];

 for (; VAR_3; VAR_3 = VAR_3->next) {
  enum status_code VAR_11 = FUNC_2(VAR_3, VAR_10, sizeof(VAR_10));

  if (VAR_11 != VAR_1)
   return VAR_11;

  if (!FUNC_0(VAR_9, sizeof(VAR_9), VAR_6->entries[VAR_3->type].name)
      || !FUNC_3(VAR_4, VAR_5, &VAR_8, "%s%s%s",
           VAR_7, VAR_9, VAR_10))
   return FUNC_1("No space left in buffer");

  VAR_7 = " ";
 }

 return VAR_1;
}
