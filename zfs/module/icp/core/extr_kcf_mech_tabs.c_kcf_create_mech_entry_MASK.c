
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int mod_hash_val_t ;
typedef int mod_hash_key_t ;
typedef size_t kcf_ops_class_t ;
struct TYPE_3__ {scalar_t__* me_name; int me_mutex; int me_mechid; scalar_t__ me_threshold; } ;
typedef TYPE_1__ kcf_mech_entry_t ;
typedef scalar_t__ crypto_mech_type_t ;
struct TYPE_4__ {int met_size; TYPE_1__* met_tab; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int FUNC_0 (size_t,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (char*) ;
 int VAR_9 ;
 TYPE_2__* VAR_10 ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (scalar_t__*,char*,int) ;

__attribute__((used)) static int
FUNC_6(kcf_ops_class_t VAR_11, char *VAR_12)
{
 crypto_mech_type_t VAR_13;
 kcf_mech_entry_t *VAR_14;
 int VAR_15 = 0, VAR_16;

 if ((VAR_11 < VAR_2) || (VAR_11 > VAR_5))
  return (VAR_3);

 if ((VAR_12 == ((void*)0)) || (VAR_12[0] == 0))
  return (VAR_4);




 FUNC_3(&VAR_9);
 VAR_13 = FUNC_1(VAR_12);
 if (VAR_13 != VAR_1) {

  FUNC_4(&VAR_9);
  return (VAR_7);
 }

 VAR_14 = VAR_10[VAR_11].met_tab;
 VAR_16 = VAR_10[VAR_11].met_size;

 while (VAR_15 < VAR_16) {
  FUNC_3(&(VAR_14[VAR_15].me_mutex));
  if (VAR_14[VAR_15].me_name[0] == 0) {

   (void) FUNC_5(VAR_14[VAR_15].me_name, VAR_12,
       VAR_0);
   VAR_14[VAR_15].me_name[VAR_0-1] = '\0';
   VAR_14[VAR_15].me_mechid = FUNC_0(VAR_11, VAR_15);




   VAR_14[VAR_15].me_threshold = 0;

   FUNC_4(&(VAR_14[VAR_15].me_mutex));

   (void) FUNC_2(VAR_8,
       (mod_hash_key_t)VAR_14[VAR_15].me_name,
       (mod_hash_val_t)&(VAR_14[VAR_15].me_mechid));
   break;
  }
  FUNC_4(&(VAR_14[VAR_15].me_mutex));
  VAR_15++;
 }

 FUNC_4(&VAR_9);

 if (VAR_15 == VAR_16) {
  return (VAR_6);
 }

 return (VAR_7);
}
