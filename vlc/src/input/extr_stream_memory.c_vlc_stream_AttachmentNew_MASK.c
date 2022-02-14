
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_9__ {int p_buffer; int i_size; scalar_t__ i_pos; } ;
struct vlc_stream_attachment_private {TYPE_3__* attachment; TYPE_1__ memory; } ;
struct TYPE_10__ {int pf_control; int pf_seek; int pf_read; int * psz_name; } ;
typedef TYPE_2__ stream_t ;
struct TYPE_11__ {int p_data; int i_data; } ;
typedef TYPE_3__ input_attachment_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (char*) ;
 int VAR_3 ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (int ) ;
 TYPE_2__* FUNC_3 (int *,int ,int,char*) ;
 struct vlc_stream_attachment_private* FUNC_4 (TYPE_2__*) ;

stream_t *FUNC_5(vlc_object_t *VAR_4,
                                   input_attachment_t *VAR_5)
{
    struct vlc_stream_attachment_private *VAR_6;
    stream_t *VAR_7 = FUNC_3(VAR_4, VAR_3,
                                       sizeof (*VAR_6), "stream");
    if (FUNC_2(VAR_7 == ((void*)0)))
        return ((void*)0);

    VAR_7->psz_name = FUNC_0("attachment");
    if (FUNC_2(VAR_7->psz_name == ((void*)0)))
    {
        FUNC_1(VAR_7);
        return ((void*)0);
    }

    VAR_6 = FUNC_4(VAR_7);
    VAR_6->memory.i_pos = 0;
    VAR_6->memory.i_size = VAR_5->i_data;
    VAR_6->memory.p_buffer = VAR_5->p_data;
    VAR_6->attachment = VAR_5;

    VAR_7->pf_read = VAR_1;
    VAR_7->pf_seek = VAR_2;
    VAR_7->pf_control = VAR_0;

    return VAR_7;
}
