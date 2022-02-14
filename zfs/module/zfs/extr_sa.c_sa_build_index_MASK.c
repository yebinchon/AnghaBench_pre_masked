
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_16__ {int sa_lock; } ;
typedef TYPE_2__ sa_os_t ;
typedef int sa_idx_tab_t ;
struct TYPE_17__ {scalar_t__ sa_magic; } ;
typedef TYPE_3__ sa_hdr_phys_t ;
struct TYPE_18__ {int * sa_spill_tab; int * sa_bonus_tab; TYPE_6__* sa_os; } ;
typedef TYPE_4__ sa_handle_t ;
typedef scalar_t__ sa_buf_type_t ;
typedef int dmu_object_type_t ;
struct TYPE_15__ {int db_object; } ;
struct TYPE_19__ {TYPE_1__ db; } ;
typedef TYPE_5__ dmu_buf_impl_t ;
struct TYPE_20__ {TYPE_2__* os_sa; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (TYPE_5__*) ;
 TYPE_5__* FUNC_3 (TYPE_4__*,scalar_t__) ;
 TYPE_3__* FUNC_4 (TYPE_4__*,scalar_t__) ;
 scalar_t__ VAR_2 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_4__*,scalar_t__) ;
 int * FUNC_9 (TYPE_6__*,int ,TYPE_3__*) ;
 int FUNC_10 (char*,scalar_t__,scalar_t__,int ) ;

__attribute__((used)) static int
FUNC_11(sa_handle_t *VAR_3, sa_buf_type_t VAR_4)
{
 sa_hdr_phys_t *VAR_5;
 dmu_buf_impl_t *VAR_6 = FUNC_3(VAR_3, VAR_4);
 dmu_object_type_t VAR_7 = FUNC_2(VAR_6);
 sa_os_t *VAR_8 = VAR_3->sa_os->os_sa;
 sa_idx_tab_t *VAR_9;

 VAR_5 = FUNC_4(VAR_3, VAR_4);

 FUNC_6(&VAR_8->sa_lock);




 if (FUNC_1(VAR_7) && VAR_5->sa_magic != VAR_2 &&
     VAR_5->sa_magic != 0) {
  if (FUNC_0(VAR_5->sa_magic) != VAR_2) {
   FUNC_7(&VAR_8->sa_lock);
   FUNC_10("Buffer Header: %x != SA_MAGIC:%x "
       "object=%#llx\n", VAR_5->sa_magic, VAR_2,
       VAR_6->db.db_object);
   return (FUNC_5(VAR_0));
  }
  FUNC_8(VAR_3, VAR_4);
 }

 VAR_9 = FUNC_9(VAR_3->sa_os, VAR_7, VAR_5);

 if (VAR_4 == VAR_1)
  VAR_3->sa_bonus_tab = VAR_9;
 else
  VAR_3->sa_spill_tab = VAR_9;

 FUNC_7(&VAR_8->sa_lock);
 return (0);
}
