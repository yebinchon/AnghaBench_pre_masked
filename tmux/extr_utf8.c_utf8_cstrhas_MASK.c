
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct utf8_data {scalar_t__ size; int data; } ;


 int FUNC_0 (struct utf8_data*) ;
 scalar_t__ FUNC_1 (int ,int ,scalar_t__) ;
 struct utf8_data* FUNC_2 (char const*) ;

int
FUNC_3(const char *VAR_0, const struct utf8_data *VAR_1)
{
 struct utf8_data *VAR_2, *VAR_3;
 int VAR_4 = 0;

 VAR_2 = FUNC_2(VAR_0);
 for (VAR_3 = VAR_2; VAR_3->size != 0; VAR_3++) {
  if (VAR_3->size != VAR_1->size)
   continue;
  if (FUNC_1(VAR_3->data, VAR_1->data, VAR_3->size) == 0) {
   VAR_4 = 1;
   break;
  }
 }
 FUNC_0(VAR_2);

 return (VAR_4);
}
