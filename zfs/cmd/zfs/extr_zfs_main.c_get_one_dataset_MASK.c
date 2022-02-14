
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int zfs_type_t ;
typedef int zfs_handle_t ;
typedef scalar_t__ time_t ;
struct TYPE_3__ {TYPE_2__* ga_cbp; scalar_t__ ga_verbose; } ;
typedef TYPE_1__ get_all_state_t ;
struct TYPE_4__ {scalar_t__ cb_used; scalar_t__ cb_alloc; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,int (*) (int *,void*),void*) ;

__attribute__((used)) static int
FUNC_7(zfs_handle_t *VAR_3, void *VAR_4)
{
 static char *VAR_5[] = { "-", "\\", "|", "/" };
 static int VAR_6 = 0;
 static int VAR_7 = 0;
 static time_t VAR_8 = (time_t)0;
 get_all_state_t *VAR_9 = VAR_4;
 zfs_type_t VAR_10 = FUNC_5(VAR_3);

 if (VAR_9->ga_verbose) {
  if (--VAR_7 < 0) {
   time_t VAR_11 = FUNC_2(((void*)0));
   if (VAR_8 + VAR_1 < VAR_11) {
    FUNC_3(VAR_5[VAR_6++ % 4]);
    VAR_8 = VAR_11;
   }
   VAR_7 = VAR_0;
  }
 }




 if (FUNC_6(VAR_3, FUNC_7, VAR_4) != 0) {
  FUNC_4(VAR_3);
  return (1);
 }




 if ((VAR_10 & VAR_2) == 0) {
  FUNC_4(VAR_3);
  return (0);
 }
 FUNC_1(VAR_9->ga_cbp, VAR_3);
 FUNC_0(VAR_9->ga_cbp->cb_used <= VAR_9->ga_cbp->cb_alloc);

 return (0);
}
