
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int ;
struct utf8_data {size_t size; int data; } ;
typedef int key_code ;
struct TYPE_3__ {int key; char* string; } ;


 int VAR_0 ;
 int VAR_1 ;
 char VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 scalar_t__ VAR_23 ;
 TYPE_1__* VAR_24 ;
 int FUNC_0 (char*,int ,size_t) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char*,int,char*,int) ;
 int FUNC_3 (char*,char*,int) ;
 size_t FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (int,struct utf8_data*) ;
 int FUNC_6 (char*,int,char*,int) ;

const char *
FUNC_7(key_code VAR_25)
{
 static char VAR_26[32];
 char VAR_27[8];
 u_int VAR_28;
 struct utf8_data VAR_29;
 size_t VAR_30;

 *VAR_26 = '\0';


 if (VAR_25 == VAR_16)
  return ("None");


 if (VAR_25 == VAR_21)
  return ("Unknown");
 if (VAR_25 == VAR_0)
  return ("Any");
 if (VAR_25 == VAR_5)
  return ("FocusIn");
 if (VAR_25 == VAR_6)
  return ("FocusOut");
 if (VAR_25 == VAR_19)
  return ("PasteStart");
 if (VAR_25 == VAR_18)
  return ("PasteEnd");
 if (VAR_25 == VAR_10)
  return ("Mouse");
 if (VAR_25 == VAR_3)
  return ("Dragging");
 if (VAR_25 == VAR_12)
  return ("MouseMovePane");
 if (VAR_25 == VAR_13)
  return ("MouseMoveStatus");
 if (VAR_25 == VAR_14)
  return ("MouseMoveStatusLeft");
 if (VAR_25 == VAR_15)
  return ("MouseMoveStatusRight");
 if (VAR_25 == VAR_11)
  return ("MouseMoveBorder");
 if (VAR_25 >= VAR_22 && VAR_25 < VAR_22 + VAR_17) {
  FUNC_2(VAR_26, sizeof VAR_26, "User%u", (u_int)(VAR_25 - VAR_22));
  return (VAR_26);
 }


 if (VAR_25 & VAR_7) {
  FUNC_2(VAR_26, sizeof VAR_26, "%c", (int)(VAR_25 & 0xff));
  return (VAR_26);
 }







 if ((VAR_25 & VAR_8) == 0)
     VAR_25 = ' ' | VAR_2 | (VAR_25 & VAR_9);


 if (VAR_25 & VAR_2)
  FUNC_3(VAR_26, "C-", sizeof VAR_26);
 if (VAR_25 & VAR_4)
  FUNC_3(VAR_26, "M-", sizeof VAR_26);
 if (VAR_25 & VAR_20)
  FUNC_3(VAR_26, "S-", sizeof VAR_26);
 VAR_25 &= VAR_8;


 for (VAR_28 = 0; VAR_28 < FUNC_1(VAR_24); VAR_28++) {
  if (VAR_25 == VAR_24[VAR_28].key)
   break;
 }
 if (VAR_28 != FUNC_1(VAR_24)) {
  FUNC_3(VAR_26, VAR_24[VAR_28].string, sizeof VAR_26);
  return (VAR_26);
 }


 if (VAR_25 > 127 && VAR_25 < VAR_1) {
  if (FUNC_5(VAR_25, &VAR_29) == VAR_23) {
   VAR_30 = FUNC_4(VAR_26);
   FUNC_0(VAR_26 + VAR_30, VAR_29.data, VAR_29.size);
   VAR_26[VAR_30 + VAR_29.size] = '\0';
   return (VAR_26);
  }
 }


 if (VAR_25 == 127 || VAR_25 > 255) {
  FUNC_2(VAR_26, sizeof VAR_26, "Invalid#%llx", VAR_25);
  return (VAR_26);
 }


 if (VAR_25 <= 32) {
  if (VAR_25 == 0 || VAR_25 > 26)
   FUNC_6(VAR_27, sizeof VAR_27, "C-%c", (int)(64 + VAR_25));
  else
   FUNC_6(VAR_27, sizeof VAR_27, "C-%c", (int)(96 + VAR_25));
 } else if (VAR_25 >= 32 && VAR_25 <= 126) {
  VAR_27[0] = VAR_25;
  VAR_27[1] = '\0';
 } else if (VAR_25 >= 128)
  FUNC_6(VAR_27, sizeof VAR_27, "\\%llo", VAR_25);

 FUNC_3(VAR_26, VAR_27, sizeof VAR_26);
 return (VAR_26);
}
