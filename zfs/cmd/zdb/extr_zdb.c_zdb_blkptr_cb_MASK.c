
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;


typedef int zilog_t ;
struct TYPE_25__ {scalar_t__ zcb_lastprint; int zcb_start; int zcb_totalasize; TYPE_1__** zcb_type; scalar_t__ zcb_readfails; } ;
typedef TYPE_2__ zdb_cb_t ;
struct TYPE_26__ {scalar_t__ zb_level; scalar_t__ zb_object; scalar_t__ zb_objset; } ;
typedef TYPE_3__ zbookmark_phys_t ;
typedef int uint64_t ;
typedef int u_longlong_t ;
struct TYPE_27__ {scalar_t__ spa_load_verify_bytes; int spa_scrub_lock; int spa_scrub_io_cv; } ;
typedef TYPE_4__ spa_t ;
typedef int longlong_t ;
typedef int dnode_phys_t ;
typedef int dmu_object_type_t ;
typedef int buf ;
typedef int boolean_t ;
struct TYPE_28__ {scalar_t__ blk_birth; } ;
typedef TYPE_5__ blkptr_t ;
typedef int blkbuf ;
typedef int abd_t ;
struct TYPE_24__ {int zb_asize; } ;


 scalar_t__ FUNC_0 (TYPE_5__ const*) ;
 size_t FUNC_1 (TYPE_5__ const*) ;
 int FUNC_2 (TYPE_5__ const*) ;
 int FUNC_3 (TYPE_5__ const*) ;
 scalar_t__ FUNC_4 (TYPE_5__ const*) ;
 scalar_t__ FUNC_5 (TYPE_5__ const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 size_t VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int * FUNC_8 (size_t,int ) ;
 scalar_t__ FUNC_9 (int const*,TYPE_5__ const*,TYPE_3__ const*) ;
 int FUNC_10 (int *,int *) ;
 int* VAR_15 ;
 int FUNC_11 (int ,char*,char*,int,int,int,int) ;
 scalar_t__ FUNC_12 () ;
 scalar_t__ VAR_16 ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (char*,int ,int ,int ,int ,char*) ;
 int FUNC_16 (char*,int,TYPE_5__ const*) ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_17 (TYPE_2__*,int *,TYPE_5__ const*,int) ;
 int FUNC_18 (int,char*,int) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int *,TYPE_4__*,TYPE_5__ const*,int *,size_t,int ,TYPE_2__*,int ,int,TYPE_3__ const*) ;

__attribute__((used)) static int
FUNC_21(spa_t *VAR_19, zilog_t *VAR_20, const blkptr_t *VAR_21,
    const zbookmark_phys_t *VAR_22, const dnode_phys_t *VAR_23, void *VAR_24)
{
 zdb_cb_t *VAR_25 = VAR_24;
 dmu_object_type_t VAR_26;
 boolean_t VAR_27;

 if (VAR_22->zb_level == VAR_5)
  return (0);

 if (VAR_15['b'] >= 5 && VAR_21->blk_birth > 0) {
  char VAR_28[VAR_0];
  FUNC_16(VAR_28, sizeof (VAR_28), VAR_21);
  (void) FUNC_15("objset %llu object %llu "
      "level %lld offset 0x%llx %s\n",
      (u_longlong_t)VAR_22->zb_objset,
      (u_longlong_t)VAR_22->zb_object,
      (longlong_t)VAR_22->zb_level,
      (u_longlong_t)FUNC_9(VAR_23, VAR_21, VAR_22),
      VAR_28);
 }

 if (FUNC_4(VAR_21) || FUNC_5(VAR_21))
  return (0);

 VAR_26 = FUNC_2(VAR_21);

 FUNC_17(VAR_25, VAR_20, VAR_21,
     (VAR_26 & VAR_2) ? VAR_8 : VAR_26);

 VAR_27 = (FUNC_0(VAR_21) != 0 || FUNC_7(VAR_26));

 if (!FUNC_3(VAR_21) &&
     (VAR_15['c'] > 1 || (VAR_15['c'] && VAR_27))) {
  size_t VAR_29 = FUNC_1(VAR_21);
  abd_t *VAR_30 = FUNC_8(VAR_29, VAR_1);
  int VAR_31 = VAR_10 | VAR_12 | VAR_11;


  if (VAR_22->zb_level == VAR_7)
   VAR_31 |= VAR_13;

  FUNC_13(&VAR_19->spa_scrub_lock);
  while (VAR_19->spa_load_verify_bytes > VAR_16)
   FUNC_10(&VAR_19->spa_scrub_io_cv, &VAR_19->spa_scrub_lock);
  VAR_19->spa_load_verify_bytes += VAR_29;
  FUNC_14(&VAR_19->spa_scrub_lock);

  FUNC_19(FUNC_20(((void*)0), VAR_19, VAR_21, VAR_30, VAR_29,
      VAR_18, VAR_25, VAR_14, VAR_31, VAR_22));
 }

 VAR_25->zcb_readfails = 0;


 static int VAR_32;
 if (++VAR_32 > 100)
  VAR_32 = 0;
 else
  return (0);

 if (VAR_15['b'] < 5 && FUNC_12() > VAR_25->zcb_lastprint + VAR_3) {
  uint64_t VAR_33 = FUNC_12();
  char VAR_34[10];
  uint64_t VAR_35 = VAR_25->zcb_type[VAR_6][VAR_9].zb_asize;
  int VAR_36 =
      1 + VAR_35 / (1 + ((VAR_33 - VAR_25->zcb_start) / 1000 / 1000));
  int VAR_37 =
      (VAR_25->zcb_totalasize - VAR_35) / 1024 / VAR_36;


  FUNC_6(sizeof (VAR_34) >= VAR_4);

  FUNC_18(VAR_35, VAR_34, sizeof (VAR_34));
  (void) FUNC_11(VAR_17,
      "\r%5s completed (%4dMB/s) "
      "estimated time remaining: %uhr %02umin %02usec        ",
      VAR_34, VAR_36 / 1024,
      VAR_37 / 60 / 60,
      VAR_37 / 60 % 60,
      VAR_37 % 60);

  VAR_25->zcb_lastprint = VAR_33;
 }

 return (0);
}
