
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ int32_t ;
struct TYPE_6__ {scalar_t__ hi; } ;
struct TYPE_7__ {TYPE_1__ u32; } ;
typedef TYPE_2__ cTValue ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_2(cTValue *VAR_0)
{
  return (FUNC_1(VAR_0) ? FUNC_0(VAR_0) : (int32_t)VAR_0->u32.hi) >= 0;
}
