
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct keymap {int dummy; } ;
struct key_combo {int member_0; int request; int member_2; struct keymap* member_1; } ;
typedef enum request { ____Placeholder_request } request ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (char*,int,int,int ,struct key_combo*) ;

enum request
FUNC_1(struct keymap *VAR_2)
{
 struct key_combo VAR_3 = { VAR_0, VAR_2, 0 };
 char *VAR_4 = FUNC_0("", 0, 0, VAR_1, &VAR_3);

 return VAR_4 ? VAR_3.request : VAR_0;
}
