
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int XXH_errorcode ;
typedef scalar_t__ XXH_endianess ;
typedef int XXH64_state_t ;


 int FUNC_0 (int *,void const*,size_t,scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

XXH_errorcode FUNC_1 (XXH64_state_t* VAR_4, const void* VAR_5, size_t VAR_6)
{
    XXH_endianess VAR_7 = (XXH_endianess)VAR_0;

    if ((VAR_7==VAR_3) || VAR_1)
        return FUNC_0(VAR_4, VAR_5, VAR_6, VAR_3);
    else
        return FUNC_0(VAR_4, VAR_5, VAR_6, VAR_2);
}
