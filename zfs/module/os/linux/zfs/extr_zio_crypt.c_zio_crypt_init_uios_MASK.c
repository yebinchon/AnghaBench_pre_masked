
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int uio_iovcnt; int * uio_iov; void* uio_segflg; } ;
typedef TYPE_1__ uio_t ;
typedef int uint_t ;
typedef int uint8_t ;
typedef int uint64_t ;
struct TYPE_12__ {int iov_len; int * iov_base; } ;
typedef TYPE_2__ iovec_t ;
typedef int dmu_object_type_t ;
typedef int boolean_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;


 scalar_t__ FUNC_1 (int) ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,int ,int *,int *,int ,int ,TYPE_1__*,TYPE_1__*,int *,int **,int *,int *) ;
 int FUNC_3 (int ,int *,int *,int ,TYPE_1__*,TYPE_1__*,int *) ;
 int FUNC_4 (int ,int *,int *,int ,int ,TYPE_1__*,TYPE_1__*,int *,int **,int *,int *) ;

__attribute__((used)) static int
FUNC_5(boolean_t VAR_4, uint64_t VAR_5, dmu_object_type_t VAR_6,
    uint8_t *VAR_7, uint8_t *VAR_8, uint_t VAR_9, boolean_t VAR_10,
    uint8_t *VAR_11, uio_t *VAR_12, uio_t *VAR_13, uint_t *VAR_14, uint8_t **VAR_15,
    uint_t *VAR_16, boolean_t *VAR_17)
{
 int VAR_18;
 iovec_t *VAR_19;

 FUNC_0(FUNC_1(VAR_6) || VAR_6 == VAR_1);


 switch (VAR_6) {
 case 128:
  VAR_18 = FUNC_4(VAR_4, VAR_7, VAR_8,
      VAR_9, VAR_10, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16,
      VAR_17);
  break;
 case 129:
  VAR_18 = FUNC_2(VAR_4, VAR_5, VAR_7,
      VAR_8, VAR_9, VAR_10, VAR_12, VAR_13, VAR_14, VAR_15,
      VAR_16, VAR_17);
  break;
 default:
  VAR_18 = FUNC_3(VAR_4, VAR_7, VAR_8,
      VAR_9, VAR_12, VAR_13, VAR_14);
  *VAR_15 = ((void*)0);
  *VAR_16 = 0;
  *VAR_17 = VAR_0;
  break;
 }

 if (VAR_18 != 0)
  goto error;


 VAR_12->uio_segflg = VAR_2;
 VAR_13->uio_segflg = VAR_2;

 VAR_19 = ((iovec_t *)&VAR_13->uio_iov[VAR_13->uio_iovcnt - 1]);
 VAR_19->iov_base = VAR_11;
 VAR_19->iov_len = VAR_3;

 return (0);

error:
 return (VAR_18);
}
