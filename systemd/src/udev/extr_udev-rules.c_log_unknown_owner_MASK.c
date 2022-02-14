
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sd_device ;
typedef int UdevRules ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int *,char*,char const*,char const*) ;
 int FUNC_3 (int *,int *,int,char*,char const*,char const*) ;

__attribute__((used)) static void FUNC_4(sd_device *VAR_2, UdevRules *VAR_3, int VAR_4, const char *VAR_5, const char *VAR_6) {
        if (FUNC_0(FUNC_1(VAR_4), VAR_0, VAR_1))
                FUNC_2(VAR_2, VAR_3, "Unknown %s '%s', ignoring", VAR_5, VAR_6);
        else
                FUNC_3(VAR_2, VAR_3, VAR_4, "Failed to resolve %s '%s', ignoring: %m", VAR_5, VAR_6);
}
