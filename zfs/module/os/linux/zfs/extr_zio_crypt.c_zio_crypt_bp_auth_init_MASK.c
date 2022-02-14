
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint_t ;
typedef int uint64_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_11__ {int blk_prop; } ;
typedef TYPE_1__ blkptr_t ;
struct TYPE_12__ {unsigned long long bab_pad; int bab_prop; int bab_mac; } ;
typedef TYPE_2__ blkptr_auth_buf_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_1__*,int) ;
 int FUNC_7 (TYPE_1__*,int ) ;
 int FUNC_8 (TYPE_1__*,int ) ;

__attribute__((used)) static void
FUNC_9(uint64_t VAR_0, boolean_t VAR_1, blkptr_t *VAR_2,
    blkptr_auth_buf_t *VAR_3, uint_t *VAR_4)
{
 blkptr_t VAR_5 = *VAR_2;

 if (VAR_1)
  FUNC_6(&VAR_5, sizeof (blkptr_t));

 FUNC_0(FUNC_4(&VAR_5) || FUNC_3(&VAR_5));
 FUNC_1(FUNC_2(&VAR_5));

 FUNC_8(&VAR_5, VAR_3->bab_mac);






 FUNC_7(&VAR_5, VAR_0);
 VAR_3->bab_prop = FUNC_5(VAR_5.blk_prop);
 VAR_3->bab_pad = 0ULL;


 *VAR_4 = sizeof (blkptr_auth_buf_t);
 if (VAR_0 == 0)
  *VAR_4 -= sizeof (uint64_t);
}
