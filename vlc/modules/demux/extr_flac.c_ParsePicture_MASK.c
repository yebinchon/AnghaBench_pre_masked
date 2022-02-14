
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int input_attachment_t ;
struct TYPE_4__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ demux_t ;
struct TYPE_5__ {int attachments; int i_attachments; int i_cover_idx; int i_cover_score; } ;
typedef TYPE_2__ demux_sys_t ;


 int * FUNC_0 (int const*,size_t,int ,int *,int *) ;
 int FUNC_1 (int ,int ,int *) ;

__attribute__((used)) static void FUNC_2( demux_t *VAR_0, const uint8_t *VAR_1, size_t VAR_2 )
{
    demux_sys_t *VAR_3 = VAR_0->p_sys;

    VAR_2 -= 4; VAR_1 += 4;

    input_attachment_t *VAR_4 = FUNC_0( VAR_1, VAR_2,
        VAR_3->i_attachments, &VAR_3->i_cover_score, &VAR_3->i_cover_idx );
    if( VAR_4 == ((void*)0) )
        return;

    FUNC_1( VAR_3->i_attachments, VAR_3->attachments, VAR_4 );
}
