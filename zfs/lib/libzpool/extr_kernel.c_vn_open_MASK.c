
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int v_fd; int v_dump_fd; int v_path; int v_size; } ;
typedef TYPE_1__ vnode_t ;
struct stat64 {int st_size; int st_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_8 ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (int) ;
 int VAR_9 ;
 int FUNC_3 (int,int ,int ) ;
 int FUNC_4 (int,struct stat64*) ;
 int FUNC_5 (char*,int,int) ;
 int FUNC_6 (char*,int,char*,char*,char*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,struct stat64*) ;
 int FUNC_9 (int) ;
 int FUNC_10 (char*,int) ;
 void* FUNC_11 (int,int ) ;
 char* VAR_10 ;

int
FUNC_12(char *VAR_11, int VAR_12, int VAR_13, int VAR_14, vnode_t **VAR_15, int VAR_16, int VAR_17)
{
 int VAR_18 = -1;
 int VAR_19 = -1;
 vnode_t *VAR_20;
 int VAR_21 = 0;
 struct stat64 VAR_22;
 int VAR_23;

 if (!(VAR_13 & VAR_0) && FUNC_8(VAR_11, &VAR_22) == -1) {
  VAR_23 = VAR_9;
  return (VAR_23);
 }

 if (!(VAR_13 & VAR_0) && FUNC_0(VAR_22.st_mode))
  VAR_13 |= VAR_6;

 if (VAR_13 & VAR_0)
  VAR_21 = FUNC_9(0);





 VAR_18 = FUNC_5(VAR_11, VAR_13 - VAR_2, VAR_14);
 if (VAR_18 == -1) {
  VAR_23 = VAR_9;
  return (VAR_23);
 }

 if (VAR_13 & VAR_0)
  (void) FUNC_9(VAR_21);

 if (VAR_10 != ((void*)0)) {
  char *VAR_24 = FUNC_11(VAR_4, VAR_8);
  (void) FUNC_6(VAR_24, VAR_4,
      "%s/%s", VAR_10, FUNC_1(VAR_11));
  VAR_19 = FUNC_5(VAR_24, VAR_5 | VAR_7, 0666);
  FUNC_10(VAR_24, VAR_4);
  if (VAR_19 == -1) {
   VAR_23 = VAR_9;
   FUNC_2(VAR_18);
   return (VAR_23);
  }
 } else {
  VAR_19 = -1;
 }

 if (FUNC_4(VAR_18, &VAR_22) == -1) {
  VAR_23 = VAR_9;
  FUNC_2(VAR_18);
  if (VAR_19 != -1)
   FUNC_2(VAR_19);
  return (VAR_23);
 }

 (void) FUNC_3(VAR_18, VAR_3, VAR_1);

 *VAR_15 = VAR_20 = FUNC_11(sizeof (vnode_t), VAR_8);

 VAR_20->v_fd = VAR_18;
 VAR_20->v_size = VAR_22.st_size;
 VAR_20->v_path = FUNC_7(VAR_11);
 VAR_20->v_dump_fd = VAR_19;

 return (0);
}
