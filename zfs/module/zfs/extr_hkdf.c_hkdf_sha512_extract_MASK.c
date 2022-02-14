
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint_t ;
typedef int uint8_t ;
struct TYPE_10__ {scalar_t__ cm_param_len; int * cm_param; int cm_type; } ;
typedef TYPE_2__ crypto_mechanism_t ;
struct TYPE_11__ {int * ck_data; int ck_length; int ck_format; } ;
typedef TYPE_3__ crypto_key_t ;
struct TYPE_9__ {char* iov_base; int iov_len; } ;
struct TYPE_12__ {int cd_length; TYPE_1__ cd_raw; scalar_t__ cd_offset; void* cd_format; } ;
typedef TYPE_4__ crypto_data_t ;


 int FUNC_0 (int ) ;
 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (TYPE_2__*,TYPE_4__*,TYPE_3__*,int *,TYPE_4__*,int *) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(uint8_t *VAR_6, uint_t VAR_7, uint8_t *VAR_8,
    uint_t VAR_9, uint8_t *VAR_10)
{
 int VAR_11;
 crypto_mechanism_t VAR_12;
 crypto_key_t VAR_13;
 crypto_data_t VAR_14, VAR_15;


 VAR_12.cm_type = FUNC_3(VAR_5);
 VAR_12.cm_param = ((void*)0);
 VAR_12.cm_param_len = 0;


 VAR_13.ck_format = VAR_1;
 VAR_13.ck_length = FUNC_0(VAR_7);
 VAR_13.ck_data = VAR_6;


 VAR_14.cd_format = VAR_0;
 VAR_14.cd_offset = 0;
 VAR_14.cd_length = VAR_9;
 VAR_14.cd_raw.iov_base = (char *)VAR_8;
 VAR_14.cd_raw.iov_len = VAR_14.cd_length;

 VAR_15.cd_format = VAR_0;
 VAR_15.cd_offset = 0;
 VAR_15.cd_length = VAR_4;
 VAR_15.cd_raw.iov_base = (char *)VAR_10;
 VAR_15.cd_raw.iov_len = VAR_15.cd_length;

 VAR_11 = FUNC_2(&VAR_12, &VAR_14, &VAR_13, ((void*)0), &VAR_15, ((void*)0));
 if (VAR_11 != VAR_2)
  return (FUNC_1(VAR_3));

 return (0);
}
