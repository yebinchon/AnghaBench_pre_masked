
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CFStringRef ;
typedef scalar_t__ CFIndex ;
typedef int CFArrayRef ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 char* FUNC_2 (int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static char* FUNC_3(CFArrayRef VAR_1)
{
    CFIndex VAR_2 = FUNC_0(VAR_1);

    if (VAR_2 <= 0)
        return ((void*)0);

    CFStringRef VAR_3 = FUNC_1(VAR_1, 0);
    return FUNC_2(VAR_3, VAR_0);
}
