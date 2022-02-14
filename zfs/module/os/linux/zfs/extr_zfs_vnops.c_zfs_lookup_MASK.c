
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {int z_pflags; int * z_sa_hdl; } ;
typedef TYPE_1__ znode_t ;
struct TYPE_14__ {scalar_t__ z_utf8; } ;
typedef TYPE_2__ zfsvfs_t ;
struct inode {int i_mode; } ;
typedef int pathname_t ;
typedef int cred_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 TYPE_2__* FUNC_1 (struct inode*) ;
 int VAR_7 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_8 ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int VAR_9 ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (char*) ;
 scalar_t__ FUNC_10 (char*,int ,int *,int ,int*) ;
 int FUNC_11 (TYPE_1__*,char*,struct inode**,int,int*,int *) ;
 int FUNC_12 (TYPE_1__*,int *) ;
 int FUNC_13 (TYPE_1__*,struct inode**,int *,int) ;
 int FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (TYPE_1__*,int ,int ,int ,int *) ;

int
FUNC_16(struct inode *VAR_10, char *VAR_11, struct inode **VAR_12, int VAR_13,
    cred_t *VAR_14, int *VAR_15, pathname_t *VAR_16)
{
 znode_t *VAR_17 = FUNC_0(VAR_10);
 zfsvfs_t *VAR_18 = FUNC_1(VAR_10);
 int VAR_19 = 0;
 if (!(VAR_13 & (VAR_7 | VAR_6))) {

  if (!FUNC_3(VAR_10->i_mode)) {
   return (FUNC_2(VAR_5));
  } else if (VAR_17->z_sa_hdl == ((void*)0)) {
   return (FUNC_2(VAR_4));
  }

  if (VAR_11[0] == 0 || (VAR_11[0] == '.' && VAR_11[1] == '\0')) {
   VAR_19 = FUNC_12(VAR_17, VAR_14);
   if (!VAR_19) {
    *VAR_12 = VAR_10;
    FUNC_7(*VAR_12);
    return (0);
   }
   return (VAR_19);
  }
 }

 FUNC_4(VAR_18);
 FUNC_6(VAR_17);

 *VAR_12 = ((void*)0);

 if (VAR_13 & VAR_7) {




  if (VAR_17->z_pflags & VAR_9) {
   FUNC_5(VAR_18);
   return (FUNC_2(VAR_3));
  }

  if ((VAR_19 = FUNC_13(VAR_17, VAR_12, VAR_14, VAR_13))) {
   FUNC_5(VAR_18);
   return (VAR_19);
  }





  if ((VAR_19 = FUNC_15(FUNC_0(*VAR_12), VAR_0, 0,
      VAR_1, VAR_14))) {
   FUNC_8(*VAR_12);
   *VAR_12 = ((void*)0);
  }

  FUNC_5(VAR_18);
  return (VAR_19);
 }

 if (!FUNC_3(VAR_10->i_mode)) {
  FUNC_5(VAR_18);
  return (FUNC_2(VAR_5));
 }





 if ((VAR_19 = FUNC_15(VAR_17, VAR_0, 0, VAR_1, VAR_14))) {
  FUNC_5(VAR_18);
  return (VAR_19);
 }

 if (VAR_18->z_utf8 && FUNC_10(VAR_11, FUNC_9(VAR_11),
     ((void*)0), VAR_8, &VAR_19) < 0) {
  FUNC_5(VAR_18);
  return (FUNC_2(VAR_2));
 }

 VAR_19 = FUNC_11(VAR_17, VAR_11, VAR_12, VAR_13, VAR_15, VAR_16);
 if ((VAR_19 == 0) && (*VAR_12))
  FUNC_14(FUNC_0(*VAR_12));

 FUNC_5(VAR_18);
 return (VAR_19);
}
