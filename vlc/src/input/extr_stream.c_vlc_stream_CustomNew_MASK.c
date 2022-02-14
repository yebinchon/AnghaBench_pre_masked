
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int vlc_object_t ;
typedef scalar_t__ vlc_iconv_t ;
struct TYPE_8__ {int * p_input_item; int * p_sys; int * pf_control; int * pf_seek; int * pf_readdir; int * pf_block; int * pf_read; int * s; int * psz_url; } ;
typedef TYPE_2__ stream_t ;
struct TYPE_7__ {int char_width; int little_endian; scalar_t__ conv; } ;
struct TYPE_9__ {void (* destroy ) (TYPE_2__*) ;int eof; TYPE_1__ text; scalar_t__ offset; int * peek; int * block; TYPE_2__ stream; } ;
typedef TYPE_3__ stream_priv_t ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 TYPE_3__* FUNC_2 (int *,int,char const*) ;

stream_t *FUNC_3(vlc_object_t *VAR_0,
                               void (*VAR_1)(stream_t *), size_t VAR_2,
                               const char *VAR_3)
{
    stream_priv_t *VAR_4 = FUNC_2(VAR_0, sizeof (*VAR_4) + VAR_2,
                                            VAR_3);
    if (FUNC_1(VAR_4 == ((void*)0)))
        return ((void*)0);

    stream_t *VAR_5 = &VAR_4->stream;

    VAR_5->psz_url = ((void*)0);
    VAR_5->s = ((void*)0);
    VAR_5->pf_read = ((void*)0);
    VAR_5->pf_block = ((void*)0);
    VAR_5->pf_readdir = ((void*)0);
    VAR_5->pf_seek = ((void*)0);
    VAR_5->pf_control = ((void*)0);
    VAR_5->p_sys = ((void*)0);
    VAR_5->p_input_item = ((void*)0);
    FUNC_0(VAR_1 != ((void*)0));
    VAR_4->destroy = VAR_1;
    VAR_4->block = ((void*)0);
    VAR_4->peek = ((void*)0);
    VAR_4->offset = 0;
    VAR_4->eof = 0;


    VAR_4->text.conv = (vlc_iconv_t)(-1);
    VAR_4->text.char_width = 1;
    VAR_4->text.little_endian = 0;

    return VAR_5;
}
