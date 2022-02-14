
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int p_libvlc_int; } ;
typedef TYPE_1__ libvlc_instance_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (int,char const* const*) ;
 int FUNC_2 (int ,char*,int ) ;

__attribute__((used)) static libvlc_instance_t *
FUNC_3(int VAR_2, const char *const *VAR_3)
{
    libvlc_instance_t *VAR_4 = FUNC_1(VAR_2, VAR_3);
    FUNC_0(VAR_4 != ((void*)0));

    int VAR_5;
    VAR_5 = FUNC_2(VAR_4->p_libvlc_int, "test-user", VAR_1);
    FUNC_0(VAR_5 == VAR_0);
    VAR_5 = FUNC_2(VAR_4->p_libvlc_int, "test-pwd", VAR_1);
    FUNC_0(VAR_5 == VAR_0);

    return VAR_4;
}
