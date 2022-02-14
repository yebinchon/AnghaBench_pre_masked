
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int componentManufacturer; void* componentSubType; void* componentType; } ;
typedef void* OSType ;
typedef int OSStatus ;
typedef TYPE_1__ AudioComponentDescription ;
typedef int AUNode ;
typedef int AUGraph ;


 int FUNC_0 (int ,TYPE_1__*,int *) ;
 int VAR_0 ;

__attribute__((used)) static OSStatus FUNC_1(AUGraph VAR_1, OSType VAR_2, OSType VAR_3, AUNode *VAR_4)
{
    AudioComponentDescription VAR_5 = {};
    VAR_5.componentType = VAR_2;
    VAR_5.componentSubType = VAR_3;
    VAR_5.componentManufacturer = VAR_0;

    return FUNC_0(VAR_1, &VAR_5, VAR_4);
}
