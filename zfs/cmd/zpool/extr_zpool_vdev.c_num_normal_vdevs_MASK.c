
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint_t ;
typedef scalar_t__ uint64_t ;
typedef int nvlist_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int *,int ,int ***,size_t*) ;
 int FUNC_2 (int *,int ,scalar_t__*) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int
FUNC_4(nvlist_t *VAR_4)
{
 nvlist_t **VAR_5;
 uint_t VAR_6, VAR_7, VAR_8 = 0;

 FUNC_3(FUNC_1(VAR_4, VAR_2,
     &VAR_5, &VAR_7) == 0);

 for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++) {
  uint64_t VAR_9 = VAR_0;

  (void) FUNC_2(VAR_5[VAR_6], VAR_3, &VAR_9);
  if (VAR_9)
   continue;
  if (FUNC_0(VAR_5[VAR_6], VAR_1))
   continue;

  VAR_8++;
 }

 return (VAR_8);
}
