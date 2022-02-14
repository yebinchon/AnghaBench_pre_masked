
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int objset_t ;
typedef int dnode_t ;
typedef int dmu_buf_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ,int,void*,int*,int ***,int ) ;
 int FUNC_1 (int *,int ,int ,int **) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static int
FUNC_3(objset_t *VAR_2, uint64_t VAR_3, uint64_t VAR_4,
    uint64_t VAR_5, int VAR_6, void *VAR_7, int *VAR_8, dmu_buf_t ***VAR_9)
{
 dnode_t *VAR_10;
 int VAR_11;

 VAR_11 = FUNC_1(VAR_2, VAR_3, VAR_1, &VAR_10);
 if (VAR_11)
  return (VAR_11);

 VAR_11 = FUNC_0(VAR_10, VAR_4, VAR_5, VAR_6, VAR_7,
     VAR_8, VAR_9, VAR_0);

 FUNC_2(VAR_10, VAR_1);

 return (VAR_11);
}
