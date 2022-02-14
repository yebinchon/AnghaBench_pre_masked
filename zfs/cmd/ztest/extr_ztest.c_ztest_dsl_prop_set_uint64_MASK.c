
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zfs_prop_t ;
typedef scalar_t__ uint64_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_2__ {int zo_verbose; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (char*,char const*,scalar_t__*,char*) ;
 int FUNC_3 (char*,char const*,int ,scalar_t__) ;
 int FUNC_4 (char*,char*,char const*,...) ;
 char* FUNC_5 (int ,int ) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (int ,scalar_t__,char const**) ;
 char* FUNC_8 (int ) ;
 TYPE_1__ VAR_6 ;
 int FUNC_9 (int ) ;

__attribute__((used)) static int
FUNC_10(char *VAR_7, zfs_prop_t VAR_8, uint64_t VAR_9,
    boolean_t VAR_10)
{
 const char *VAR_11 = FUNC_8(VAR_8);
 const char *VAR_12;
 char *VAR_13;
 uint64_t VAR_14;
 int VAR_15;

 VAR_15 = FUNC_3(VAR_7, VAR_11,
     (VAR_10 ? VAR_5 : VAR_4), VAR_9);

 if (VAR_15 == VAR_0) {
  FUNC_9(VAR_1);
  return (VAR_15);
 }
 FUNC_0(VAR_15);

 VAR_13 = FUNC_5(VAR_2, VAR_3);
 FUNC_1(FUNC_2(VAR_7, VAR_11, &VAR_14, VAR_13));

 if (VAR_6.zo_verbose >= 6) {
  int VAR_16;

  VAR_16 = FUNC_7(VAR_8, VAR_14, &VAR_12);
  if (VAR_16)
   (void) FUNC_4("%s %s = %llu at '%s'\n", VAR_7,
       VAR_11, (unsigned long long)VAR_14, VAR_13);
  else
   (void) FUNC_4("%s %s = %s at '%s'\n",
       VAR_7, VAR_11, VAR_12, VAR_13);
 }
 FUNC_6(VAR_13, VAR_2);

 return (VAR_15);
}
