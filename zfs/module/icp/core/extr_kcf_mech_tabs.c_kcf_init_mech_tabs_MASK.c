
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int mod_hash_val_t ;
typedef int mod_hash_key_t ;
typedef size_t kcf_ops_class_t ;
struct TYPE_7__ {scalar_t__* me_name; int me_mechid; int me_mutex; } ;
typedef TYPE_1__ kcf_mech_entry_t ;
struct TYPE_12__ {void* me_threshold; int me_name; } ;
struct TYPE_11__ {void* me_threshold; int me_name; } ;
struct TYPE_10__ {void* me_threshold; int me_name; } ;
struct TYPE_9__ {int met_size; TYPE_1__* met_tab; } ;
struct TYPE_8__ {int me_name; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (size_t,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 void* VAR_20 ;
 void* VAR_21 ;
 TYPE_6__* VAR_22 ;
 void* VAR_23 ;
 void* VAR_24 ;
 TYPE_5__* VAR_25 ;
 TYPE_4__* VAR_26 ;
 void* VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 TYPE_3__* VAR_31 ;
 TYPE_2__* VAR_32 ;
 void* VAR_33 ;
 void* VAR_34 ;
 int FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int VAR_35 ;
 int FUNC_3 (int *,int *,int ,int *) ;
 int FUNC_4 (int ,int ,int ) ;

void
FUNC_5(void)
{
 int VAR_36, VAR_37;
 kcf_ops_class_t VAR_38;
 kcf_mech_entry_t *VAR_39;



 FUNC_3(&VAR_30, ((void*)0), VAR_3, ((void*)0));




 (void) FUNC_4(VAR_25[0].me_name, VAR_12,
     VAR_0);
 VAR_25[0].me_threshold = VAR_27;

 (void) FUNC_4(VAR_25[1].me_name, VAR_16,
     VAR_0);
 VAR_25[1].me_threshold = VAR_34;


 (void) FUNC_4(VAR_22[0].me_name, VAR_10,
     VAR_0);
 VAR_22[0].me_threshold = VAR_24;

 (void) FUNC_4(VAR_22[1].me_name, VAR_8,
     VAR_0);
 VAR_22[1].me_threshold = VAR_23;

 (void) FUNC_4(VAR_22[2].me_name, VAR_11,
     VAR_0);
 VAR_22[2].me_threshold = VAR_24;

 (void) FUNC_4(VAR_22[3].me_name, VAR_9,
     VAR_0);
 VAR_22[3].me_threshold = VAR_23;

 (void) FUNC_4(VAR_22[4].me_name, VAR_6,
     VAR_0);
 VAR_22[4].me_threshold = VAR_21;

 (void) FUNC_4(VAR_22[5].me_name, VAR_7,
     VAR_0);
 VAR_22[5].me_threshold = VAR_21;

 (void) FUNC_4(VAR_22[6].me_name, VAR_4,
     VAR_0);
 VAR_22[6].me_threshold = VAR_20;

 (void) FUNC_4(VAR_22[7].me_name, VAR_5,
     VAR_0);
 VAR_22[7].me_threshold = VAR_20;

 (void) FUNC_4(VAR_22[8].me_name, VAR_15,
     VAR_0);
 VAR_22[8].me_threshold = VAR_33;



 (void) FUNC_4(VAR_26[0].me_name, VAR_13,
     VAR_0);
 VAR_26[0].me_threshold = VAR_27;

 (void) FUNC_4(VAR_26[1].me_name, VAR_14,
     VAR_0);
 VAR_26[1].me_threshold = VAR_27;

 (void) FUNC_4(VAR_26[2].me_name, VAR_17,
     VAR_0);
 VAR_26[2].me_threshold = VAR_34;

 (void) FUNC_4(VAR_26[3].me_name, VAR_18,
     VAR_0);
 VAR_26[3].me_threshold = VAR_34;



 (void) FUNC_4(VAR_32[0].me_name, VAR_19,
     VAR_0);

 VAR_28 = FUNC_1("kcf mech2id hash",
     VAR_29, VAR_35);

 for (VAR_38 = VAR_1; VAR_38 <= VAR_2; VAR_38++) {
  VAR_37 = VAR_31[VAR_38].met_size;
  VAR_39 = VAR_31[VAR_38].met_tab;
  for (VAR_36 = 0; VAR_36 < VAR_37; VAR_36++) {
   FUNC_3(&(VAR_39[VAR_36].me_mutex), ((void*)0),
       VAR_3, ((void*)0));
   if (VAR_39[VAR_36].me_name[0] != 0) {
    VAR_39[VAR_36].me_mechid = FUNC_0(VAR_38, VAR_36);
    (void) FUNC_2(VAR_28,
        (mod_hash_key_t)VAR_39[VAR_36].me_name,
        (mod_hash_val_t)&(VAR_39[VAR_36].me_mechid));
   }
  }
 }
}
