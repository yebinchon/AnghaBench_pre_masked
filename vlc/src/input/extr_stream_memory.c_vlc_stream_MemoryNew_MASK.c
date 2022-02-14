
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int vlc_object_t ;
typedef int uint8_t ;
struct vlc_stream_memory_private {size_t i_size; int * p_buffer; scalar_t__ i_pos; } ;
struct TYPE_5__ {int pf_control; int pf_seek; int pf_read; } ;
typedef TYPE_1__ stream_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int *,int ,int,char*) ;
 struct vlc_stream_memory_private* FUNC_2 (TYPE_1__*) ;

stream_t *(FUNC_3)(vlc_object_t *VAR_5, uint8_t *VAR_6,
                                 size_t VAR_7, bool VAR_8)
{
    struct vlc_stream_memory_private *VAR_9;
    stream_t *VAR_10 = FUNC_1(VAR_5,
                                       VAR_8 ? VAR_4
                                                : VAR_3,
                                       sizeof (*VAR_9), "stream");
    if (FUNC_0(VAR_10 == ((void*)0)))
        return ((void*)0);

    VAR_9 = FUNC_2(VAR_10);
    VAR_9->i_pos = 0;
    VAR_9->i_size = VAR_7;
    VAR_9->p_buffer = VAR_6;

    VAR_10->pf_read = VAR_1;
    VAR_10->pf_seek = VAR_2;
    VAR_10->pf_control = VAR_0;

    return VAR_10;
}
