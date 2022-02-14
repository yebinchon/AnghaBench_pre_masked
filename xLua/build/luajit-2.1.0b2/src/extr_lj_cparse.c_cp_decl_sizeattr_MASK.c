
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {int tmask; } ;
typedef int CTSize ;
typedef TYPE_1__ CPState ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,char) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static CTSize FUNC_2(CPState *VAR_1)
{
  CTSize VAR_2;
  uint32_t VAR_3 = VAR_1->tmask;
  VAR_1->tmask = VAR_0;
  FUNC_0(VAR_1, '(');
  VAR_2 = FUNC_1(VAR_1);
  VAR_1->tmask = VAR_3;
  FUNC_0(VAR_1, ')');
  return VAR_2;
}
