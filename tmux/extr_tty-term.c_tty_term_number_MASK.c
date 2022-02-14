
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tty_term {TYPE_2__* codes; } ;
typedef enum tty_code_code { ____Placeholder_tty_code_code } tty_code_code ;
struct TYPE_3__ {int number; } ;
struct TYPE_4__ {scalar_t__ type; TYPE_1__ value; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct tty_term*,int) ;

int
FUNC_2(struct tty_term *VAR_1, enum tty_code_code VAR_2)
{
 if (!FUNC_1(VAR_1, VAR_2))
  return (0);
 if (VAR_1->codes[VAR_2].type != VAR_0)
  FUNC_0("not a number: %d", VAR_2);
 return (VAR_1->codes[VAR_2].value.number);
}
