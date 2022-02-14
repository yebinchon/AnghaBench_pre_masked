
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int U32 ;
typedef int HUF_DSeqX6 ;
typedef int HUF_DDescX6 ;
typedef int BYTE ;
typedef int BIT_DStream_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int ,int *,int const*,int const*,int const) ;

__attribute__((used)) static inline size_t FUNC_5(BYTE* VAR_1, BIT_DStream_t* VAR_2, BYTE* const VAR_3, const U32* VAR_4, const U32 VAR_5)
{
    const void* VAR_6 = VAR_4+1;
    const HUF_DDescX6* VAR_7 = (const HUF_DDescX6*)(VAR_6);
    const void* VAR_8 = VAR_4 + 1 + ((size_t)1<<(VAR_5-1));
    const HUF_DSeqX6* VAR_9 = (const HUF_DSeqX6*)(VAR_8);
    BYTE* const VAR_10 = VAR_1;


    while ((FUNC_0(VAR_2) == VAR_0) && (VAR_1 <= VAR_3-16))
    {
        FUNC_3(VAR_1, VAR_2);
        FUNC_2(VAR_1, VAR_2);
        FUNC_3(VAR_1, VAR_2);
        FUNC_1(VAR_1, VAR_2);
    }


    while ((FUNC_0(VAR_2) == VAR_0) && (VAR_1 <= VAR_3-4))
        FUNC_1(VAR_1, VAR_2);

    while (VAR_1 <= VAR_3-4)
        FUNC_1(VAR_1, VAR_2);

    while (VAR_1 < VAR_3)
        VAR_1 += FUNC_4(VAR_1, (U32)(VAR_3-VAR_1), VAR_2, VAR_7, VAR_9, VAR_5);

    return VAR_1-VAR_10;
}
