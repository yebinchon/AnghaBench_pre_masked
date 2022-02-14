
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct iovec {int dummy; } ;
typedef int ssize_t ;
struct TYPE_8__ {scalar_t__ buffer_offset; int ssl; TYPE_1__* write_buffer; } ;
struct TYPE_9__ {TYPE_2__ dnstls_data; int dnstls_events; struct TYPE_9__* encrypted; } ;
struct TYPE_7__ {scalar_t__ length; scalar_t__ data; } ;
typedef TYPE_3__ DnsStream ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct iovec FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*,struct iovec*,int,int ) ;

__attribute__((used)) static int FUNC_5(DnsStream *VAR_3) {
        ssize_t VAR_4;

        FUNC_3(VAR_3);
        FUNC_3(VAR_3->encrypted);

        if (VAR_3->dnstls_data.buffer_offset < VAR_3->dnstls_data.write_buffer->length) {
                FUNC_3(VAR_3->dnstls_data.write_buffer->data);

                struct iovec VAR_5[1];
                VAR_5[0] = FUNC_1(VAR_3->dnstls_data.write_buffer->data + VAR_3->dnstls_data.buffer_offset,
                                    VAR_3->dnstls_data.write_buffer->length - VAR_3->dnstls_data.buffer_offset);
                VAR_4 = FUNC_4(VAR_3, VAR_5, 1, VAR_0);
                if (VAR_4 < 0) {
                        if (VAR_4 == -VAR_1)
                                VAR_3->dnstls_events |= VAR_2;

                        return VAR_4;
                } else {
                        VAR_3->dnstls_data.buffer_offset += VAR_4;

                        if (VAR_3->dnstls_data.buffer_offset < VAR_3->dnstls_data.write_buffer->length) {
                                VAR_3->dnstls_events |= VAR_2;
                                return -VAR_1;
                        } else {
                                FUNC_0(FUNC_2(VAR_3->dnstls_data.ssl));
                                VAR_3->dnstls_data.buffer_offset = 0;
                        }
                }
        }

        return 0;
}
