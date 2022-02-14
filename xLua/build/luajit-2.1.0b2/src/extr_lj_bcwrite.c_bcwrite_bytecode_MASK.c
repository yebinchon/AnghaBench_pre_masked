
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
typedef int jit_State ;
struct TYPE_10__ {int startins; } ;
struct TYPE_9__ {int sb; } ;
struct TYPE_8__ {scalar_t__ sizebc; int flags; scalar_t__ trace; } ;
typedef scalar_t__ MSize ;
typedef TYPE_1__ GCproto ;
typedef TYPE_2__ BCWriteCtx ;
typedef int BCReg ;
typedef scalar_t__ BCOp ;
typedef int BCIns ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int * FUNC_0 (int ) ;
 size_t FUNC_1 (int,int) ;
 int VAR_8 ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 char* FUNC_5 (char*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int *) ;
 TYPE_3__* FUNC_8 (int *,int) ;

__attribute__((used)) static char *FUNC_9(BCWriteCtx *VAR_9, char *VAR_10, GCproto *VAR_11)
{
  MSize VAR_12 = VAR_11->sizebc-1;



  VAR_10 = FUNC_5(VAR_10, FUNC_6(VAR_11)+1, VAR_12*(MSize)sizeof(BCIns));
  FUNC_2(VAR_9);
  return VAR_10;
}
