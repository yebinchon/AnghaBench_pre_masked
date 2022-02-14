
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * fptr_MFCreateAlignedMemoryBuffer; int * fptr_MFCreateMemoryBuffer; int * fptr_MFCreateSample; int * fptr_MFTEnumEx; int mfplat_dll; } ;
typedef TYPE_1__ MFHandle ;


 scalar_t__ FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (char*) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_3(MFHandle *VAR_6)
{

    VAR_6->mfplat_dll = FUNC_1(FUNC_2("mfplat.dll"));
    if (!VAR_6->mfplat_dll)
        return VAR_4;

    VAR_6->fptr_MFTEnumEx = (void*)FUNC_0(VAR_6->mfplat_dll, "MFTEnumEx");
    VAR_6->fptr_MFCreateSample = (void*)FUNC_0(VAR_6->mfplat_dll, "MFCreateSample");
    VAR_6->fptr_MFCreateMemoryBuffer = (void*)FUNC_0(VAR_6->mfplat_dll, "MFCreateMemoryBuffer");
    VAR_6->fptr_MFCreateAlignedMemoryBuffer = (void*)FUNC_0(VAR_6->mfplat_dll, "MFCreateAlignedMemoryBuffer");
    if (!VAR_6->fptr_MFTEnumEx || !VAR_6->fptr_MFCreateSample || !VAR_6->fptr_MFCreateMemoryBuffer || !VAR_6->fptr_MFCreateAlignedMemoryBuffer)
        return VAR_4;







    return VAR_5;
}
