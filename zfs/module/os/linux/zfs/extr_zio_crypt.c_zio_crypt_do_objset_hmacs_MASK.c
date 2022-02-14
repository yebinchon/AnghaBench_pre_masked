
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int zk_version; int zk_hmac_key; } ;
typedef TYPE_2__ zio_crypt_key_t ;
typedef scalar_t__ uint_t ;
typedef int uint8_t ;
typedef int uint64_t ;
struct TYPE_16__ {scalar_t__ dn_type; } ;
struct TYPE_13__ {TYPE_7__ os_projectused_dnode; TYPE_7__ os_groupused_dnode; TYPE_7__ os_userused_dnode; int os_flags; TYPE_7__ os_meta_dnode; int os_type; } ;
typedef TYPE_3__ objset_phys_t ;
struct TYPE_14__ {scalar_t__ cm_param_len; int * cm_param; int cm_type; } ;
typedef TYPE_4__ crypto_mechanism_t ;
struct TYPE_11__ {char* iov_base; int iov_len; } ;
struct TYPE_15__ {int cd_length; TYPE_1__ cd_raw; scalar_t__ cd_offset; int cd_format; } ;
typedef TYPE_5__ crypto_data_t ;
typedef int crypto_context_t ;
typedef int boolean_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int ,TYPE_5__*,int *) ;
 int FUNC_5 (TYPE_4__*,int *,int *,int *,int *) ;
 int FUNC_6 (int ,TYPE_5__*,int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ,int,TYPE_7__*) ;

int
FUNC_9(zio_crypt_key_t *VAR_12, void *VAR_13, uint_t VAR_14,
    boolean_t VAR_15, uint8_t *VAR_16, uint8_t *VAR_17)
{
 int VAR_18;
 crypto_mechanism_t VAR_19;
 crypto_context_t VAR_20;
 crypto_data_t VAR_21;
 objset_phys_t *VAR_22 = VAR_13;
 uint64_t VAR_23;
 boolean_t VAR_24 = (VAR_15 == VAR_10);
 uint8_t VAR_25[VAR_8];
 uint8_t VAR_26[VAR_8];


 VAR_19.cm_type = FUNC_7(VAR_9);
 VAR_19.cm_param = ((void*)0);
 VAR_19.cm_param_len = 0;

 VAR_21.cd_format = VAR_0;
 VAR_21.cd_offset = 0;


 VAR_18 = FUNC_5(&VAR_19, &VAR_12->zk_hmac_key, ((void*)0), &VAR_20, ((void*)0));
 if (VAR_18 != VAR_1) {
  VAR_18 = FUNC_1(VAR_3);
  goto error;
 }


 VAR_23 = (VAR_24) ? VAR_22->os_type : FUNC_0(VAR_22->os_type);
 VAR_21.cd_length = sizeof (uint64_t);
 VAR_21.cd_raw.iov_base = (char *)&VAR_23;
 VAR_21.cd_raw.iov_len = VAR_21.cd_length;

 VAR_18 = FUNC_6(VAR_20, &VAR_21, ((void*)0));
 if (VAR_18 != VAR_1) {
  VAR_18 = FUNC_1(VAR_3);
  goto error;
 }


 VAR_23 = VAR_22->os_flags;
 if (VAR_15)
  VAR_23 = FUNC_0(VAR_23);
 VAR_23 &= VAR_4;
 if (!VAR_10)
  VAR_23 = FUNC_0(VAR_23);

 VAR_21.cd_length = sizeof (uint64_t);
 VAR_21.cd_raw.iov_base = (char *)&VAR_23;
 VAR_21.cd_raw.iov_len = VAR_21.cd_length;

 VAR_18 = FUNC_6(VAR_20, &VAR_21, ((void*)0));
 if (VAR_18 != VAR_1) {
  VAR_18 = FUNC_1(VAR_3);
  goto error;
 }


 VAR_18 = FUNC_8(VAR_20, VAR_12->zk_version,
     VAR_15, &VAR_22->os_meta_dnode);
 if (VAR_18)
  goto error;


 VAR_21.cd_length = VAR_8;
 VAR_21.cd_raw.iov_base = (char *)VAR_25;
 VAR_21.cd_raw.iov_len = VAR_21.cd_length;

 VAR_18 = FUNC_4(VAR_20, &VAR_21, ((void*)0));
 if (VAR_18 != VAR_1) {
  VAR_18 = FUNC_1(VAR_3);
  goto error;
 }

 FUNC_2(VAR_25, VAR_16, VAR_11);





 if ((VAR_14 >= VAR_7 &&
     VAR_22->os_userused_dnode.dn_type == VAR_2 &&
     VAR_22->os_groupused_dnode.dn_type == VAR_2 &&
     VAR_22->os_projectused_dnode.dn_type == VAR_2) ||
     (VAR_14 >= VAR_6 &&
     VAR_22->os_userused_dnode.dn_type == VAR_2 &&
     VAR_22->os_groupused_dnode.dn_type == VAR_2) ||
     (VAR_14 <= VAR_5)) {
  FUNC_3(VAR_17, VAR_11);
  return (0);
 }


 VAR_18 = FUNC_5(&VAR_19, &VAR_12->zk_hmac_key, ((void*)0), &VAR_20, ((void*)0));
 if (VAR_18 != VAR_1) {
  VAR_18 = FUNC_1(VAR_3);
  goto error;
 }


 VAR_23 = VAR_22->os_flags;
 if (VAR_15)
  VAR_23 = FUNC_0(VAR_23);
 VAR_23 &= ~VAR_4;
 if (!VAR_10)
  VAR_23 = FUNC_0(VAR_23);

 VAR_21.cd_length = sizeof (uint64_t);
 VAR_21.cd_raw.iov_base = (char *)&VAR_23;
 VAR_21.cd_raw.iov_len = VAR_21.cd_length;

 VAR_18 = FUNC_6(VAR_20, &VAR_21, ((void*)0));
 if (VAR_18 != VAR_1) {
  VAR_18 = FUNC_1(VAR_3);
  goto error;
 }


 if (VAR_22->os_userused_dnode.dn_type != VAR_2) {
  VAR_18 = FUNC_8(VAR_20, VAR_12->zk_version,
      VAR_15, &VAR_22->os_userused_dnode);
  if (VAR_18)
   goto error;
 }

 if (VAR_22->os_groupused_dnode.dn_type != VAR_2) {
  VAR_18 = FUNC_8(VAR_20, VAR_12->zk_version,
      VAR_15, &VAR_22->os_groupused_dnode);
  if (VAR_18)
   goto error;
 }

 if (VAR_22->os_projectused_dnode.dn_type != VAR_2 &&
     VAR_14 >= VAR_7) {
  VAR_18 = FUNC_8(VAR_20, VAR_12->zk_version,
      VAR_15, &VAR_22->os_projectused_dnode);
  if (VAR_18)
   goto error;
 }


 VAR_21.cd_length = VAR_8;
 VAR_21.cd_raw.iov_base = (char *)VAR_26;
 VAR_21.cd_raw.iov_len = VAR_21.cd_length;

 VAR_18 = FUNC_4(VAR_20, &VAR_21, ((void*)0));
 if (VAR_18 != VAR_1) {
  VAR_18 = FUNC_1(VAR_3);
  goto error;
 }

 FUNC_2(VAR_26, VAR_17, VAR_11);

 return (0);

error:
 FUNC_3(VAR_16, VAR_11);
 FUNC_3(VAR_17, VAR_11);
 return (VAR_18);
}
