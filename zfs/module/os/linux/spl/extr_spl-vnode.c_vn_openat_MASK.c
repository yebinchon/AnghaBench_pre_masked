
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vnode_t ;
typedef int uio_seg_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int,int ) ;
 int FUNC_3 (int ) ;
 int * VAR_2 ;
 int FUNC_4 (char*,int,char*,char const*) ;
 int FUNC_5 (char const*) ;
 int FUNC_6 (char*,int ,int,int,int **,int,void*) ;

int
FUNC_7(const char *VAR_3, uio_seg_t VAR_4, int VAR_5, int VAR_6,
    vnode_t **VAR_7, int VAR_8, void *VAR_9, vnode_t *VAR_10, int VAR_11)
{
 char *VAR_12;
 int VAR_13, VAR_14;

 FUNC_0(VAR_10 == VAR_2);

 VAR_13 = FUNC_5(VAR_3) + 2;
 VAR_12 = FUNC_2(VAR_13, FUNC_3(VAR_1));
 if (!VAR_12)
  return (VAR_0);

 (void) FUNC_4(VAR_12, VAR_13, "/%s", VAR_3);
 VAR_14 = FUNC_6(VAR_12, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9);
 FUNC_1(VAR_12);

 return (VAR_14);
}
