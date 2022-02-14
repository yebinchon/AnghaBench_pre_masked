
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct ref_format {char* member_0; char* member_1; } const ref_format ;
struct ref {size_t type; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ FUNC_0 (struct ref const*) ;
 scalar_t__ FUNC_1 (struct ref const*) ;

const struct ref_format *
FUNC_2(struct ref_format **VAR_3, const struct ref *VAR_4)
{
 static const struct ref_format VAR_5 = { "", "" };

 if (VAR_3) {
  struct ref_format *VAR_6 = VAR_3[VAR_4->type];

  if (!VAR_6 && FUNC_1(VAR_4))
   VAR_6 = VAR_3[VAR_2];
  if (!VAR_6 && FUNC_0(VAR_4))
   VAR_6 = VAR_3[VAR_1];
  if (!VAR_6)
   VAR_6 = VAR_3[VAR_0];
  if (VAR_6)
   return VAR_6;
 }

 return &VAR_5;
}
