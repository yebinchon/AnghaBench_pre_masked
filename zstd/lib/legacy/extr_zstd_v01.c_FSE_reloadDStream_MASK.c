
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int U32 ;
struct TYPE_3__ {int bitsConsumed; scalar_t__ ptr; scalar_t__ start; void* bitContainer; } ;
typedef TYPE_1__ FSE_DStream_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (scalar_t__) ;

__attribute__((used)) static unsigned FUNC_1(FSE_DStream_t* VAR_4)
{
    if (VAR_4->bitsConsumed > (sizeof(VAR_4->bitContainer)*8))
        return VAR_2;

    if (VAR_4->ptr >= VAR_4->start + sizeof(VAR_4->bitContainer))
    {
        VAR_4->ptr -= VAR_4->bitsConsumed >> 3;
        VAR_4->bitsConsumed &= 7;
        VAR_4->bitContainer = FUNC_0(VAR_4->ptr);
        return VAR_3;
    }
    if (VAR_4->ptr == VAR_4->start)
    {
        if (VAR_4->bitsConsumed < sizeof(VAR_4->bitContainer)*8) return VAR_1;
        return VAR_0;
    }
    {
        U32 VAR_5 = VAR_4->bitsConsumed >> 3;
        U32 VAR_6 = VAR_3;
        if (VAR_4->ptr - VAR_5 < VAR_4->start)
        {
            VAR_5 = (U32)(VAR_4->ptr - VAR_4->start);
            VAR_6 = VAR_1;
        }
        VAR_4->ptr -= VAR_5;
        VAR_4->bitsConsumed -= VAR_5*8;
        VAR_4->bitContainer = FUNC_0(VAR_4->ptr);
        return VAR_6;
    }
}
