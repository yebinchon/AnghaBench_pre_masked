
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_15__ {int pos; } ;
typedef TYPE_1__ zpl_dir_context_t ;
struct TYPE_16__ {int z_id; scalar_t__ z_zn_prefetch; scalar_t__ z_unlinked; int z_sa_hdl; } ;
typedef TYPE_2__ znode_t ;
struct TYPE_17__ {int * z_os; } ;
typedef TYPE_3__ zfsvfs_t ;
typedef int zap_cursor_t ;
struct TYPE_18__ {int za_integer_length; scalar_t__ za_num_integers; int za_name; int za_first_integer; scalar_t__ za_normalization_conflict; } ;
typedef TYPE_4__ zap_attribute_t ;
typedef scalar_t__ uint8_t ;
typedef int uint64_t ;
typedef int u_longlong_t ;
struct inode {int dummy; } ;
typedef int parent ;
typedef int objset_t ;
typedef int cred_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__* FUNC_0 (struct inode*) ;
 TYPE_3__* FUNC_1 (struct inode*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int ) ;
 int VAR_5 ;
 char* VAR_6 ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_2__*) ;
 int VAR_7 ;
 int FUNC_9 (int ,char*,int ,int ,int,int ) ;
 int FUNC_10 (int *,int,int ,int ,int ,int ) ;
 int FUNC_11 (int ,int ,int*,int) ;
 int FUNC_12 (int ,char*) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *,int *,int) ;
 int FUNC_17 (int *,int *,int,int) ;
 int FUNC_18 (int *,TYPE_4__*) ;
 int FUNC_19 (int *) ;
 scalar_t__ FUNC_20 (TYPE_2__*) ;
 int FUNC_21 (TYPE_1__*,int ,int ,int,scalar_t__) ;

int
FUNC_22(struct inode *VAR_8, zpl_dir_context_t *VAR_9, cred_t *VAR_10)
{
 znode_t *VAR_11 = FUNC_0(VAR_8);
 zfsvfs_t *VAR_12 = FUNC_1(VAR_8);
 objset_t *VAR_13;
 zap_cursor_t VAR_14;
 zap_attribute_t VAR_15;
 int VAR_16;
 uint8_t VAR_17;
 uint8_t VAR_18;
 int VAR_19 = 0;
 uint64_t VAR_20;
 uint64_t VAR_21;

 FUNC_6(VAR_12);
 FUNC_8(VAR_11);

 if ((VAR_16 = FUNC_11(VAR_11->z_sa_hdl, FUNC_2(VAR_12),
     &VAR_20, sizeof (VAR_20))) != 0)
  goto out;




 if (VAR_11->z_unlinked)
  goto out;

 VAR_16 = 0;
 VAR_13 = VAR_12->z_os;
 VAR_21 = VAR_9->pos;
 VAR_17 = VAR_11->z_zn_prefetch;




 if (VAR_21 <= 3) {



  FUNC_16(&VAR_14, VAR_13, VAR_11->z_id);
 } else {



  FUNC_17(&VAR_14, VAR_13, VAR_11->z_id, VAR_21);
 }




 while (!VAR_19) {
  uint64_t VAR_22;



  if (VAR_21 == 0) {
   (void) FUNC_12(VAR_15.za_name, ".");
   VAR_15.za_normalization_conflict = 0;
   VAR_22 = VAR_11->z_id;
   VAR_18 = VAR_2;
  } else if (VAR_21 == 1) {
   (void) FUNC_12(VAR_15.za_name, "..");
   VAR_15.za_normalization_conflict = 0;
   VAR_22 = VAR_20;
   VAR_18 = VAR_2;
  } else if (VAR_21 == 2 && FUNC_20(VAR_11)) {
   (void) FUNC_12(VAR_15.za_name, VAR_6);
   VAR_15.za_normalization_conflict = 0;
   VAR_22 = VAR_5;
   VAR_18 = VAR_2;
  } else {



   if ((VAR_16 = FUNC_18(&VAR_14, &VAR_15))) {
    if (VAR_16 == VAR_3)
     break;
    else
     goto update;
   }
   if (VAR_15.za_integer_length != 8 ||
       VAR_15.za_num_integers == 0) {
    FUNC_9(VAR_1, "zap_readdir: bad directory "
        "entry, obj = %lld, offset = %lld, "
        "length = %d, num = %lld\n",
        (u_longlong_t)VAR_11->z_id,
        (u_longlong_t)VAR_21,
        VAR_15.za_integer_length,
        (u_longlong_t)VAR_15.za_num_integers);
    VAR_16 = FUNC_3(VAR_4);
    goto update;
   }

   VAR_22 = FUNC_4(VAR_15.za_first_integer);
   VAR_18 = FUNC_5(VAR_15.za_first_integer);
  }

  VAR_19 = !FUNC_21(VAR_9, VAR_15.za_name, FUNC_13(VAR_15.za_name),
      VAR_22, VAR_18);
  if (VAR_19)
   break;


  if (VAR_17) {
   FUNC_10(VAR_13, VAR_22, 0, 0, 0,
       VAR_7);
  }




  if (VAR_21 > 2 || (VAR_21 == 2 && !FUNC_20(VAR_11))) {
   FUNC_14(&VAR_14);
   VAR_21 = FUNC_19(&VAR_14);
  } else {
   VAR_21 += 1;
  }
  VAR_9->pos = VAR_21;
 }
 VAR_11->z_zn_prefetch = VAR_0;

update:
 FUNC_15(&VAR_14);
 if (VAR_16 == VAR_3)
  VAR_16 = 0;
out:
 FUNC_7(VAR_12);

 return (VAR_16);
}
