
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int io_private; } ;
typedef TYPE_1__ zio_t ;
typedef int zilog_t ;
struct TYPE_10__ {scalar_t__ zb_level; } ;
typedef TYPE_2__ zbookmark_phys_t ;
typedef scalar_t__ uint64_t ;
struct TYPE_11__ {scalar_t__ spa_load_verify_bytes; int spa_scrub_lock; int spa_scrub_io_cv; } ;
typedef TYPE_3__ spa_t ;
typedef int dnode_phys_t ;
typedef int blkptr_t ;


 size_t FUNC_0 (int const*) ;
 scalar_t__ FUNC_1 (int const*) ;
 scalar_t__ FUNC_2 (int const*) ;
 int FUNC_3 (int const*) ;
 scalar_t__ FUNC_4 (int const*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (size_t,int ) ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_10 (int ) ;
 int FUNC_11 (TYPE_1__*,TYPE_3__*,int const*,int ,size_t,int ,int ,int ,int,TYPE_2__ const*) ;

__attribute__((used)) static int
FUNC_12(spa_t *VAR_11, zilog_t *VAR_12, const blkptr_t *VAR_13,
    const zbookmark_phys_t *VAR_14, const dnode_phys_t *VAR_15, void *VAR_16)
{
 if (VAR_14->zb_level == VAR_1 || FUNC_2(VAR_13) ||
     FUNC_1(VAR_13) || FUNC_4(VAR_13))
  return (0);





 if (!VAR_9)
  return (0);
 if (!FUNC_3(VAR_13) && !VAR_7)
  return (0);

 uint64_t VAR_17 =
     FUNC_6() >> VAR_10;
 zio_t *VAR_18 = VAR_16;
 size_t VAR_19 = FUNC_0(VAR_13);

 FUNC_8(&VAR_11->spa_scrub_lock);
 while (VAR_11->spa_load_verify_bytes >= VAR_17)
  FUNC_7(&VAR_11->spa_scrub_io_cv, &VAR_11->spa_scrub_lock);
 VAR_11->spa_load_verify_bytes += VAR_19;
 FUNC_9(&VAR_11->spa_scrub_lock);

 FUNC_10(FUNC_11(VAR_18, VAR_11, VAR_13, FUNC_5(VAR_19, VAR_0), VAR_19,
     VAR_8, VAR_18->io_private, VAR_6,
     VAR_5 | VAR_2 |
     VAR_4 | VAR_3, VAR_14));
 return (0);
}
