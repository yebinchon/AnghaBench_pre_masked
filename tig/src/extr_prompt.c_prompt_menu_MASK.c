
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct menu_item {scalar_t__ hotkey; scalar_t__ text; } ;
struct TYPE_2__ {scalar_t__* bytes; } ;
struct key {TYPE_1__ data; } ;
typedef enum input_status { ____Placeholder_input_status } input_status ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;







 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__,struct key*) ;
 char FUNC_3 (struct key*) ;
 int FUNC_4 () ;
 int FUNC_5 (char*,char*,int,int) ;
 int FUNC_6 (char*,char*,char const*,scalar_t__,char const*) ;

bool
FUNC_7(const char *VAR_4, const struct menu_item *VAR_5, int *VAR_6)
{
 enum input_status VAR_7 = VAR_2;
 char VAR_8[128];
 struct key VAR_9;
 int VAR_10 = 0;

 while (VAR_5[VAR_10].text)
  VAR_10++;

 FUNC_0(VAR_10 > 0);

 FUNC_1(1);
 while (VAR_7 == VAR_2) {
  const struct menu_item *VAR_11 = &VAR_5[*VAR_6];
  const char VAR_12[] = { ' ', '[', (char) VAR_11->hotkey, ']', 0 };
  int VAR_13;

  if (!FUNC_5(VAR_8, "(%d of %d)", *VAR_6 + 1, VAR_10))
   VAR_8[0] = 0;

  FUNC_6(VAR_8, "%s %s%s", VAR_4, VAR_11->text,
         VAR_11->hotkey ? VAR_12 : "");

  switch (FUNC_2(VAR_0 - 1, &VAR_9)) {
  case 130:
  case 133:
  case '\n':
   VAR_7 = VAR_3;
   break;

  case 131:
  case 128:
   *VAR_6 = *VAR_6 - 1;
   if (*VAR_6 < 0)
    *VAR_6 = VAR_10 - 1;
   break;

  case 129:
  case 134:
   *VAR_6 = (*VAR_6 + 1) % VAR_10;
   break;

  case 132:
   VAR_7 = VAR_1;
   break;

  default:
   if (FUNC_3(&VAR_9) == 'C') {
    VAR_7 = VAR_1;
    break;
   }

   for (VAR_13 = 0; VAR_5[VAR_13].text; VAR_13++)
    if (VAR_5[VAR_13].hotkey == VAR_9.data.bytes[0]) {
     *VAR_6 = VAR_13;
     VAR_7 = VAR_3;
     break;
    }
  }
 }
 FUNC_1(0);

 FUNC_4();

 return VAR_7 != VAR_1;
}
