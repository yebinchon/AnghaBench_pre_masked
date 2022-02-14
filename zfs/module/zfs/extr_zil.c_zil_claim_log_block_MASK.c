
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int zl_spa; } ;
typedef TYPE_1__ zilog_t ;
typedef scalar_t__ uint64_t ;
struct TYPE_10__ {scalar_t__ blk_birth; } ;
typedef TYPE_2__ blkptr_t ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_2 (int *,int ,scalar_t__,TYPE_2__*,int ,int *,int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(zilog_t *VAR_4, blkptr_t *VAR_5, void *VAR_6, uint64_t VAR_7)
{




 if (FUNC_0(VAR_5) || VAR_5->blk_birth < VAR_7 ||
     FUNC_1(VAR_4, VAR_5) != 0)
  return (0);

 return (FUNC_3(FUNC_2(((void*)0), VAR_4->zl_spa,
     VAR_6 == ((void*)0) ? 0 : VAR_7, VAR_5, VAR_3, ((void*)0),
     VAR_0 | VAR_2 | VAR_1)));
}
