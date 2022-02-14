
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* psz_object_type; char* psz_header; uintptr_t i_object_id; } ;
typedef TYPE_1__ libvlc_log_t ;



void FUNC_0(const libvlc_log_t *VAR_0,
                           const char **restrict VAR_1,
                           const char **restrict VAR_2,
                           uintptr_t *restrict VAR_3)
{
    if (VAR_1 != ((void*)0))
        *VAR_1 = (VAR_0->psz_object_type != ((void*)0))
                ? VAR_0->psz_object_type : "generic";
    if (VAR_2 != ((void*)0))
        *VAR_2 = VAR_0->psz_header;
    if (VAR_3 != ((void*)0))
        *VAR_3 = VAR_0->i_object_id;
}
