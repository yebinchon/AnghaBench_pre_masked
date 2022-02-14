
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
typedef int offset_t ;
typedef int nvlist_t ;
struct TYPE_5__ {int f_offset; int f_vnode; } ;
typedef TYPE_1__ file_t ;
struct TYPE_6__ {int dso_dryrun; int dso_arg; int dso_outfunc; int member_0; } ;
typedef TYPE_2__ dmu_send_outparams_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ,int *,int *) ;
 int FUNC_2 (char const*,char*,int ,int ,int ,int ,int ,int ,char*,int,int *,TYPE_2__*) ;
 int VAR_2 ;
 int FUNC_3 (int *,char*) ;
 TYPE_1__* FUNC_4 (int) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,char*,char**) ;
 int FUNC_7 (int *,char*,int *) ;
 int FUNC_8 (int) ;

__attribute__((used)) static int
FUNC_9(const char *VAR_3, nvlist_t *VAR_4, nvlist_t *VAR_5)
{
 int VAR_6;
 offset_t VAR_7;
 char *VAR_8 = ((void*)0);
 int VAR_9;
 file_t *VAR_10;
 boolean_t VAR_11;
 boolean_t VAR_12;
 boolean_t VAR_13;
 boolean_t VAR_14;
 uint64_t VAR_15 = 0;
 uint64_t VAR_16 = 0;
 char *VAR_17 = ((void*)0);

 VAR_9 = FUNC_3(VAR_4, "fd");

 (void) FUNC_6(VAR_4, "fromsnap", &VAR_8);

 VAR_11 = FUNC_5(VAR_4, "largeblockok");
 VAR_12 = FUNC_5(VAR_4, "embedok");
 VAR_13 = FUNC_5(VAR_4, "compressok");
 VAR_14 = FUNC_5(VAR_4, "rawok");

 (void) FUNC_7(VAR_4, "resume_object", &VAR_15);
 (void) FUNC_7(VAR_4, "resume_offset", &VAR_16);

 (void) FUNC_6(VAR_4, "redactbook", &VAR_17);

 if ((VAR_10 = FUNC_4(VAR_9)) == ((void*)0))
  return (FUNC_0(VAR_1));

 VAR_7 = VAR_10->f_offset;
 dmu_send_outparams_t VAR_18 = {0};
 VAR_18.dso_outfunc = VAR_2;
 VAR_18.dso_arg = VAR_10->f_vnode;
 VAR_18.dso_dryrun = VAR_0;
 VAR_6 = FUNC_2(VAR_3, VAR_8, VAR_12, VAR_11, VAR_13,
     VAR_14, VAR_15, VAR_16, VAR_17, VAR_9, &VAR_7, &VAR_18);

 if (FUNC_1(VAR_10->f_vnode, VAR_10->f_offset, &VAR_7, ((void*)0)) == 0)
  VAR_10->f_offset = VAR_7;

 FUNC_8(VAR_9);
 return (VAR_6);
}
