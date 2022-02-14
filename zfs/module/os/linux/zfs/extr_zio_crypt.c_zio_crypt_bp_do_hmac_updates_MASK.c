
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint_t ;
typedef int uint64_t ;
struct TYPE_4__ {char* iov_base; int iov_len; } ;
struct TYPE_5__ {int cd_length; TYPE_1__ cd_raw; scalar_t__ cd_offset; int cd_format; } ;
typedef TYPE_2__ crypto_data_t ;
typedef int crypto_context_t ;
typedef int boolean_t ;
typedef int blkptr_t ;
typedef int blkptr_auth_buf_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,TYPE_2__*,int *) ;
 int FUNC_2 (int ,int ,int *,int *,int *) ;

__attribute__((used)) static int
FUNC_3(crypto_context_t VAR_3, uint64_t VAR_4,
    boolean_t VAR_5, blkptr_t *VAR_6)
{
 int VAR_7;
 uint_t VAR_8;
 blkptr_auth_buf_t VAR_9;
 crypto_data_t VAR_10;

 FUNC_2(VAR_4, VAR_5, VAR_6, &VAR_9, &VAR_8);
 VAR_10.cd_format = VAR_0;
 VAR_10.cd_offset = 0;
 VAR_10.cd_length = VAR_8;
 VAR_10.cd_raw.iov_base = (char *)&VAR_9;
 VAR_10.cd_raw.iov_len = VAR_10.cd_length;

 VAR_7 = FUNC_1(VAR_3, &VAR_10, ((void*)0));
 if (VAR_7 != VAR_1) {
  VAR_7 = FUNC_0(VAR_2);
  goto error;
 }

 return (0);

error:
 return (VAR_7);
}
