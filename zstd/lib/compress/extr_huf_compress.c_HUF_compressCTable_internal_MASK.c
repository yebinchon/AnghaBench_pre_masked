
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ HUF_nbStreams_e ;
typedef int HUF_CElt ;
typedef int BYTE ;


 size_t FUNC_0 (int *,int,void const*,size_t,int const*,int const) ;
 size_t FUNC_1 (int *,int,void const*,size_t,int const*,int const) ;
 scalar_t__ FUNC_2 (size_t const) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static size_t FUNC_3(
                BYTE* const VAR_1, BYTE* VAR_2, BYTE* const VAR_3,
                const void* VAR_4, size_t VAR_5,
                HUF_nbStreams_e VAR_6, const HUF_CElt* VAR_7, const int VAR_8)
{
    size_t const VAR_9 = (VAR_6==VAR_0) ?
                         FUNC_0(VAR_2, VAR_3 - VAR_2, VAR_4, VAR_5, VAR_7, VAR_8) :
                         FUNC_1(VAR_2, VAR_3 - VAR_2, VAR_4, VAR_5, VAR_7, VAR_8);
    if (FUNC_2(VAR_9)) { return VAR_9; }
    if (VAR_9==0) { return 0; }
    VAR_2 += VAR_9;

    if ((size_t)(VAR_2-VAR_1) >= VAR_5-1) { return 0; }
    return VAR_2-VAR_1;
}
