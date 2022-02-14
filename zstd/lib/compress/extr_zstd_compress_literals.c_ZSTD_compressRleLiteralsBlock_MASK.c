
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int U32 ;
typedef int U16 ;
typedef int BYTE ;


 int FUNC_0 (int * const,int ) ;
 int FUNC_1 (int * const,int) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;

size_t FUNC_3 (void* VAR_1, size_t VAR_2, const void* VAR_3, size_t VAR_4)
{
    BYTE* const VAR_5 = (BYTE* const)VAR_1;
    U32 const VAR_6 = 1 + (VAR_4>31) + (VAR_4>4095);

    (void)VAR_2;

    switch(VAR_6)
    {
        case 1:
            VAR_5[0] = (BYTE)((U32)VAR_0 + (VAR_4<<3));
            break;
        case 2:
            FUNC_0(VAR_5, (U16)((U32)VAR_0 + (1<<2) + (VAR_4<<4)));
            break;
        case 3:
            FUNC_1(VAR_5, (U32)((U32)VAR_0 + (3<<2) + (VAR_4<<4)));
            break;
        default:
            FUNC_2(0);
    }

    VAR_5[VAR_6] = *(const BYTE*)VAR_3;
    return VAR_6+1;
}
