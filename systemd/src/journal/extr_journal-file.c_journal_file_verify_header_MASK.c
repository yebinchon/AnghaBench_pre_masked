
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint64_t ;
typedef int sd_id128_t ;
struct TYPE_10__ {scalar_t__ st_size; } ;
struct TYPE_11__ {scalar_t__ state; scalar_t__ field_hash_table_size; scalar_t__ data_hash_table_size; struct TYPE_11__* header; scalar_t__ seal; int compress_lz4; int compress_xz; int path; int tail_entry_realtime; int machine_id; scalar_t__ writable; int entry_array_offset; int tail_object_offset; int field_hash_table_offset; int data_hash_table_offset; TYPE_1__ last_stat; int arena_size; int header_size; int signature; } ;
typedef TYPE_2__ JournalFile ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_4 (int ) ;
 scalar_t__ VAR_13 ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ VAR_14 ;
 int FUNC_6 (TYPE_2__*) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int ,char*,int ,...) ;
 scalar_t__ FUNC_9 (int ,int ,int) ;
 int VAR_15 ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (TYPE_2__*,int) ;

__attribute__((used)) static int FUNC_14(JournalFile *VAR_16) {
        uint64_t VAR_17, VAR_18;

        FUNC_6(VAR_16);
        FUNC_6(VAR_16->header);

        if (FUNC_9(VAR_16->header->signature, VAR_8, 8))
                return -VAR_1;



        if (FUNC_13(VAR_16, 0))
                return -VAR_5;


        if (VAR_16->writable && FUNC_13(VAR_16, 1))
                return -VAR_5;

        if (VAR_16->header->state >= VAR_14)
                return -VAR_1;

        VAR_18 = FUNC_7(VAR_16->header->header_size);


        if (VAR_18 < VAR_9)
                return -VAR_1;

        if (FUNC_3(VAR_16->header) && !FUNC_2(VAR_16->header, VAR_15))
                return -VAR_1;

        VAR_17 = FUNC_7(VAR_16->header->arena_size);

        if (VAR_13 - VAR_18 < VAR_17 || VAR_18 + VAR_17 > (uint64_t) VAR_16->last_stat.st_size)
                return -VAR_4;

        if (FUNC_7(VAR_16->header->tail_object_offset) > VAR_18 + VAR_17)
                return -VAR_4;

        if (!FUNC_5(FUNC_7(VAR_16->header->data_hash_table_offset)) ||
            !FUNC_5(FUNC_7(VAR_16->header->field_hash_table_offset)) ||
            !FUNC_5(FUNC_7(VAR_16->header->tail_object_offset)) ||
            !FUNC_5(FUNC_7(VAR_16->header->entry_array_offset)))
                return -VAR_4;

        if (VAR_16->writable) {
                sd_id128_t VAR_19;
                uint8_t VAR_20;
                int VAR_21;

                VAR_21 = FUNC_12(&VAR_19);
                if (VAR_21 < 0)
                        return VAR_21;

                if (!FUNC_11(VAR_19, VAR_16->header->machine_id))
                        return -VAR_3;

                VAR_20 = VAR_16->header->state;

                if (VAR_20 == VAR_10)
                        return -VAR_6;
                else if (VAR_20 == VAR_12)
                        return FUNC_8(FUNC_4(VAR_2),
                                               "Journal file %s is already online. Assuming unclean closing.",
                                               VAR_16->path);
                else if (VAR_20 != VAR_11)
                        return FUNC_8(FUNC_4(VAR_2),
                                               "Journal file %s has unknown state %i.",
                                               VAR_16->path, VAR_20);

                if (VAR_16->header->field_hash_table_size == 0 || VAR_16->header->data_hash_table_size == 0)
                        return -VAR_1;




                if (FUNC_7(VAR_16->header->tail_entry_realtime) > FUNC_10(VAR_0))
                        return FUNC_8(FUNC_4(VAR_7),
                                               "Journal file %s is from the future, refusing to append new data to it that'd be older.",
                                               VAR_16->path);
        }

        VAR_16->compress_xz = FUNC_1(VAR_16->header);
        VAR_16->compress_lz4 = FUNC_0(VAR_16->header);

        VAR_16->seal = FUNC_3(VAR_16->header);

        return 0;
}
