
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int total ;
struct TYPE_6__ {int decompUnavailable; int usesCheck; scalar_t__ nbFiles; scalar_t__ decompressedSize; scalar_t__ compressedSize; scalar_t__ numSkippableFrames; scalar_t__ numActualFrames; } ;
typedef TYPE_1__ fileInfo_t ;


 int FUNC_0 (TYPE_1__*,int ,int) ;

__attribute__((used)) static fileInfo_t FUNC_1(fileInfo_t VAR_0, fileInfo_t VAR_1)
{
    fileInfo_t VAR_2;
    FUNC_0(&VAR_2, 0, sizeof(VAR_2));
    VAR_2.numActualFrames = VAR_0 + VAR_1;
    VAR_2.numSkippableFrames = VAR_0 + VAR_1;
    VAR_2.compressedSize = VAR_0 + VAR_1;
    VAR_2.decompressedSize = VAR_0 + VAR_1;
    VAR_2.decompUnavailable = VAR_0 | VAR_1;
    VAR_2.usesCheck = VAR_0 & VAR_1;
    VAR_2.nbFiles = VAR_0 + VAR_1;
    return VAR_2;
}
