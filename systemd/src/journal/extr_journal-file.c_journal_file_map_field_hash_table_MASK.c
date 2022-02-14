
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_5__ {void* field_hash_table; int field_hash_table_size; struct TYPE_5__* header; int field_hash_table_offset; } ;
typedef TYPE_1__ JournalFile ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ,int,int ,int ,void**,int *) ;
 int FUNC_2 (int ) ;

int FUNC_3(JournalFile *VAR_1) {
        uint64_t VAR_2, VAR_3;
        void *VAR_4;
        int VAR_5;

        FUNC_0(VAR_1);
        FUNC_0(VAR_1->header);

        if (VAR_1->field_hash_table)
                return 0;

        VAR_3 = FUNC_2(VAR_1->header->field_hash_table_offset);
        VAR_2 = FUNC_2(VAR_1->header->field_hash_table_size);

        VAR_5 = FUNC_1(VAR_1,
                                 VAR_0,
                                 1,
                                 VAR_3, VAR_2,
                                 &VAR_4, ((void*)0));
        if (VAR_5 < 0)
                return VAR_5;

        VAR_1->field_hash_table = VAR_4;
        return 0;
}
