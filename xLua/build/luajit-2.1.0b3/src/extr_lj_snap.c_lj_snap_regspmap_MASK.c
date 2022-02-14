
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_13__ {TYPE_1__* ir; int * snapmap; TYPE_2__* snap; } ;
struct TYPE_12__ {scalar_t__ o; int op2; scalar_t__ op1; scalar_t__ prev; } ;
struct TYPE_11__ {size_t mapofs; size_t nent; } ;
struct TYPE_10__ {scalar_t__ prev; } ;
typedef TYPE_2__ SnapShot ;
typedef size_t SnapNo ;
typedef int SnapEntry ;
typedef size_t MSize ;
typedef size_t IRRef ;
typedef TYPE_3__ IRIns ;
typedef TYPE_4__ GCtrace ;
typedef int BloomFilter ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 size_t VAR_5 ;
 scalar_t__ FUNC_0 (int ,size_t) ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__) ;
 size_t FUNC_3 (int ) ;
 int FUNC_4 (TYPE_4__*,size_t) ;
 scalar_t__ FUNC_5 (TYPE_4__*,size_t,size_t,scalar_t__) ;
 scalar_t__ FUNC_6 (int ) ;

IRIns *FUNC_7(GCtrace *VAR_6, SnapNo VAR_7, IRIns *VAR_8)
{
  SnapShot *VAR_9 = &VAR_6->snap[VAR_7];
  SnapEntry *VAR_10 = &VAR_6->snapmap[VAR_9->mapofs];
  BloomFilter VAR_11 = FUNC_4(VAR_6, VAR_7);
  MSize VAR_12 = 0;
  IRRef VAR_13 = 0;
  for ( ; ; VAR_8++) {
    uint32_t VAR_14;
    if (VAR_8->o == VAR_3) {
      if (!(VAR_8->op2 & VAR_0)) break;
      for ( ; ; VAR_12++) {
 FUNC_1(VAR_12 < VAR_9->nent);
 if (FUNC_6(VAR_10[VAR_12]) == VAR_8->op1) {
   VAR_13 = FUNC_3(VAR_10[VAR_12++]);
   break;
 }
      }
    } else if (VAR_4 && VAR_8->o == VAR_1) {
      VAR_13++;
    } else if (VAR_8->o == VAR_2) {
      VAR_13 = VAR_8->op1 + VAR_5;
    } else {
      break;
    }
    VAR_14 = VAR_6->ir[VAR_13].prev;
    if (FUNC_0(VAR_11, VAR_13))
      VAR_14 = FUNC_5(VAR_6, VAR_7, VAR_13, VAR_14);
    VAR_8->prev = (uint16_t)VAR_14;
    FUNC_1(FUNC_2(VAR_14));
  }
  return VAR_8;
}
