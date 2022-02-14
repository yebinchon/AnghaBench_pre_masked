
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ demux_t ;
struct TYPE_5__ {int pp_title_seekpoints; int i_title_seekpoints; int i_cover_idx; int i_cover_score; int attachments; int i_attachments; int p_meta; } ;
typedef TYPE_2__ demux_sys_t ;


 int FUNC_0 (int *,int *,int const*,size_t,int *,int *,int *,int *,int *,int *,int *,int *) ;

__attribute__((used)) static void FUNC_1( demux_t *VAR_0, const uint8_t *VAR_1, size_t VAR_2 )
{
    demux_sys_t *VAR_3 = VAR_0->p_sys;

    if( VAR_2 < 4 )
        return;

    FUNC_0( ((void*)0), &VAR_3->p_meta, &VAR_1[4], VAR_2 - 4,
        &VAR_3->i_attachments, &VAR_3->attachments,
        &VAR_3->i_cover_score, &VAR_3->i_cover_idx,
        &VAR_3->i_title_seekpoints, &VAR_3->pp_title_seekpoints, ((void*)0), ((void*)0) );
}
