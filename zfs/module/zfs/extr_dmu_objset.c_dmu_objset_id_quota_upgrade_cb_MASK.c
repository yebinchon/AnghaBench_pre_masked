
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_10__ ;


struct TYPE_13__ {int os_flags; } ;
typedef TYPE_1__ objset_t ;
struct TYPE_12__ {void** ds_feature_activation; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 TYPE_10__* FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 scalar_t__ FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (int ,int ) ;

__attribute__((used)) static int
FUNC_10(objset_t *VAR_7)
{
 int VAR_8 = 0;

 if (FUNC_7(VAR_7) &&
     FUNC_5(VAR_7))
  return (0);
 if (FUNC_2(VAR_7))
  return (FUNC_0(VAR_1));
 if (!FUNC_8(VAR_7))
  return (FUNC_0(VAR_2));
 if (!FUNC_4(VAR_7) &&
     FUNC_7(VAR_7))
  return (FUNC_0(VAR_2));

 FUNC_1(VAR_7)->ds_feature_activation[
     VAR_6] = (void *)VAR_0;
 if (FUNC_4(VAR_7))
  FUNC_1(VAR_7)->ds_feature_activation[
      VAR_5] = (void *)VAR_0;

 VAR_8 = FUNC_6(VAR_7);
 if (VAR_8)
  return (VAR_8);

 VAR_7->os_flags |= VAR_4;
 if (FUNC_4(VAR_7))
  VAR_7->os_flags |= VAR_3;

 FUNC_9(FUNC_3(VAR_7), 0);
 return (0);
}
