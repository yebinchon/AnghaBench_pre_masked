
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ current_xor_hash; int current_boot_id; scalar_t__ current_monotonic; scalar_t__ current_realtime; scalar_t__ current_seqnum; scalar_t__ current_offset; int location_type; } ;
typedef TYPE_1__ JournalFile ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

void FUNC_1(JournalFile *VAR_1) {
        VAR_1->location_type = VAR_0;
        VAR_1->current_offset = 0;
        VAR_1->current_seqnum = 0;
        VAR_1->current_realtime = 0;
        VAR_1->current_monotonic = 0;
        FUNC_0(VAR_1->current_boot_id);
        VAR_1->current_xor_hash = 0;
}
