
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int* bytes; } ;
typedef TYPE_1__ sd_id128_t ;



__attribute__((used)) static sd_id128_t FUNC_0(sd_id128_t VAR_0) {




        VAR_0.bytes[6] = (VAR_0.bytes[6] & 0x0F) | 0x40;


        VAR_0.bytes[8] = (VAR_0.bytes[8] & 0x3F) | 0x80;

        return VAR_0;
}
