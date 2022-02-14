
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int* bytes; int value; } ;
struct TYPE_4__ {int multibytes; } ;
struct key {TYPE_2__ data; TYPE_1__ modifiers; } ;
struct TYPE_6__ {int file; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 () ;
 TYPE_3__ VAR_0 ;
 int FUNC_3 (struct key*) ;
 int FUNC_4 (int*) ;

int
FUNC_5(void)
{
 if (FUNC_2()) {
  static struct key VAR_1;
  static int VAR_2;

  if (!VAR_1.modifiers.multibytes || VAR_2 >= FUNC_4(VAR_1.data.bytes)) {
   if (!FUNC_3(&VAR_1))
    return 0;
   VAR_2 = 0;
  }

  if (!VAR_1.modifiers.multibytes) {
   if (VAR_1.data.value < 128)
    return VAR_1.data.value;
   FUNC_0("Only ASCII control characters can be used in prompts: %d", VAR_1.data.value);
  }

  return VAR_1.data.bytes[VAR_2++];
 }

 return FUNC_1(VAR_0.file);
}
