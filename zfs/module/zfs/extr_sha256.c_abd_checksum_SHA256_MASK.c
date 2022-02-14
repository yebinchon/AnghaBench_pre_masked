
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {void** zc_word; } ;
typedef TYPE_1__ zio_cksum_t ;
typedef int uint8_t ;
typedef int uint64_t ;
typedef int abd_t ;
typedef int SHA2_CTX ;


 void* FUNC_0 (void*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (int ,int *) ;
 int VAR_2 ;
 int * FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ,int ,int ,int *) ;
 int FUNC_5 (int *,int *,int ) ;
 int FUNC_6 (int ,int *,int ,TYPE_1__*) ;
 scalar_t__ FUNC_7 (int ) ;
 int VAR_3 ;

void
FUNC_8(abd_t *VAR_4, uint64_t VAR_5,
    const void *VAR_6, zio_cksum_t *VAR_7)
{
 int VAR_8;
 SHA2_CTX VAR_9;
 zio_cksum_t VAR_10;

 if (FUNC_7(VAR_5)) {
  uint8_t *VAR_11 = FUNC_3(VAR_4, VAR_5);
  VAR_8 = FUNC_6(VAR_2, VAR_11, VAR_5, &VAR_10);
  FUNC_5(VAR_4, VAR_11, VAR_5);
  if (VAR_8 == VAR_0)
   goto bswap;


 }

 FUNC_2(VAR_1, &VAR_9);
 (void) FUNC_4(VAR_4, 0, VAR_5, VAR_3, &VAR_9);
 FUNC_1(&VAR_10, &VAR_9);

bswap:







 VAR_7->zc_word[0] = FUNC_0(VAR_10.zc_word[0]);
 VAR_7->zc_word[1] = FUNC_0(VAR_10.zc_word[1]);
 VAR_7->zc_word[2] = FUNC_0(VAR_10.zc_word[2]);
 VAR_7->zc_word[3] = FUNC_0(VAR_10.zc_word[3]);
}
