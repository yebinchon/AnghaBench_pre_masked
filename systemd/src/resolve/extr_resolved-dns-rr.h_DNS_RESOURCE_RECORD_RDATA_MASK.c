
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef void const uint8_t ;
struct TYPE_3__ {scalar_t__ wire_format_rdata_offset; scalar_t__ wire_format_size; scalar_t__ wire_format; } ;
typedef TYPE_1__ DnsResourceRecord ;


 int FUNC_0 (int) ;

__attribute__((used)) static inline const void* FUNC_1(const DnsResourceRecord *VAR_0) {
        if (!VAR_0)
                return ((void*)0);

        if (!VAR_0->wire_format)
                return ((void*)0);

        FUNC_0(VAR_0->wire_format_rdata_offset <= VAR_0->wire_format_size);
        return (uint8_t*) VAR_0->wire_format + VAR_0->wire_format_rdata_offset;
}
