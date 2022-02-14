
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t U32 ;
typedef int U16 ;
typedef int BYTE ;


 int FUNC_0 (int * const,int ) ;
 int FUNC_1 (int * const,size_t) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int FUNC_4 (int * const,void const*,size_t) ;
 int VAR_1 ;

size_t FUNC_5 (void* VAR_2, size_t VAR_3, const void* VAR_4, size_t VAR_5)
{
    BYTE* const VAR_6 = (BYTE* const)VAR_2;
    U32 const VAR_7 = 1 + (VAR_5>31) + (VAR_5>4095);

    FUNC_2(VAR_5 + VAR_7 > VAR_3, VAR_0);

    switch(VAR_7)
    {
        case 1:
            VAR_6[0] = (BYTE)((U32)VAR_1 + (VAR_5<<3));
            break;
        case 2:
            FUNC_0(VAR_6, (U16)((U32)VAR_1 + (1<<2) + (VAR_5<<4)));
            break;
        case 3:
            FUNC_1(VAR_6, (U32)((U32)VAR_1 + (3<<2) + (VAR_5<<4)));
            break;
        default:
            FUNC_3(0);
    }

    FUNC_4(VAR_6 + VAR_7, VAR_4, VAR_5);
    return VAR_5 + VAR_7;
}
