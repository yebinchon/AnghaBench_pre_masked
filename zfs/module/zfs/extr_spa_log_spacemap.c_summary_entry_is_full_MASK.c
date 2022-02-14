
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int spa_t ;
struct TYPE_3__ {scalar_t__ lse_blkcount; } ;
typedef TYPE_1__ log_summary_entry_t ;
typedef int boolean_t ;


 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;

__attribute__((used)) static boolean_t
FUNC_3(spa_t *VAR_1, log_summary_entry_t *VAR_2)
{
 uint64_t VAR_3 = FUNC_1(1,
     FUNC_0(FUNC_2(VAR_1),
     VAR_0));
 return (VAR_3 <= VAR_2->lse_blkcount);
}
