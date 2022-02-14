
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int zfs_keyformat_t ;
typedef int uint8_t ;
typedef void* uint64_t ;
struct TYPE_5__ {void* ck_data; int ck_length; int ck_format; } ;
struct TYPE_6__ {void* wk_iters; void* wk_salt; int wk_keyformat; int wk_refcnt; TYPE_1__ wk_key; } ;
typedef TYPE_2__ dsl_wrapping_key_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int FUNC_2 (int *,void*,int) ;
 int FUNC_3 (TYPE_2__*) ;
 void* FUNC_4 (int,int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int
FUNC_6(uint8_t *VAR_4, zfs_keyformat_t VAR_5,
    uint64_t VAR_6, uint64_t VAR_7, dsl_wrapping_key_t **VAR_8)
{
 int VAR_9;
 dsl_wrapping_key_t *VAR_10;


 VAR_10 = FUNC_4(sizeof (dsl_wrapping_key_t), VAR_2);
 if (!VAR_10)
  return (FUNC_1(VAR_1));


 VAR_10->wk_key.ck_data = FUNC_4(VAR_3, VAR_2);
 if (!VAR_10->wk_key.ck_data) {
  VAR_9 = VAR_1;
  goto error;
 }

 VAR_10->wk_key.ck_format = VAR_0;
 VAR_10->wk_key.ck_length = FUNC_0(VAR_3);
 FUNC_2(VAR_4, VAR_10->wk_key.ck_data, VAR_3);


 FUNC_5(&VAR_10->wk_refcnt);
 VAR_10->wk_keyformat = VAR_5;
 VAR_10->wk_salt = VAR_6;
 VAR_10->wk_iters = VAR_7;

 *VAR_8 = VAR_10;
 return (0);

error:
 FUNC_3(VAR_10);

 *VAR_8 = ((void*)0);
 return (VAR_9);
}
