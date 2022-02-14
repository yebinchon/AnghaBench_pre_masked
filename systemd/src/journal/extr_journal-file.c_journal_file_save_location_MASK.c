
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_8__ {void* current_xor_hash; int current_boot_id; void* current_monotonic; void* current_realtime; void* current_seqnum; int current_offset; int location_type; } ;
struct TYPE_6__ {int xor_hash; int boot_id; int monotonic; int realtime; int seqnum; } ;
struct TYPE_7__ {TYPE_1__ entry; } ;
typedef TYPE_2__ Object ;
typedef TYPE_3__ JournalFile ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;

void FUNC_1(JournalFile *VAR_1, Object *VAR_2, uint64_t VAR_3) {
        VAR_1->location_type = VAR_0;
        VAR_1->current_offset = VAR_3;
        VAR_1->current_seqnum = FUNC_0(VAR_2->entry.seqnum);
        VAR_1->current_realtime = FUNC_0(VAR_2->entry.realtime);
        VAR_1->current_monotonic = FUNC_0(VAR_2->entry.monotonic);
        VAR_1->current_boot_id = VAR_2->entry.boot_id;
        VAR_1->current_xor_hash = FUNC_0(VAR_2->entry.xor_hash);
}
