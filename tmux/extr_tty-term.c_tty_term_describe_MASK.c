
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tty_term {TYPE_2__* codes; } ;
typedef enum tty_code_code { ____Placeholder_tty_code_code } tty_code_code ;
struct TYPE_6__ {int name; } ;
struct TYPE_4__ {char* number; int flag; int string; } ;
struct TYPE_5__ {int type; TYPE_1__ value; } ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int ,int,int) ;
 TYPE_3__* VAR_4 ;
 int FUNC_1 (char*,int,char*,int,int ,...) ;

const char *
FUNC_2(struct tty_term *VAR_5, enum tty_code_code VAR_6)
{
 static char VAR_7[256];
 char VAR_8[128];

 switch (VAR_5->codes[VAR_6].type) {
 case 130:
  FUNC_1(VAR_7, sizeof VAR_7, "%4u: %s: [missing]",
      VAR_6, VAR_4[VAR_6].name);
  break;
 case 128:
  FUNC_0(VAR_8, VAR_5->codes[VAR_6].value.string, sizeof VAR_8,
      VAR_2|VAR_0|VAR_3|VAR_1);
  FUNC_1(VAR_7, sizeof VAR_7, "%4u: %s: (string) %s",
      VAR_6, VAR_4[VAR_6].name,
      VAR_8);
  break;
 case 129:
  FUNC_1(VAR_7, sizeof VAR_7, "%4u: %s: (number) %d",
      VAR_6, VAR_4[VAR_6].name,
      VAR_5->codes[VAR_6].value.number);
  break;
 case 131:
  FUNC_1(VAR_7, sizeof VAR_7, "%4u: %s: (flag) %s",
      VAR_6, VAR_4[VAR_6].name,
      VAR_5->codes[VAR_6].value.flag ? "true" : "false");
  break;
 }
 return (VAR_7);
}
