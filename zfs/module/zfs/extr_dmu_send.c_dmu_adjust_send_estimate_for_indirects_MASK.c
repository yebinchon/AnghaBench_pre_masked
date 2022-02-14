
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_5__ {TYPE_1__* os_phys; } ;
typedef TYPE_2__ objset_t ;
typedef int dsl_dataset_t ;
typedef int dmu_replay_record_t ;
typedef scalar_t__ boolean_t ;
typedef int blkptr_t ;
struct TYPE_4__ {scalar_t__ os_type; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,TYPE_2__**) ;
 int FUNC_2 (int *,int ,int*) ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(dsl_dataset_t *VAR_4, uint64_t VAR_5,
    uint64_t VAR_6, boolean_t VAR_7, uint64_t *VAR_8)
{
 int VAR_9 = 0;
 uint64_t VAR_10;






 uint64_t VAR_11;
 uint64_t VAR_12;
 objset_t *VAR_13;
 FUNC_0(FUNC_1(VAR_4, &VAR_13));


 if (VAR_3 != 0) {
  VAR_11 = VAR_3;
 } else if (VAR_13->os_phys->os_type == VAR_0) {
  VAR_9 = FUNC_2(VAR_4,
      FUNC_3(VAR_2), &VAR_11);
 } else {
  VAR_9 = FUNC_2(VAR_4,
      FUNC_3(VAR_1), &VAR_11);
 }
 if (VAR_9 != 0)
  return (VAR_9);
 VAR_12 = VAR_5 / VAR_11;






 VAR_10 = VAR_7 ? VAR_6 : VAR_5;
 VAR_10 -= VAR_12 * sizeof (blkptr_t);


 VAR_10 += VAR_12 * sizeof (dmu_replay_record_t);

 *VAR_8 = VAR_10;

 return (0);
}
