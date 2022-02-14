
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int zilog_t ;
typedef int uint64_t ;
struct TYPE_8__ {int blk_birth; } ;
struct TYPE_6__ {TYPE_5__ lr_blkptr; } ;
typedef TYPE_1__ lr_write_t ;
struct TYPE_7__ {scalar_t__ lrc_txtype; } ;
typedef TYPE_2__ lr_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,TYPE_5__*,void*,int ) ;
 int FUNC_1 (int *,TYPE_1__*,int *) ;

__attribute__((used)) static int
FUNC_2(zilog_t *VAR_1, lr_t *VAR_2, void *VAR_3, uint64_t VAR_4)
{
 lr_write_t *VAR_5 = (lr_write_t *)VAR_2;
 int VAR_6;

 if (VAR_2->lrc_txtype != VAR_0)
  return (0);
 if (VAR_5->lr_blkptr.blk_birth >= VAR_4) {
  VAR_6 = FUNC_1(VAR_1, VAR_5, ((void*)0));
  if (VAR_6 != 0)
   return (VAR_6);
 }

 return (FUNC_0(VAR_1, &VAR_5->lr_blkptr, VAR_3, VAR_4));
}
