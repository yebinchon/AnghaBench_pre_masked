
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int objset_t ;
typedef int dmu_tx_t ;
typedef int bpobj_phys_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int *,int ,int,int ,int,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ) ;

uint64_t
FUNC_4(objset_t *VAR_8, int VAR_9, dmu_tx_t *VAR_10)
{
 int VAR_11;

 if (FUNC_3(FUNC_1(VAR_8)) < VAR_6)
  VAR_11 = VAR_0;
 else if (FUNC_3(FUNC_1(VAR_8)) < VAR_7)
  VAR_11 = VAR_1;
 else if (!FUNC_2(FUNC_1(VAR_8),
     VAR_5))
  VAR_11 = VAR_2;
 else
  VAR_11 = sizeof (bpobj_phys_t);

 return (FUNC_0(VAR_8, VAR_3, VAR_9,
     VAR_4, VAR_11, VAR_10));
}
