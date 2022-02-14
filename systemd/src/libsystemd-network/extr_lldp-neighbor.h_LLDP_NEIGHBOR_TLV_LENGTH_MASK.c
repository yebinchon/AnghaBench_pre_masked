
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int rindex; } ;
typedef TYPE_1__ sd_lldp_neighbor ;


 scalar_t__ FUNC_0 (TYPE_1__ const*) ;

__attribute__((used)) static inline size_t FUNC_1(const sd_lldp_neighbor *VAR_0) {
        uint8_t *VAR_1;

        VAR_1 = (uint8_t*) FUNC_0(VAR_0) + VAR_0->rindex;
        return VAR_1[1] + (((size_t) (VAR_1[0] & 1)) << 8);
}
