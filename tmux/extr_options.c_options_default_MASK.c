
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union options_value {int number; int style; int string; } ;
typedef size_t u_int ;
struct options_table_entry {int flags; int type; int default_num; int default_str; int ** default_arr; } ;
struct options_entry {union options_value value; } ;
struct options {int dummy; } ;


 int VAR_0 ;


 int VAR_1 ;
 int FUNC_0 (struct options_entry*,int ,int *) ;
 int FUNC_1 (struct options_entry*,size_t,int *,int ,int *) ;
 struct options_entry* FUNC_2 (struct options*,struct options_table_entry const*) ;
 int FUNC_3 (int *,int *,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int ) ;

struct options_entry *
FUNC_6(struct options *VAR_2, const struct options_table_entry *VAR_3)
{
 struct options_entry *VAR_4;
 union options_value *VAR_5;
 u_int VAR_6;

 VAR_4 = FUNC_2(VAR_2, VAR_3);
 VAR_5 = &VAR_4->value;

 if (VAR_3->flags & VAR_0) {
  if (VAR_3->default_arr == ((void*)0)) {
   FUNC_0(VAR_4, VAR_3->default_str, ((void*)0));
   return (VAR_4);
  }
  for (VAR_6 = 0; VAR_3->default_arr[VAR_6] != ((void*)0); VAR_6++)
   FUNC_1(VAR_4, VAR_6, VAR_3->default_arr[VAR_6], 0, ((void*)0));
  return (VAR_4);
 }

 switch (VAR_3->type) {
 case 129:
  VAR_5->string = FUNC_5(VAR_3->default_str);
  break;
 case 128:
  FUNC_4(&VAR_5->style, &VAR_1);
  FUNC_3(&VAR_5->style, &VAR_1, VAR_3->default_str);
  break;
 default:
  VAR_5->number = VAR_3->default_num;
  break;
 }
 return (VAR_4);
}
