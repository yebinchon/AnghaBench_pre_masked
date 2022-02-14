
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int enterprise_features_enabled; int end_time; int start_time; int kind; int id; } ;
typedef TYPE_1__ LicenseInfo ;
typedef int Jsonb ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *) ;
 char* FUNC_3 (int *) ;
 char* FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(Jsonb *VAR_1, LicenseInfo *VAR_2)
{
 char *VAR_3 = FUNC_3(VAR_1);

 if (VAR_3 == ((void*)0))
  FUNC_1(VAR_0, "missing id in license key");
 FUNC_0(VAR_2->id, VAR_3, sizeof(VAR_2->id));
 FUNC_0(VAR_2->kind, FUNC_4(VAR_1), sizeof(VAR_2->kind));
 VAR_2->start_time = FUNC_5(VAR_1);
 VAR_2->end_time = FUNC_2(VAR_1);
 VAR_2->enterprise_features_enabled = 1;
}
