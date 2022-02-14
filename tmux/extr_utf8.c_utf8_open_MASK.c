
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct utf8_data {int size; } ;
typedef enum utf8_state { ____Placeholder_utf8_state } utf8_state ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct utf8_data*,int ,int) ;
 int FUNC_1 (struct utf8_data*,int) ;

enum utf8_state
FUNC_2(struct utf8_data *VAR_2, u_char VAR_3)
{
 FUNC_0(VAR_2, 0, sizeof *VAR_2);
 if (VAR_3 >= 0xc2 && VAR_3 <= 0xdf)
  VAR_2->size = 2;
 else if (VAR_3 >= 0xe0 && VAR_3 <= 0xef)
  VAR_2->size = 3;
 else if (VAR_3 >= 0xf0 && VAR_3 <= 0xf4)
  VAR_2->size = 4;
 else
  return (VAR_0);
 FUNC_1(VAR_2, VAR_3);
 return (VAR_1);
}
