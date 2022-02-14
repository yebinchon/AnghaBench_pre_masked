
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int vnode_t ;
struct TYPE_4__ {char* scd_path; } ;
typedef TYPE_1__ spa_config_dirent_t ;
typedef int nvlist_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
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
 int FUNC_0 (int *,int,int,int ,int ,int *) ;
 int FUNC_1 (int *,int ,int ,int *) ;
 char* FUNC_2 (int *,size_t*) ;
 int FUNC_3 (char*,size_t) ;
 int VAR_13 ;
 int FUNC_4 (char*,int ) ;
 char* FUNC_5 (int ,int ) ;
 int FUNC_6 (char*,int ,char*,char*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (char*,int ,int,int,int **,int ,int ) ;
 int FUNC_9 (int ,int *,char*,size_t,int ,int ,int ,int ,int ,int *) ;
 int FUNC_10 (char*,int ,int ) ;
 int FUNC_11 (char*,char*,int ) ;

__attribute__((used)) static int
FUNC_12(spa_config_dirent_t *VAR_14, nvlist_t *VAR_15)
{
 size_t VAR_16;
 char *VAR_17;
 vnode_t *VAR_18;
 int VAR_19 = VAR_6 | VAR_5 | VAR_2 | VAR_3;
 char *VAR_20;
 int VAR_21;




 if (VAR_15 == ((void*)0)) {
  VAR_21 = FUNC_7(VAR_14);
  if (VAR_21 == VAR_1)
   VAR_21 = 0;

  return (VAR_21);
 }




 VAR_17 = FUNC_2(VAR_15, &VAR_16);
 VAR_20 = FUNC_5(VAR_8, VAR_7);
 (void) FUNC_6(VAR_20, VAR_8, "%s.tmp", VAR_14->scd_path);

 VAR_21 = FUNC_8(VAR_20, VAR_11, VAR_19, 0644, &VAR_18, VAR_0, 0);
 if (VAR_21 == 0) {
  VAR_21 = FUNC_9(VAR_12, VAR_18, VAR_17, VAR_16, 0, VAR_11,
      0, VAR_9, VAR_13, ((void*)0));
  if (VAR_21 == 0)
   VAR_21 = FUNC_1(VAR_18, VAR_4, VAR_13, ((void*)0));
  if (VAR_21 == 0)
   VAR_21 = FUNC_11(VAR_20, VAR_14->scd_path, VAR_11);
  (void) FUNC_0(VAR_18, VAR_19, 1, 0, VAR_13, ((void*)0));
 }

 (void) FUNC_10(VAR_20, VAR_11, VAR_10);


 FUNC_3(VAR_17, VAR_16);
 FUNC_4(VAR_20, VAR_8);
 return (VAR_21);
}
