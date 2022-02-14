
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int zio_t ;
struct TYPE_10__ {int vdev_spa; TYPE_1__* vdev_ops; } ;
typedef TYPE_2__ vdev_t ;
typedef int abd_t ;
struct TYPE_9__ {int vdev_op_leaf; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int) ;
 int FUNC_3 (TYPE_2__*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int * FUNC_4 (int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int ,int,int ,int ) ;
 int FUNC_9 (int ,int,int ) ;
 scalar_t__ FUNC_10 (int ,scalar_t__,int ) ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (int *,TYPE_2__*,int const,int *,int ,int ,int *,int *,int) ;
 int FUNC_13 (int *,TYPE_2__*,int,int *,int ,int ,int *,int *,int) ;
 int * FUNC_14 (int ,int *,int *,int) ;
 scalar_t__ FUNC_15 (int *) ;

__attribute__((used)) static void
FUNC_16(vdev_t *VAR_11)
{
 abd_t *VAR_12;
 zio_t *VAR_13;
 int VAR_14 = (VAR_3 | VAR_5);
 int VAR_15 = VAR_8 | VAR_7 |
     VAR_10;

 FUNC_0(FUNC_10(VAR_11->vdev_spa, VAR_4, VAR_2) ==
     VAR_4);
 FUNC_0(VAR_11->vdev_ops->vdev_op_leaf);

 FUNC_8(VAR_11->vdev_spa, VAR_14, VAR_1, VAR_2);

 VAR_12 = FUNC_4(FUNC_3(VAR_11), VAR_0);

 VAR_13 = FUNC_14(VAR_11->vdev_spa, ((void*)0), ((void*)0), VAR_15);
 for (int VAR_16 = 0; VAR_16 < FUNC_1(VAR_11); VAR_16++) {
  const int VAR_17 = 0;
  zio_t *VAR_18;

  VAR_18 = FUNC_14(VAR_11->vdev_spa, ((void*)0), ((void*)0), VAR_15);
  FUNC_12(VAR_18, VAR_11, VAR_17, VAR_12,
      FUNC_2(VAR_11, VAR_16), FUNC_3(VAR_11),
      ((void*)0), ((void*)0), VAR_15);

  if (FUNC_15(VAR_18) || FUNC_11(FUNC_6(VAR_12)))
   FUNC_7(VAR_12, FUNC_3(VAR_11));

  for (int VAR_19 = 2; VAR_19 < VAR_6; VAR_19++)
   FUNC_13(VAR_13, VAR_11, VAR_19, VAR_12,
       FUNC_2(VAR_11, VAR_16),
       FUNC_3(VAR_11), ((void*)0), ((void*)0),
       VAR_15 | VAR_9);
 }
 (void) FUNC_15(VAR_13);

 FUNC_9(VAR_11->vdev_spa, VAR_14, VAR_1);

 FUNC_5(VAR_12);
}
