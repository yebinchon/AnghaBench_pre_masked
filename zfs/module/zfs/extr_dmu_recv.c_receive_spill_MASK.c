
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct receive_writer_arg {scalar_t__ max_object; scalar_t__ byteswap; int os; scalar_t__ raw; scalar_t__ spill; } ;
struct drr_spill {scalar_t__ drr_compressiontype; scalar_t__ drr_compressed_size; scalar_t__ drr_object; int drr_type; int drr_length; int drr_flags; } ;
typedef int dmu_tx_t ;
typedef size_t dmu_object_byteswap_t ;
struct TYPE_15__ {int db_size; int db_object; } ;
typedef TYPE_1__ dmu_buf_t ;
typedef int dmu_buf_impl_t ;
struct TYPE_16__ {int b_data; } ;
typedef TYPE_2__ arc_buf_t ;
struct TYPE_17__ {int (* ob_func ) (int ,int ) ;} ;


 size_t FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct drr_spill*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (int *,TYPE_2__*,int *) ;
 scalar_t__ FUNC_10 (TYPE_1__*,int ,int *) ;
 int FUNC_11 (int ,scalar_t__,int ,TYPE_1__**) ;
 int FUNC_12 (TYPE_1__*,int ) ;
 int FUNC_13 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_14 (int ,scalar_t__,int *) ;
 int FUNC_15 (int ) ;
 TYPE_7__* VAR_7 ;
 int FUNC_16 (TYPE_2__*) ;
 int FUNC_17 (TYPE_1__*,int ,int ,TYPE_1__**) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *,int ) ;
 int FUNC_20 (int *) ;
 int * FUNC_21 (int ) ;
 int FUNC_22 (int *,int ) ;
 int FUNC_23 (int ) ;
 int FUNC_24 (int ,int ) ;

__attribute__((used)) static int
FUNC_25(struct receive_writer_arg *VAR_8, struct drr_spill *VAR_9,
    arc_buf_t *VAR_10)
{
 dmu_tx_t *VAR_11;
 dmu_buf_t *VAR_12, *VAR_13;
 int VAR_14;

 if (VAR_9->drr_length < VAR_3 ||
     VAR_9->drr_length > FUNC_23(FUNC_15(VAR_8->os)))
  return (FUNC_4(VAR_1));







 if (VAR_8->spill && FUNC_2(VAR_9->drr_flags)) {
  FUNC_16(VAR_10);
  return (0);
 }

 if (VAR_8->raw) {
  if (!FUNC_1(VAR_9->drr_type) ||
      VAR_9->drr_compressiontype >= VAR_5 ||
      VAR_9->drr_compressed_size == 0)
   return (FUNC_4(VAR_1));
 }

 if (FUNC_14(VAR_8->os, VAR_9->drr_object, ((void*)0)) != 0)
  return (FUNC_4(VAR_1));

 if (VAR_9->drr_object > VAR_8->max_object)
  VAR_8->max_object = VAR_9->drr_object;

 FUNC_6(FUNC_11(VAR_8->os, VAR_9->drr_object, VAR_2, &VAR_12));
 if ((VAR_14 = FUNC_17(VAR_12, VAR_0, VAR_2,
     &VAR_13)) != 0) {
  FUNC_12(VAR_12, VAR_2);
  return (VAR_14);
 }

 VAR_11 = FUNC_21(VAR_8->os);

 FUNC_22(VAR_11, VAR_12->db_object);

 VAR_14 = FUNC_19(VAR_11, VAR_4);
 if (VAR_14 != 0) {
  FUNC_12(VAR_12, VAR_2);
  FUNC_12(VAR_13, VAR_2);
  FUNC_18(VAR_11);
  return (VAR_14);
 }






 if (VAR_13->db_size != VAR_9->drr_length) {
  FUNC_13(VAR_13, VAR_11);
  FUNC_5(0 == FUNC_10(VAR_13,
      VAR_9->drr_length, VAR_11));
 }

 if (VAR_8->byteswap && !FUNC_8(VAR_10) &&
     FUNC_7(VAR_10) == VAR_6) {
  dmu_object_byteswap_t VAR_15 =
      FUNC_0(VAR_9->drr_type);
  VAR_7[VAR_15].ob_func(VAR_10->b_data,
      FUNC_3(VAR_9));
 }

 FUNC_9((dmu_buf_impl_t *)VAR_13, VAR_10, VAR_11);

 FUNC_12(VAR_12, VAR_2);
 FUNC_12(VAR_13, VAR_2);

 FUNC_20(VAR_11);
 return (0);
}
