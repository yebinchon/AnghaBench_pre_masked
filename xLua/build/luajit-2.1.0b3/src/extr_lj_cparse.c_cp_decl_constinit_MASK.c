
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint32_t ;
typedef int int32_t ;
struct TYPE_14__ {int cts; } ;
struct TYPE_13__ {int u32; } ;
struct TYPE_12__ {int info; int size; } ;
typedef int CTypeID ;
typedef TYPE_1__ CType ;
typedef int CTSize ;
typedef int CTInfo ;
typedef TYPE_2__ CPValue ;
typedef TYPE_3__ CPState ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_3__*,char) ;
 int FUNC_2 (TYPE_3__*,int ) ;
 int FUNC_3 (TYPE_3__*,TYPE_2__*,int ) ;
 int FUNC_4 (int) ;
 TYPE_1__* FUNC_5 (int ,int) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ,TYPE_1__**) ;

__attribute__((used)) static CTypeID FUNC_9(CPState *VAR_4, CType **VAR_5, CTypeID VAR_6)
{
  CType *VAR_7 = FUNC_5(VAR_4->cts, VAR_6);
  CTInfo VAR_8;
  CTSize VAR_9;
  CPValue VAR_10;
  CTypeID VAR_11;
  while (FUNC_6(VAR_7->info)) {
    VAR_6 = FUNC_4(VAR_7->info);
    VAR_7 = FUNC_5(VAR_4->cts, VAR_6);
  }
  VAR_8 = VAR_7->info;
  VAR_9 = VAR_7->size;
  if (!FUNC_7(VAR_8) || !(VAR_8 & VAR_0) || VAR_9 > 4)
    FUNC_2(VAR_4, VAR_3);
  FUNC_1(VAR_4, '=');
  FUNC_3(VAR_4, &VAR_10, 0);
  VAR_11 = FUNC_8(VAR_4->cts, VAR_5);
  (*VAR_5)->info = FUNC_0(VAR_2, VAR_0|VAR_6);
  VAR_10.u32 <<= 8*(4-VAR_9);
  if ((VAR_8 & VAR_1))
    VAR_10.u32 >>= 8*(4-VAR_9);
  else
    VAR_10.u32 = (uint32_t)((int32_t)VAR_10.u32 >> 8*(4-VAR_9));
  (*VAR_5)->size = VAR_10.u32;
  return VAR_11;
}
