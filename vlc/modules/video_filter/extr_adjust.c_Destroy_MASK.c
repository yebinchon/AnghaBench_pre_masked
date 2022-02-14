
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_3__ {int * p_sys; } ;
typedef TYPE_1__ filter_t ;
typedef int filter_sys_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,char*,int ,int *) ;

__attribute__((used)) static void FUNC_2( vlc_object_t *VAR_1 )
{
    filter_t *VAR_2 = (filter_t *)VAR_1;
    filter_sys_t *VAR_3 = VAR_2->p_sys;

    FUNC_1( VAR_2, "contrast", VAR_0, VAR_3 );
    FUNC_1( VAR_2, "brightness", VAR_0, VAR_3 );
    FUNC_1( VAR_2, "hue", VAR_0, VAR_3 );
    FUNC_1( VAR_2, "saturation", VAR_0, VAR_3 );
    FUNC_1( VAR_2, "gamma", VAR_0, VAR_3 );
    FUNC_1( VAR_2, "brightness-threshold",
                                             VAR_0, VAR_3 );

    FUNC_0( VAR_3 );
}
