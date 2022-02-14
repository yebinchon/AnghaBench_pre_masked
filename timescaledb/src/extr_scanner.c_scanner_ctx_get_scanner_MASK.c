
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int index; } ;
typedef TYPE_1__ ScannerCtx ;
typedef int Scanner ;


 scalar_t__ FUNC_0 (int ) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 int * VAR_2 ;

__attribute__((used)) static inline Scanner *
FUNC_1(ScannerCtx *VAR_3)
{
 if (FUNC_0(VAR_3->index))
  return &VAR_2[VAR_1];
 else
  return &VAR_2[VAR_0];
}
