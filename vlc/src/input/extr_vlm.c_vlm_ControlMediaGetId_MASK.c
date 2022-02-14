
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vlm_t ;
struct TYPE_4__ {int id; } ;
struct TYPE_5__ {TYPE_1__ cfg; } ;
typedef TYPE_2__ vlm_media_sys_t ;
typedef int int64_t ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (int *,char const*) ;

__attribute__((used)) static int FUNC_1( vlm_t *VAR_2, const char *VAR_3, int64_t *VAR_4 )
{
    vlm_media_sys_t *VAR_5 = FUNC_0( VAR_2, VAR_3 );
    if( !VAR_5 )
        return VAR_0;

    *VAR_4 = VAR_5->cfg.id;
    return VAR_1;
}
