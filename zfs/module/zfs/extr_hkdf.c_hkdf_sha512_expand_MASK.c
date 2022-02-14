
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
struct TYPE_11__ {int* ck_data; int ck_length; int ck_format; } ;
typedef TYPE_3__ crypto_key_t ;
struct TYPE_9__ {char* iov_base; int iov_len; } ;
struct TYPE_12__ {int cd_length; TYPE_1__ cd_raw; scalar_t__ cd_offset; void* cd_format; } ;
typedef TYPE_4__ crypto_data_t ;
typedef int crypto_context_t ;


 int FUNC_0 (int) ;
 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int*,int*,int) ;
 int FUNC_3 (int ,TYPE_4__*,int *) ;
 int FUNC_4 (TYPE_2__*,TYPE_3__*,int *,int *,int *) ;
 int FUNC_5 (int ,TYPE_4__*,int *) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int
FUNC_7(uint8_t *VAR_7, uint8_t *VAR_8, uint_t VAR_9,
    uint8_t *VAR_10, uint_t VAR_11)
{
 int VAR_12;
 crypto_mechanism_t VAR_13;
 crypto_context_t VAR_14;
 crypto_key_t VAR_15;
 crypto_data_t VAR_16, VAR_17, VAR_18;
 uint_t VAR_19, VAR_20 = 0, VAR_21 = 0;
 uint8_t VAR_22;
 uint_t VAR_23 = (VAR_11 + VAR_5) / VAR_5;
 uint8_t VAR_24[VAR_5];

 if (VAR_23 > 255)
  return (FUNC_1(VAR_3));


 VAR_13.cm_type = FUNC_6(VAR_6);
 VAR_13.cm_param = ((void*)0);
 VAR_13.cm_param_len = 0;


 VAR_15.ck_format = VAR_1;
 VAR_15.ck_length = FUNC_0(VAR_5);
 VAR_15.ck_data = VAR_7;


 VAR_16.cd_format = VAR_0;
 VAR_16.cd_offset = 0;
 VAR_16.cd_raw.iov_base = (char *)VAR_24;

 VAR_18.cd_format = VAR_0;
 VAR_18.cd_offset = 0;
 VAR_18.cd_length = 1;
 VAR_18.cd_raw.iov_base = (char *)&VAR_22;
 VAR_18.cd_raw.iov_len = VAR_18.cd_length;

 VAR_17.cd_format = VAR_0;
 VAR_17.cd_offset = 0;
 VAR_17.cd_length = VAR_9;
 VAR_17.cd_raw.iov_base = (char *)VAR_8;
 VAR_17.cd_raw.iov_len = VAR_17.cd_length;

 for (VAR_19 = 1; VAR_19 <= VAR_23; VAR_19++) {
  VAR_22 = VAR_19;

  VAR_16.cd_length = VAR_20;
  VAR_16.cd_raw.iov_len = VAR_16.cd_length;

  VAR_12 = FUNC_4(&VAR_13, &VAR_15, ((void*)0), &VAR_14, ((void*)0));
  if (VAR_12 != VAR_2)
   return (FUNC_1(VAR_4));

  VAR_12 = FUNC_5(VAR_14, &VAR_16, ((void*)0));
  if (VAR_12 != VAR_2)
   return (FUNC_1(VAR_4));

  VAR_12 = FUNC_5(VAR_14, &VAR_17, ((void*)0));
  if (VAR_12 != VAR_2)
   return (FUNC_1(VAR_4));

  VAR_12 = FUNC_5(VAR_14, &VAR_18, ((void*)0));
  if (VAR_12 != VAR_2)
   return (FUNC_1(VAR_4));

  VAR_20 = VAR_5;
  VAR_16.cd_length = VAR_20;
  VAR_16.cd_raw.iov_len = VAR_16.cd_length;

  VAR_12 = FUNC_3(VAR_14, &VAR_16, ((void*)0));
  if (VAR_12 != VAR_2)
   return (FUNC_1(VAR_4));

  FUNC_2(VAR_24, VAR_10 + VAR_21,
      (VAR_19 != VAR_23) ? VAR_5 : (VAR_11 - VAR_21));
  VAR_21 += VAR_5;
 }

 return (0);
}
