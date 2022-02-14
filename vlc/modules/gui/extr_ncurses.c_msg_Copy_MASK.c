
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * psz_header; int * psz_module; int psz_object_type; int i_object_id; } ;
typedef TYPE_1__ vlc_log_t ;


 int * FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static vlc_log_t *FUNC_2 (const vlc_log_t *VAR_0)
{
    vlc_log_t *VAR_1 = (vlc_log_t *)FUNC_1 (sizeof (*VAR_1));
    VAR_1->i_object_id = VAR_0->i_object_id;
    VAR_1->psz_object_type = VAR_0->psz_object_type;
    VAR_1->psz_module = FUNC_0 (VAR_0->psz_module);
    VAR_1->psz_header = VAR_0->psz_header ? FUNC_0 (VAR_0->psz_header) : ((void*)0);
    return VAR_1;
}
