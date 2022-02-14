
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vlc_object_t ;
typedef int uint8_t ;
struct TYPE_6__ {int pf_control; int pf_seek; int pf_read; TYPE_2__* p_sys; int s; } ;
typedef TYPE_1__ stream_t ;
struct TYPE_8__ {void* opaque; void* zfree; void* zalloc; scalar_t__ avail_in; int next_in; } ;
struct TYPE_7__ {int eof; TYPE_4__ zstream; int buffer; } ;
typedef TYPE_2__ stream_sys_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int const*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_4__*,int) ;
 TYPE_2__* FUNC_3 (int) ;
 int FUNC_4 (int const*,char*,int) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ,int const**,int) ;

__attribute__((used)) static int FUNC_7(vlc_object_t *VAR_9)
{
    stream_t *VAR_10 = (stream_t *)VAR_9;
    const uint8_t *VAR_11;
    int VAR_12;


    if (FUNC_6(VAR_10->s, &VAR_11, 2) < 2)
        return VAR_3;

    if ((VAR_11[0] & 0xF) == 8 && (VAR_11[0] >> 4) < 8 && (FUNC_0(VAR_11) % 31) == 0)
        VAR_12 = 15;
    else
    if (!FUNC_4(VAR_11, "\x1F\x8B", 2))
        VAR_12 = 15 + 32;
    else
        return VAR_3;

    stream_sys_t *VAR_13 = FUNC_3(sizeof (*VAR_13));
    if (FUNC_5(VAR_13 == ((void*)0)))
        return VAR_4;

    VAR_13->zstream.next_in = VAR_13->buffer;
    VAR_13->zstream.avail_in = 0;
    VAR_13->zstream.zalloc = VAR_7;
    VAR_13->zstream.zfree = VAR_7;
    VAR_13->zstream.opaque = VAR_7;
    VAR_13->eof = 0;

    int VAR_14 = FUNC_2(&VAR_13->zstream, VAR_12);
    if (VAR_14 != VAR_8)
    {
        FUNC_1(VAR_13);
        return (VAR_14 == VAR_6) ? VAR_4 : VAR_3;
    }

    VAR_10->p_sys = VAR_13;
    VAR_10->pf_read = VAR_1;
    VAR_10->pf_seek = VAR_2;
    VAR_10->pf_control = VAR_0;
    return VAR_5;
}
