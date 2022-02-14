
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int u_char ;
struct utf8_data {int have; int size; int width; int* data; } ;
typedef enum utf8_state { ____Placeholder_utf8_state } utf8_state ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (struct utf8_data*,int *) ;
 int FUNC_2 (int ) ;

enum utf8_state
FUNC_3(struct utf8_data *VAR_3, u_char VAR_4)
{
 wchar_t VAR_5;
 int VAR_6;

 if (VAR_3->have >= VAR_3->size)
  FUNC_0("UTF-8 character overflow");
 if (VAR_3->size > sizeof VAR_3->data)
  FUNC_0("UTF-8 character size too large");

 if (VAR_3->have != 0 && (VAR_4 & 0xc0) != 0x80)
  VAR_3->width = 0xff;

 VAR_3->data[VAR_3->have++] = VAR_4;
 if (VAR_3->have != VAR_3->size)
  return (VAR_2);

 if (VAR_3->width == 0xff)
  return (VAR_1);

 if (FUNC_1(VAR_3, &VAR_5) != VAR_0)
  return (VAR_1);
 if ((VAR_6 = FUNC_2(VAR_5)) < 0)
  return (VAR_1);
 VAR_3->width = VAR_6;

 return (VAR_0);
}
