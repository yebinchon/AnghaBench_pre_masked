
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int zilog_t ;
typedef int zbookmark_phys_t ;
typedef scalar_t__ uint64_t ;
struct TYPE_8__ {int td_arg; int td_spa; int (* td_func ) (int ,int *,TYPE_3__*,int *,int *,int ) ;int td_objset; } ;
typedef TYPE_2__ traverse_data_t ;
struct TYPE_7__ {int * zc_word; } ;
struct TYPE_9__ {scalar_t__ blk_birth; TYPE_1__ blk_cksum; } ;
typedef TYPE_3__ blkptr_t ;


 scalar_t__ FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int *,int ,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int *,TYPE_3__*,int *,int *,int ) ;

__attribute__((used)) static int
FUNC_4(zilog_t *VAR_3, blkptr_t *VAR_4, void *VAR_5, uint64_t VAR_6)
{
 traverse_data_t *VAR_7 = VAR_5;
 zbookmark_phys_t VAR_8;

 if (FUNC_0(VAR_4))
  return (0);

 if (VAR_6 == 0 && VAR_4->blk_birth >= FUNC_2(VAR_7->td_spa))
  return (-1);

 FUNC_1(&VAR_8, VAR_7->td_objset, VAR_1, VAR_0,
     VAR_4->blk_cksum.zc_word[VAR_2]);

 (void) VAR_7->td_func(VAR_7->td_spa, VAR_3, VAR_4, &VAR_8, ((void*)0), VAR_7->td_arg);

 return (0);
}
