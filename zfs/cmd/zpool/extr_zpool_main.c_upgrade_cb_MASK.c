
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zpool_handle_t ;
struct TYPE_2__ {scalar_t__ cb_version; void* cb_first; } ;
typedef TYPE_1__ upgrade_cbdata_t ;
typedef scalar_t__ uint64_t ;
typedef int nvlist_t ;
typedef void* boolean_t ;


 void* VAR_0 ;
 void* VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 char* FUNC_2 (char*) ;
 int VAR_5 ;
 void* VAR_6 ;
 scalar_t__ FUNC_3 (int *,int ,scalar_t__*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *,int*) ;
 int FUNC_6 (int *,scalar_t__) ;
 int FUNC_7 (int) ;
 int * FUNC_8 (int *,int *) ;
 int FUNC_9 (int ,int ) ;

__attribute__((used)) static int
FUNC_10(zpool_handle_t *VAR_7, void *VAR_8)
{
 upgrade_cbdata_t *VAR_9 = VAR_8;
 nvlist_t *VAR_10;
 uint64_t VAR_11;
 boolean_t VAR_12 = VAR_0;
 int VAR_13;

 VAR_10 = FUNC_8(VAR_7, ((void*)0));
 FUNC_7(FUNC_3(VAR_10, VAR_3,
     &VAR_11) == 0);

 FUNC_1(FUNC_0(VAR_11));

 if (VAR_11 < VAR_9->cb_version) {
  VAR_9->cb_first = VAR_0;
  VAR_13 = FUNC_6(VAR_7, VAR_9->cb_version);
  if (VAR_13 != 0)
   return (VAR_13);
  VAR_12 = VAR_1;







  (void) FUNC_9(VAR_4, VAR_5);
  VAR_6 = VAR_0;
 }

 if (VAR_9->cb_version >= VAR_2) {
  int VAR_14;
  VAR_13 = FUNC_5(VAR_7, &VAR_14);
  if (VAR_13 != 0)
   return (VAR_13);

  if (VAR_14 > 0) {
   VAR_9->cb_first = VAR_0;
   VAR_12 = VAR_1;
  }
 }

 if (VAR_12) {
  (void) FUNC_4(FUNC_2("\n"));
 }

 return (0);
}
