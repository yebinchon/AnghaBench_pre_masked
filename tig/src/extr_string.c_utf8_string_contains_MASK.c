
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int category; } ;
typedef TYPE_1__ utf8proc_property_t ;
typedef int uint8_t ;
typedef scalar_t__ ssize_t ;
typedef int int32_t ;


 scalar_t__ FUNC_0 (char const*) ;
 TYPE_1__* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *,scalar_t__,int *) ;

__attribute__((used)) static bool
FUNC_3(const char *VAR_0, int VAR_1)
{
 ssize_t VAR_2 = FUNC_0(VAR_0);

 while (VAR_2 > 0) {
  int32_t VAR_3;
  ssize_t VAR_4 = FUNC_2((uint8_t *) VAR_0, VAR_2, &VAR_3);
  const utf8proc_property_t *VAR_5;

  if (VAR_4 <= 0)
   break;

  VAR_5 = FUNC_1(VAR_3);
  if (VAR_5->category & VAR_1)
   return 1;

  VAR_0 += VAR_4;
  VAR_2 -= VAR_4;
 }

 return 0;
}
