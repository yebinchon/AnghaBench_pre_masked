
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int U32 ;
struct TYPE_3__ {int nbBits; int const byte; } ;
typedef TYPE_1__ HUF_DElt ;
typedef int FSE_DStream_t ;
typedef int const BYTE ;


 size_t FUNC_0 (int *,int const) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static BYTE FUNC_2(FSE_DStream_t* VAR_0, const HUF_DElt* VAR_1, const U32 VAR_2)
{
        const size_t VAR_3 = FUNC_0(VAR_0, VAR_2);
        const BYTE VAR_4 = VAR_1[VAR_3].byte;
        FUNC_1(VAR_0, VAR_1[VAR_3].nbBits);
        return VAR_4;
}
