
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zfs_handle_t ;
typedef int parent ;
typedef int child ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int *,int ,char*,int,int *,int *,int ,int ) ;

__attribute__((used)) static int
FUNC_3(zfs_handle_t **VAR_3, size_t VAR_4, int VAR_5)
{
 char VAR_6[VAR_1];
 char VAR_7[VAR_1];
 int VAR_8;

 FUNC_1(FUNC_2(VAR_3[VAR_5], VAR_2, VAR_6,
     sizeof (VAR_6), ((void*)0), ((void*)0), 0, VAR_0) == 0);

 for (VAR_8 = VAR_5 + 1; VAR_8 < VAR_4; VAR_8++) {
  FUNC_1(FUNC_2(VAR_3[VAR_8], VAR_2, VAR_7,
      sizeof (VAR_7), ((void*)0), ((void*)0), 0, VAR_0) == 0);
  if (!FUNC_0(VAR_6, VAR_7))
   break;
 }
 return (VAR_8);
}
