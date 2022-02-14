
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct enum_map {int size; TYPE_1__* entries; } ;
typedef enum status_code { ____Placeholder_status_code } status_code ;
struct TYPE_2__ {unsigned int value; int name; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 char const* FUNC_1 (int ) ;
 int FUNC_2 (char*,char const*,char const*,char const*) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int,int*,char const*) ;
 int FUNC_4 (int*,char const*) ;
 int FUNC_5 (char const*,char*) ;
 int FUNC_6 (char const*,char*) ;

__attribute__((used)) static enum status_code
FUNC_7(const char *VAR_1, unsigned int *VAR_2, const char *VAR_3,
    const struct enum_map *VAR_4)
{
 bool VAR_5;
 enum status_code VAR_6;

 FUNC_0(VAR_4->size > 1);

 if (FUNC_3(VAR_4->entries, VAR_4->size, (int *) VAR_2, VAR_3))
  return VAR_0;

 VAR_6 = FUNC_4(&VAR_5, VAR_3);
 *VAR_2 = VAR_5 ? VAR_4->entries[1].value : VAR_4->entries[0].value;
 if (VAR_6 == VAR_0)
  return VAR_6;

 if (!FUNC_6(VAR_1, "date-display")) {
  const char *VAR_7 = "";

  if (!FUNC_5(VAR_3, "local"))
   VAR_7 = ", use the 'date-local' column option";
  else if (!FUNC_5(VAR_3, "short"))
   VAR_7 = ", use the 'custom' display mode and set 'date-format'";

  *VAR_2 = VAR_4->entries[1].value;
  return FUNC_2("'%s' is no longer supported for %s%s", VAR_3, VAR_1, VAR_7);
 }

 return FUNC_2("'%s' is not a valid value for %s; using %s",
       VAR_3, VAR_1, FUNC_1(VAR_4->entries[*VAR_2].name));
}
