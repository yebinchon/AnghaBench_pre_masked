
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ref_format {int end; int start; } ;
struct enum_map {int size; TYPE_1__* entries; } ;
typedef int name ;
typedef enum status_code { ____Placeholder_status_code } status_code ;
typedef enum reference_type { ____Placeholder_reference_type } reference_type ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,int ) ;
 int FUNC_1 (char*) ;
 struct enum_map* VAR_2 ;
 int FUNC_2 (char*,size_t,size_t*,char*,char const*,int ,char*,int ) ;

enum status_code
FUNC_3(struct ref_format **VAR_3, char VAR_4[], size_t VAR_5)
{
 const struct enum_map *VAR_6 = VAR_2;
 char VAR_7[VAR_0];
 enum reference_type VAR_8;
 size_t VAR_9 = 0;
 const char *VAR_10 = "";

 if (!VAR_3)
  return VAR_1;

 for (VAR_8 = 0; VAR_8 < VAR_6->size; VAR_8++) {
  struct ref_format *VAR_11 = VAR_3[VAR_8];

  if (!VAR_11)
   continue;

  if (!FUNC_0(VAR_7, sizeof(VAR_7), VAR_6->entries[VAR_8].name)
      || !FUNC_2(VAR_4, VAR_5, &VAR_9, "%s%s%s%s",
           VAR_10, VAR_11->start, VAR_7, VAR_11->end))
   return FUNC_1("No space left in buffer");

  VAR_10 = " ";
 }

 return VAR_1;
}
