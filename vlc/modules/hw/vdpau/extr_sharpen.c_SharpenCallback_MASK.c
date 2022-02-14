
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int f_float; } ;
typedef TYPE_1__ vlc_value_t ;
typedef int vlc_object_t ;
typedef int uint32_t ;
struct TYPE_6__ {int sigma; } ;
typedef TYPE_2__ filter_sys_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 float FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(vlc_object_t *VAR_1, const char *VAR_2,
                           vlc_value_t VAR_3, vlc_value_t VAR_4, void *VAR_5)
{
    filter_sys_t *VAR_6 = VAR_5;
    union { uint32_t u; float f; } VAR_7;

    VAR_7.f = FUNC_1(VAR_4.f_float);
    FUNC_0(&VAR_6->sigma, VAR_7.u);
    (void) VAR_1; (void) VAR_2; (void) VAR_3;
    return VAR_0;
}
