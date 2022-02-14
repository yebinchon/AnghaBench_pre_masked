
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t varInds_t ;
typedef size_t const U32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int,int) ;

 int FUNC_3 (int ) ;



 size_t const* VAR_0 ;

 scalar_t__* VAR_1 ;



 size_t const* VAR_2 ;


__attribute__((used)) static U32 FUNC_4(varInds_t VAR_3, int VAR_4)
{
    U32 const VAR_5 = (U32)FUNC_1(FUNC_2(VAR_4, (int)VAR_1[VAR_3] - 1), 0);
    switch(VAR_3) {
        case 128:
        case 135:
        case 133:
        case 131:
        case 132:
        case 130:
            return VAR_0[VAR_3] + VAR_5;
        case 129:
            return VAR_2[VAR_5];
        case 134:
            return VAR_5 - 1;
        case 136:
        default:;
    }
    FUNC_0("Error, not a valid param\n ");
    FUNC_3(0);
    return (U32)-1;
}
