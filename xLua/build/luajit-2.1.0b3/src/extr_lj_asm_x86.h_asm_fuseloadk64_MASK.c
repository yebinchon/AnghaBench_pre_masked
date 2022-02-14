
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ const uint64_t ;
typedef void* int32_t ;
struct TYPE_14__ {scalar_t__ u64; } ;
struct TYPE_11__ {void* idx; void* base; void* ofs; } ;
struct TYPE_13__ {int mcbot; int mclim; TYPE_1__ mrm; void* mctop; } ;
struct TYPE_12__ {void* i; } ;
typedef int Reg ;
typedef TYPE_2__ IRIns ;
typedef TYPE_3__ ASMState ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (intptr_t) ;
 intptr_t FUNC_1 (TYPE_3__*,scalar_t__ const*) ;
 TYPE_6__* FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int) ;
 intptr_t FUNC_4 (TYPE_3__*,...) ;
 intptr_t FUNC_5 (TYPE_3__*,scalar_t__ const*) ;
 void* FUNC_6 (scalar_t__ const*) ;

__attribute__((used)) static Reg FUNC_7(ASMState *VAR_7, IRIns *VAR_8)
{
  const uint64_t *VAR_9 = &FUNC_2(VAR_8)->u64;
  if (!VAR_0 || FUNC_0((intptr_t)VAR_9)) {
    VAR_7->mrm.ofs = FUNC_6(VAR_9);
    VAR_7->mrm.base = VAR_4;
  }
  VAR_7->mrm.idx = VAR_4;
  return VAR_3;
}
