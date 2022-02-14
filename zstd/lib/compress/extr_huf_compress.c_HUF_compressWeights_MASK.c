
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int scratchBuffer ;
typedef int U32 ;
typedef int S16 ;
typedef int FSE_CTable ;
typedef int BYTE ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int *,int *,unsigned int,int,int *,int) ;
 int FUNC_4 (int *,int,void const*,size_t,int *) ;
 int FUNC_5 (int *,int,unsigned int*,size_t,unsigned int) ;
 int FUNC_6 (int,size_t,unsigned int) ;
 int FUNC_7 (int *,int,int *,unsigned int,int) ;
 unsigned int FUNC_8 (unsigned int*,unsigned int*,void const*,size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static size_t FUNC_9 (void* VAR_4, size_t VAR_5, const void* VAR_6, size_t VAR_7)
{
    BYTE* const VAR_8 = (BYTE*) VAR_4;
    BYTE* VAR_9 = VAR_8;
    BYTE* const VAR_10 = VAR_8 + VAR_5;

    unsigned VAR_11 = VAR_0;
    U32 VAR_12 = VAR_1;

    FSE_CTable VAR_13[FUNC_2(VAR_1, VAR_0)];
    BYTE VAR_14[1<<VAR_1];

    unsigned VAR_15[VAR_0+1];
    S16 VAR_16[VAR_0+1];


    if (VAR_7 <= 1) return 0;


    { unsigned const VAR_17 = FUNC_8(VAR_15, &VAR_11, VAR_6, VAR_7);
        if (VAR_17 == VAR_7) return 1;
        if (VAR_17 == 1) return 0;
    }

    VAR_12 = FUNC_6(VAR_12, VAR_7, VAR_11);
    FUNC_0( FUNC_5(VAR_16, VAR_12, VAR_15, VAR_7, VAR_11) );


    { FUNC_1(VAR_3, FUNC_7(VAR_9, VAR_10-VAR_9, VAR_16, VAR_11, VAR_12) );
        VAR_9 += VAR_3;
    }


    FUNC_0( FUNC_3(VAR_13, VAR_16, VAR_11, VAR_12, VAR_14, sizeof(VAR_14)) );
    { FUNC_1(VAR_2, FUNC_4(VAR_9, VAR_10 - VAR_9, VAR_6, VAR_7, VAR_13) );
        if (VAR_2 == 0) return 0;
        VAR_9 += VAR_2;
    }

    return VAR_9-VAR_8;
}
