
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zpool_handle_t ;
typedef unsigned long long uint64_t ;
typedef int nvlist_t ;


 int FUNC_0 (scalar_t__**) ;
 unsigned long long VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int *,scalar_t__) ;
 scalar_t__ FUNC_2 (int *,int ,int **) ;
 int FUNC_3 (int) ;
 scalar_t__** VAR_4 ;
 int * FUNC_4 (int *,int *) ;

__attribute__((used)) static int
FUNC_5(zpool_handle_t *VAR_5, void *VAR_6)
{
 uint64_t *VAR_7 = VAR_6;
 nvlist_t *VAR_8, *VAR_9, *VAR_10;
 uint64_t VAR_11 = 0;
 int VAR_12, VAR_13;

 VAR_8 = FUNC_4(VAR_5, ((void*)0));
 FUNC_3(FUNC_2(VAR_8, VAR_3,
     &VAR_9) == 0);


 if (FUNC_1(VAR_9, VAR_1))
  VAR_11 |= VAR_0;


 if (FUNC_2(VAR_9, VAR_2,
     &VAR_10) != 0) {




  goto end;
 }


 for (VAR_13 = 0; VAR_13 < FUNC_0(VAR_4); VAR_13++) {
  if (!VAR_4[VAR_13][0])
   continue;


  VAR_11 |= (1ULL << VAR_13);
  for (VAR_12 = 0; VAR_4[VAR_13][VAR_12]; VAR_12++) {
   if (!FUNC_1(VAR_10, VAR_4[VAR_13][VAR_12])) {

    VAR_11 = VAR_11 & ~(1ULL << VAR_13);
    break;
   }
  }
 }
end:
 *VAR_7 = *VAR_7 & VAR_11;
 return (0);
}
