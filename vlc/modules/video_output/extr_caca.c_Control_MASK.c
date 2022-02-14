
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* sys; } ;
typedef TYPE_1__ vout_display_t ;
struct TYPE_6__ {int * dither; } ;
typedef TYPE_2__ vout_display_sys_t ;
typedef int va_list ;


 int VAR_0 ;
 int VAR_1 ;





 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,char*) ;

__attribute__((used)) static int FUNC_2(vout_display_t *VAR_2, int VAR_3, va_list VAR_4)
{
    vout_display_sys_t *VAR_5 = VAR_2->sys;

    (void) VAR_4;

    switch (VAR_3) {
    case 129:
        if (VAR_5->dither)
            FUNC_0(VAR_5->dither);
        VAR_5->dither = ((void*)0);

    case 131:
    case 128:
    case 132:
    case 130:
        return VAR_1;

    default:
        FUNC_1(VAR_2, "Unsupported query in vout display caca");
        return VAR_0;
    }
}
