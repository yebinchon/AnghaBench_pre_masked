
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uchar_t ;
typedef int objset_t ;
struct TYPE_3__ {int dde_phys; int dde_key; } ;
typedef TYPE_1__ ddt_entry_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ,int,int) ;
 int * FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int,int*,int ,int*,int*) ;
 int FUNC_5 (int *,int,int*,int ,int,int,int *) ;

__attribute__((used)) static int
FUNC_6(objset_t *VAR_2, uint64_t VAR_3, ddt_entry_t *VAR_4)
{
 uchar_t *VAR_5;
 uint64_t VAR_6, VAR_7;
 int VAR_8;

 VAR_5 = FUNC_2(sizeof (VAR_4->dde_phys) + 1, VAR_1);

 VAR_8 = FUNC_4(VAR_2, VAR_3, (uint64_t *)&VAR_4->dde_key,
     VAR_0, &VAR_6, &VAR_7);
 if (VAR_8)
  goto out;

 FUNC_0(VAR_6 == 1);
 FUNC_0(VAR_7 <= (sizeof (VAR_4->dde_phys) + 1));

 VAR_8 = FUNC_5(VAR_2, VAR_3, (uint64_t *)&VAR_4->dde_key,
     VAR_0, 1, VAR_7, VAR_5);
 if (VAR_8)
  goto out;

 FUNC_1(VAR_5, VAR_4->dde_phys, VAR_7, sizeof (VAR_4->dde_phys));
out:
 FUNC_3(VAR_5, sizeof (VAR_4->dde_phys) + 1);

 return (VAR_8);
}
