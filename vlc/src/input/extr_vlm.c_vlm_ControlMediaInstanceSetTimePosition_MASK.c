
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vlm_t ;
typedef int vlm_media_sys_t ;
struct TYPE_3__ {int player; } ;
typedef TYPE_1__ vlm_media_instance_sys_t ;
typedef scalar_t__ int64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,double) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int * FUNC_5 (int *,scalar_t__) ;
 TYPE_1__* FUNC_6 (int *,char const*) ;

__attribute__((used)) static int FUNC_7( vlm_t *VAR_2, int64_t VAR_3, const char *VAR_4, int64_t VAR_5, double VAR_6 )
{
    vlm_media_sys_t *VAR_7 = FUNC_5( VAR_2, VAR_3 );
    vlm_media_instance_sys_t *VAR_8;

    if( !VAR_7 )
        return VAR_0;

    VAR_8 = FUNC_6( VAR_7, VAR_4 );
    if( !VAR_8 )
        return VAR_0;

    FUNC_1(VAR_8->player);
    if( VAR_5 >= 0 )
        FUNC_3(VAR_8->player, FUNC_0(VAR_5));
    else if( VAR_6 >= 0 && VAR_6 <= 100 )
        FUNC_2(VAR_8->player, VAR_6);
    FUNC_4(VAR_8->player);
    return VAR_1;
}
