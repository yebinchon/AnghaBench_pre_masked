
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int Data4; void* Data3; void* Data2; int Data1; } ;
typedef TYPE_1__ vlc_guid_t ;
typedef int uint8_t ;


 int FUNC_0 (int const*) ;
 void* FUNC_1 (int const*) ;
 int FUNC_2 (int ,int const*,int) ;

__attribute__((used)) static inline void FUNC_3( vlc_guid_t *VAR_0, const uint8_t *VAR_1 )
{
    VAR_0->Data1 = FUNC_0( VAR_1 );
    VAR_0->Data2 = FUNC_1( VAR_1 + 4);
    VAR_0->Data3 = FUNC_1( VAR_1 + 6);
    FUNC_2( VAR_0->Data4, VAR_1 + 8, 8 );
}
