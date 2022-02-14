
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct utf8_data {int size; char* data; } ;


 int FUNC_0 (struct utf8_data*,struct utf8_data const*,int) ;

void
FUNC_1(struct utf8_data *VAR_0, const struct utf8_data *VAR_1)
{
 u_int VAR_2;

 FUNC_0(VAR_0, VAR_1, sizeof *VAR_0);

 for (VAR_2 = VAR_0->size; VAR_2 < sizeof VAR_0->data; VAR_2++)
  VAR_0->data[VAR_2] = '\0';
}
