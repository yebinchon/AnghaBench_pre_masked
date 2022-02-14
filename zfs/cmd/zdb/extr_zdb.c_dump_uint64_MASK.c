
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint64_t ;
typedef int u_longlong_t ;
typedef int objset_t ;
struct TYPE_3__ {size_t doi_max_offset; } ;
typedef TYPE_1__ dmu_object_info_t ;


 int VAR_0 ;
 size_t FUNC_0 (size_t,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,size_t,TYPE_1__*) ;
 int FUNC_3 (int *,size_t,int ,size_t,size_t*,int ) ;
 int* VAR_1 ;
 size_t* FUNC_4 (size_t,int ) ;
 int FUNC_5 (size_t*,size_t) ;
 int FUNC_6 (char*,...) ;

__attribute__((used)) static void
FUNC_7(objset_t *VAR_2, uint64_t VAR_3, void *VAR_4, size_t VAR_5)
{
 uint64_t *VAR_6;
 uint64_t VAR_7;
 if (VAR_1['d'] < 6)
  return;

 if (VAR_4 == ((void*)0)) {
  dmu_object_info_t VAR_8;

  FUNC_1(FUNC_2(VAR_2, VAR_3, &VAR_8));
  VAR_5 = VAR_8.doi_max_offset;





  VAR_7 = FUNC_0(VAR_5, 1 << 20);
  VAR_6 = FUNC_4(VAR_7, VAR_0);

  int VAR_9 = FUNC_3(VAR_2, VAR_3, 0, VAR_7, VAR_6, 0);
  if (VAR_9 != 0) {
   (void) FUNC_6("got error %u from dmu_read\n", VAR_9);
   FUNC_5(VAR_6, VAR_7);
   return;
  }
 } else {




  VAR_7 = FUNC_0(VAR_5, 1 << 20);
  VAR_6 = VAR_4;
 }

 if (VAR_5 == 0) {
  (void) FUNC_6("\t\t[]\n");
  return;
 }

 (void) FUNC_6("\t\t[%0llx", (u_longlong_t)VAR_6[0]);
 for (size_t VAR_10 = 1; VAR_10 * sizeof (uint64_t) < VAR_7; VAR_10++) {
  if (VAR_10 % 4 != 0)
   (void) FUNC_6(", %0llx", (u_longlong_t)VAR_6[VAR_10]);
  else
   (void) FUNC_6(",\n\t\t%0llx", (u_longlong_t)VAR_6[VAR_10]);
 }
 if (VAR_7 != VAR_5)
  (void) FUNC_6(", ... ");
 (void) FUNC_6("]\n");

 if (VAR_4 == ((void*)0))
  FUNC_5(VAR_6, VAR_7);
}
