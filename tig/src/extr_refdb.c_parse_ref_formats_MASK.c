
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ref_format {int dummy; } ;
struct enum_map {int size; } ;
typedef enum status_code { ____Placeholder_status_code } status_code ;


 int VAR_0 ;
 int VAR_1 ;
 struct ref_format** FUNC_0 (int ,int) ;
 int FUNC_1 (struct ref_format**,char const*,struct enum_map const*) ;
 struct enum_map* VAR_2 ;

enum status_code
FUNC_2(struct ref_format ***VAR_3, const char *VAR_4[])
{
 const struct enum_map *VAR_5 = VAR_2;
 int VAR_6;

 if (!*VAR_3) {
  *VAR_3 = FUNC_0(VAR_2->size, sizeof(struct ref_format *));
  if (!*VAR_3)
   return VAR_0;
 }

 for (VAR_6 = 0; VAR_4[VAR_6]; VAR_6++) {
  enum status_code VAR_7 = FUNC_1(*VAR_3, VAR_4[VAR_6], VAR_5);
  if (VAR_7 != VAR_1)
   return VAR_7;
 }

 return VAR_1;
}
