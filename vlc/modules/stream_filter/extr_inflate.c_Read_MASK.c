
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int s; TYPE_2__* p_sys; } ;
typedef TYPE_1__ stream_t ;
struct TYPE_9__ {size_t avail_out; scalar_t__ avail_in; int next_in; void* next_out; } ;
struct TYPE_8__ {int eof; int buffer; TYPE_5__ zstream; } ;
typedef TYPE_2__ stream_sys_t ;
typedef int ssize_t ;






 int VAR_0 ;
 int FUNC_0 (TYPE_5__*,int ) ;
 int FUNC_1 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 (TYPE_1__*,char*,...) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int ,int,int) ;

__attribute__((used)) static ssize_t FUNC_6(stream_t *VAR_1, void *VAR_2, size_t VAR_3)
{
    stream_sys_t *VAR_4 = VAR_1->p_sys;
    ssize_t VAR_5;

    if (VAR_4->eof || FUNC_4(VAR_3 == 0))
        return 0;

    VAR_4->zstream.next_out = VAR_2;
    VAR_4->zstream.avail_out = VAR_3;

    if (VAR_4->zstream.avail_in == 0)
        VAR_4->zstream.next_in = VAR_4->buffer;

    VAR_5 = (VAR_4->buffer + sizeof (VAR_4->buffer))
        - (VAR_4->zstream.next_in + VAR_4->zstream.avail_in);

    if (VAR_5 > 0)
    {
        VAR_5 = FUNC_5(VAR_1->s,
                          VAR_4->zstream.next_in + VAR_4->zstream.avail_in, VAR_5);
        if (VAR_5 >= 0)
            VAR_4->zstream.avail_in += VAR_5;
    }

    if (VAR_4->zstream.avail_in == 0)
    {
        FUNC_3(VAR_1, "unexpected end of stream");
        return 0;
    }

    VAR_5 = FUNC_0(&VAR_4->zstream, VAR_0);
    switch (VAR_5)
    {
        case 128:
            FUNC_2(VAR_1, "end of stream");
            VAR_4->eof = 1;

        case 129:
            return VAR_3 - VAR_4->zstream.avail_out;
        case 130:
            FUNC_3(VAR_1, "corrupt stream");
            VAR_4->eof = 1;
            return -1;
        case 131:
            if (VAR_4->zstream.next_in == VAR_4->buffer)
                break;

            FUNC_1(VAR_4->buffer, VAR_4->zstream.next_in, VAR_4->zstream.avail_in);
            VAR_4->zstream.next_in = VAR_4->buffer;
            return FUNC_6(VAR_1, VAR_2, VAR_3);
    }

    FUNC_3(VAR_1, "unhandled decompression error (%zd)", VAR_5);
    return -1;
}
