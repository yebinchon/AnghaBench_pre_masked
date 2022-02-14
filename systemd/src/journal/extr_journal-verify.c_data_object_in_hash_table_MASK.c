
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef size_t uint64_t ;
struct TYPE_15__ {TYPE_1__* data_hash_table; TYPE_3__* header; } ;
struct TYPE_12__ {int next_hash_offset; } ;
struct TYPE_14__ {TYPE_2__ data; } ;
struct TYPE_13__ {int data_hash_table_size; } ;
struct TYPE_11__ {int head_hash_offset; } ;
typedef TYPE_4__ Object ;
typedef TYPE_5__ JournalFile ;
typedef int HashItem ;


 int VAR_0 ;
 int FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (TYPE_5__*,int ,size_t,TYPE_4__**) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,char*) ;

__attribute__((used)) static int FUNC_5(JournalFile *VAR_1, uint64_t VAR_2, uint64_t VAR_3) {
        uint64_t VAR_4, VAR_5, VAR_6;
        int VAR_7;
        FUNC_0(VAR_1);

        VAR_4 = FUNC_3(VAR_1->header->data_hash_table_size) / sizeof(HashItem);
        if (VAR_4 <= 0)
                return 0;

        VAR_7 = FUNC_1(VAR_1);
        if (VAR_7 < 0)
                return FUNC_4(VAR_7, "Failed to map data hash table: %m");

        VAR_5 = VAR_2 % VAR_4;

        VAR_6 = FUNC_3(VAR_1->data_hash_table[VAR_5].head_hash_offset);
        while (VAR_6 != 0) {
                Object *VAR_8;

                if (VAR_3 == VAR_6)
                        return 1;

                VAR_7 = FUNC_2(VAR_1, VAR_0, VAR_6, &VAR_8);
                if (VAR_7 < 0)
                        return VAR_7;

                VAR_6 = FUNC_3(VAR_8->data.next_hash_offset);
        }

        return 0;
}
