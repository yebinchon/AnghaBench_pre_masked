
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int val ;
typedef scalar_t__ uint64_t ;
typedef int objset_t ;
typedef int nvlist_t ;
struct TYPE_4__ {int drc_os; } ;
typedef TYPE_1__ dmu_recv_cookie_t ;
struct TYPE_5__ {int * dp_meta_objset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 TYPE_3__* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int *,char*,scalar_t__*) ;
 int FUNC_5 (int *,scalar_t__,int ,int,int,scalar_t__*) ;

__attribute__((used)) static int
FUNC_6(dmu_recv_cookie_t *VAR_3, nvlist_t *VAR_4)
{
 uint64_t VAR_5;
 objset_t *VAR_6 = FUNC_3(VAR_3->drc_os)->dp_meta_objset;
 uint64_t VAR_7 = FUNC_2(VAR_3->drc_os);
 uint64_t VAR_8, VAR_9;

 if (FUNC_4(VAR_4,
     "resume_object", &VAR_8) != 0 ||
     FUNC_4(VAR_4,
     "resume_offset", &VAR_9) != 0) {
  return (FUNC_0(VAR_2));
 }
 FUNC_1(FUNC_5(VAR_6, VAR_7,
     VAR_0, sizeof (VAR_5), 1, &VAR_5));
 if (VAR_8 != VAR_5)
  return (FUNC_0(VAR_2));
 FUNC_1(FUNC_5(VAR_6, VAR_7,
     VAR_1, sizeof (VAR_5), 1, &VAR_5));
 if (VAR_9 != VAR_5)
  return (FUNC_0(VAR_2));

 return (0);
}
