
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int dmu_tx_t ;
typedef int boolean_t ;
struct TYPE_4__ {scalar_t__ blk_birth; } ;
typedef TYPE_1__ blkptr_t ;
typedef int blkbuf ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,int,TYPE_1__ const*,int ) ;

__attribute__((used)) static int
FUNC_3(void *VAR_1, const blkptr_t *VAR_2, boolean_t VAR_3, dmu_tx_t *VAR_4)
{
 char VAR_5[VAR_0];

 FUNC_0(VAR_2->blk_birth != 0);
 FUNC_2(VAR_5, sizeof (VAR_5), VAR_2, VAR_3);
 (void) FUNC_1("\t%s\n", VAR_5);
 return (0);
}
