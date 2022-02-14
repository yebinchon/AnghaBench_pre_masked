
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u_int ;
struct TYPE_2__ {struct tty_term* string; } ;
struct tty_term {scalar_t__ references; scalar_t__ type; struct tty_term* name; struct tty_term* codes; TYPE_1__ value; } ;


 int FUNC_0 (struct tty_term*,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct tty_term*) ;
 size_t FUNC_2 () ;

void
FUNC_3(struct tty_term *VAR_2)
{
 u_int VAR_3;

 if (--VAR_2->references != 0)
  return;

 FUNC_0(VAR_2, VAR_1);

 for (VAR_3 = 0; VAR_3 < FUNC_2(); VAR_3++) {
  if (VAR_2->codes[VAR_3].type == VAR_0)
   FUNC_1(VAR_2->codes[VAR_3].value.string);
 }
 FUNC_1(VAR_2->codes);

 FUNC_1(VAR_2->name);
 FUNC_1(VAR_2);
}
