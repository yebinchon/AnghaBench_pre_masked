
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint32_t ;
typedef scalar_t__ int32_t ;
struct TYPE_12__ {scalar_t__ info; scalar_t__ aux; } ;
struct TYPE_13__ {int * sval; TYPE_1__ s; } ;
struct TYPE_15__ {TYPE_2__ u; int k; } ;
struct TYPE_14__ {struct TYPE_14__* prev; scalar_t__* varmap; } ;
typedef scalar_t__ MSize ;
typedef int GCstr ;
typedef TYPE_3__ FuncState ;
typedef TYPE_4__ ExpDesc ;
typedef size_t BCReg ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_4__*,int ,size_t) ;
 int FUNC_1 (TYPE_3__*,size_t) ;
 size_t FUNC_2 (TYPE_3__*,int *) ;
 scalar_t__ FUNC_3 (TYPE_3__*,scalar_t__,TYPE_4__*) ;

__attribute__((used)) static MSize FUNC_4(FuncState *VAR_3, GCstr *VAR_4, ExpDesc *VAR_5, int VAR_6)
{
  if (VAR_3) {
    BCReg VAR_7 = FUNC_2(VAR_3, VAR_4);
    if ((int32_t)VAR_7 >= 0) {
      FUNC_0(VAR_5, VAR_1, VAR_7);
      if (!VAR_6)
 FUNC_1(VAR_3, VAR_7);
      return (MSize)(VAR_5->u.s.aux = (uint32_t)VAR_3->varmap[VAR_7]);
    } else {
      MSize VAR_8 = FUNC_4(VAR_3->prev, VAR_4, VAR_5, 0);
      if ((int32_t)VAR_8 >= 0) {
 VAR_5->u.s.info = (uint8_t)FUNC_3(VAR_3, VAR_8, VAR_5);
 VAR_5->k = VAR_2;
 return VAR_8;
      }
    }
  } else {
    FUNC_0(VAR_5, VAR_0, 0);
    VAR_5->u.sval = VAR_4;
  }
  return (MSize)-1;
}
