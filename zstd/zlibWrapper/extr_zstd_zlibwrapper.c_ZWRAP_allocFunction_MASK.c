
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef TYPE_1__* z_streamp ;
typedef int uInt ;
struct TYPE_2__ {int opaque; void* (* zalloc ) (int ,int,int ) ;} ;


 void* FUNC_0 (int ,int,int ) ;

__attribute__((used)) static void* FUNC_1(void* VAR_0, size_t VAR_1)
{
    z_streamp VAR_2 = (z_streamp) VAR_0;
    void* VAR_3 = VAR_2->zalloc(VAR_2->opaque, 1, (uInt)VAR_1);

    return VAR_3;
}
