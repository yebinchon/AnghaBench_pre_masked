
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct view_column {int dummy; } ;
struct enum_map_entry {int namelen; } ;
typedef enum view_column_type { ____Placeholder_view_column_type } view_column_type ;
typedef enum status_code { ____Placeholder_status_code } status_code ;
typedef int buf ;
struct TYPE_2__ {int size; struct enum_map_entry* entries; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (struct enum_map_entry const,char const*,size_t) ;
 scalar_t__ FUNC_2 (struct enum_map_entry const,char const*,size_t) ;
 scalar_t__ FUNC_3 (char*,int,char const*) ;
 int FUNC_4 (char const*,int,char const*,char const**) ;
 int FUNC_5 (struct view_column**,char const*,char const**) ;
 size_t FUNC_6 (char const*) ;
 char* FUNC_7 (char const*,char*) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static enum status_code
FUNC_8(struct view_column **VAR_2, const char *VAR_3, const char *VAR_4[])
{
 char VAR_5[VAR_0];
 const char *VAR_6 = FUNC_3(VAR_5, sizeof(VAR_5), VAR_3) ? VAR_5 : VAR_3;
 const char *VAR_7;

 if ((VAR_7 = FUNC_7(VAR_6, "-view-"))) {
  const char *VAR_8 = VAR_7 + FUNC_0("-view-");
  size_t VAR_9 = FUNC_6(VAR_8);
  enum view_column_type VAR_10;

  for (VAR_10 = 0; VAR_10 < VAR_1->size; VAR_10++) {
   const struct enum_map_entry *VAR_11 = &VAR_1->entries[VAR_10];

   if (FUNC_1(*VAR_11, VAR_8, VAR_9))
    return FUNC_4(VAR_6, VAR_10, ((void*)0), VAR_4);

   if (FUNC_2(*VAR_11, VAR_8, VAR_9))
    return FUNC_4(VAR_6, VAR_10,
        VAR_8 + VAR_11->namelen + 1,
        VAR_4);
  }
 }

 return FUNC_5(VAR_2, VAR_6, VAR_4);
}
