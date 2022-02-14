
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int io_flags; scalar_t__ io_size; scalar_t__ io_orig_size; int * io_orig_abd; int io_bookmark; int * io_bp; int * io_abd; scalar_t__ io_bp_override; int * io_spa; } ;
typedef TYPE_1__ zio_t ;
typedef scalar_t__ uint64_t ;
typedef int spa_t ;
typedef int ddt_t ;
struct TYPE_12__ {scalar_t__ ddp_phys_birth; } ;
typedef TYPE_2__ ddt_phys_t ;
struct TYPE_13__ {TYPE_2__* dde_phys; TYPE_1__** dde_lead_zio; } ;
typedef TYPE_3__ ddt_entry_t ;
typedef int boolean_t ;
typedef int blkptr_t ;
typedef int arc_flags_t ;
struct TYPE_14__ {int b_data; } ;
typedef TYPE_4__ arc_buf_t ;
typedef int abd_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int * FUNC_4 (scalar_t__,int) ;
 scalar_t__ FUNC_5 (int *,int *) ;
 scalar_t__ FUNC_6 (int *,int ,scalar_t__) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_4__*,TYPE_4__**) ;
 int VAR_10 ;
 int FUNC_9 (int *,int *,int *,int ,TYPE_4__**,int ,int,int *,int *) ;
 int FUNC_10 (TYPE_2__*,int *,scalar_t__) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,int *,int *,int *,scalar_t__,int *,int *,int ,int,int *) ;
 int FUNC_14 (int ) ;

__attribute__((used)) static boolean_t
FUNC_15(zio_t *VAR_11, ddt_t *VAR_12, ddt_entry_t *VAR_13)
{
 spa_t *VAR_14 = VAR_11->io_spa;
 boolean_t VAR_15 = !!(VAR_11->io_flags & VAR_7);

 FUNC_0(!(VAR_11->io_bp_override && VAR_15));
 for (int VAR_16 = VAR_3; VAR_16 <= VAR_4; VAR_16++) {
  zio_t *VAR_17 = VAR_13->dde_lead_zio[VAR_16];

  if (VAR_17 != ((void*)0) && VAR_15) {
   return (VAR_17->io_size != VAR_11->io_size ||
       FUNC_5(VAR_11->io_abd, VAR_17->io_abd) != 0);
  } else if (VAR_17 != ((void*)0)) {
   return (VAR_17->io_orig_size != VAR_11->io_orig_size ||
       FUNC_5(VAR_11->io_orig_abd, VAR_17->io_orig_abd) != 0);
  }
 }

 for (int VAR_18 = VAR_3; VAR_18 <= VAR_4; VAR_18++) {
  ddt_phys_t *VAR_19 = &VAR_13->dde_phys[VAR_18];

  if (VAR_19->ddp_phys_birth != 0 && VAR_15) {
   blkptr_t VAR_20 = *VAR_11->io_bp;
   uint64_t VAR_21;
   abd_t *VAR_22;
   int VAR_23;

   FUNC_10(VAR_19, &VAR_20, VAR_19->ddp_phys_birth);
   VAR_21 = FUNC_2(&VAR_20);

   if (VAR_21 != VAR_11->io_size)
    return (VAR_2);

   FUNC_12(VAR_12);

   VAR_22 = FUNC_4(VAR_21, VAR_2);

   VAR_23 = FUNC_14(FUNC_13(((void*)0), VAR_14, &VAR_20, VAR_22,
       VAR_21, ((void*)0), ((void*)0), VAR_9,
       VAR_6 | VAR_8 |
       VAR_7, &VAR_11->io_bookmark));

   if (VAR_23 == 0) {
    if (FUNC_5(VAR_22, VAR_11->io_abd) != 0)
     VAR_23 = FUNC_3(VAR_5);
   }

   FUNC_7(VAR_22);
   FUNC_11(VAR_12);
   return (VAR_23 != 0);
  } else if (VAR_19->ddp_phys_birth != 0) {
   arc_buf_t *VAR_24 = ((void*)0);
   arc_flags_t VAR_25 = VAR_0;
   blkptr_t VAR_26 = *VAR_11->io_bp;
   int VAR_27;

   FUNC_10(VAR_19, &VAR_26, VAR_19->ddp_phys_birth);

   if (FUNC_1(&VAR_26) != VAR_11->io_orig_size)
    return (VAR_2);

   FUNC_12(VAR_12);

   VAR_27 = FUNC_9(((void*)0), VAR_14, &VAR_26,
       VAR_10, &VAR_24, VAR_9,
       VAR_6 | VAR_8,
       &VAR_25, &VAR_11->io_bookmark);

   if (VAR_27 == 0) {
    if (FUNC_6(VAR_11->io_orig_abd, VAR_24->b_data,
        VAR_11->io_orig_size) != 0)
     VAR_27 = FUNC_3(VAR_5);
    FUNC_8(VAR_24, &VAR_24);
   }

   FUNC_11(VAR_12);
   return (VAR_27 != 0);
  }
 }

 return (VAR_1);
}
