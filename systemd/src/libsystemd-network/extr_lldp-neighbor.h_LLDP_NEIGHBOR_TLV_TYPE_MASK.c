
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {size_t rindex; } ;
typedef TYPE_1__ sd_lldp_neighbor ;


 scalar_t__ FUNC_0 (TYPE_1__ const*) ;

__attribute__((used)) static inline uint8_t FUNC_1(const sd_lldp_neighbor *VAR_0) {
        return ((uint8_t*) FUNC_0(VAR_0))[VAR_0->rindex] >> 1;
}
