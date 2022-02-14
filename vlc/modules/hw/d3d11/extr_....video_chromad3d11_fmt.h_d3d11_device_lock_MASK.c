
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ context_mutex; } ;
typedef TYPE_1__ d3d11_device_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__,int ,int ) ;

__attribute__((used)) static inline void FUNC_1(d3d11_device_t *VAR_3)
{
    if( VAR_3->context_mutex != VAR_2 )
        FUNC_0( VAR_3->context_mutex, VAR_1, VAR_0 );
}
