
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int u_int ;
typedef int u_char ;
struct utf8_data {int size; } ;
typedef int key_code ;
typedef enum utf8_state { ____Placeholder_utf8_state } utf8_state ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char const**) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char const*,char*,int*) ;
 scalar_t__ FUNC_3 (char const*,char*) ;
 int FUNC_4 (char const*,int) ;
 int FUNC_5 (char const*) ;
 int FUNC_6 (struct utf8_data*,int) ;
 int FUNC_7 (struct utf8_data*,int*) ;
 int FUNC_8 (struct utf8_data*,int) ;

key_code
FUNC_9(const char *VAR_8)
{
 static const char *VAR_9 = "!#()+,-.0123456789:;<=>?'\r\t";
 key_code VAR_10;
 u_int VAR_11;
 key_code VAR_12;
 struct utf8_data VAR_13;
 u_int VAR_14;
 enum utf8_state VAR_15;
 wchar_t VAR_16;


 if (FUNC_3(VAR_8, "None") == 0)
  return (VAR_4);
 if (FUNC_3(VAR_8, "Any") == 0)
  return (VAR_0);


 if (VAR_8[0] == '0' && VAR_8[1] == 'x') {
         if (FUNC_2(VAR_8 + 2, "%x", &VAR_11) != 1)
                 return (VAR_5);
  if (VAR_11 > 0x1fffff)
                 return (VAR_5);
         return (VAR_11);
 }


 VAR_12 = 0;
 if (VAR_8[0] == '^' && VAR_8[1] != '\0') {
  VAR_12 |= VAR_3;
  VAR_8++;
 }
 VAR_12 |= FUNC_0(&VAR_8);
 if (VAR_8 == ((void*)0) || VAR_8[0] == '\0')
  return (VAR_5);


 if (VAR_8[1] == '\0' && (u_char)VAR_8[0] <= 127) {
  VAR_10 = (u_char)VAR_8[0];
  if (VAR_10 < 32 || VAR_10 == 127)
   return (VAR_5);
 } else {

  if ((VAR_15 = FUNC_8(&VAR_13, (u_char)*VAR_8)) == VAR_7) {
   if (FUNC_5(VAR_8) != VAR_13.size)
    return (VAR_5);
   for (VAR_14 = 1; VAR_14 < VAR_13.size; VAR_14++)
    VAR_15 = FUNC_6(&VAR_13, (u_char)VAR_8[VAR_14]);
   if (VAR_15 != VAR_6)
    return (VAR_5);
   if (FUNC_7(&VAR_13, &VAR_16) != VAR_6)
    return (VAR_5);
   return (VAR_16 | VAR_12);
  }


  VAR_10 = FUNC_1(VAR_8);
  if (VAR_10 == VAR_5)
   return (VAR_5);
 }


 if (VAR_10 < VAR_1 && (VAR_12 & VAR_3) && !FUNC_4(VAR_9, VAR_10)) {
  if (VAR_10 >= 97 && VAR_10 <= 122)
   VAR_10 -= 96;
  else if (VAR_10 >= 64 && VAR_10 <= 95)
   VAR_10 -= 64;
  else if (VAR_10 == 32)
   VAR_10 = 0;
  else if (VAR_10 == 63)
   VAR_10 = VAR_2;
  else
   return (VAR_5);
  VAR_12 &= ~VAR_3;
 }

 return (VAR_10 | VAR_12);
}
