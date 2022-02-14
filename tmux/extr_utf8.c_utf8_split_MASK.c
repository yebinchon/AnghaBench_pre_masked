
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
struct utf8_data {int size; int width; int data; } ;
typedef enum utf8_state { ____Placeholder_utf8_state } utf8_state ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char*,int ) ;

enum utf8_state
FUNC_4(wchar_t VAR_3, struct utf8_data *VAR_4)
{
 char VAR_5[VAR_0];
 int VAR_6;




 VAR_6 = FUNC_3(VAR_5, VAR_3);

 if (VAR_6 <= 0 || VAR_6 > (int)sizeof VAR_4->data)
  return (VAR_2);

 FUNC_0(VAR_4->data, VAR_5, VAR_6);
 VAR_4->size = VAR_6;

 VAR_4->width = FUNC_1(VAR_3);
 return (VAR_1);
}
