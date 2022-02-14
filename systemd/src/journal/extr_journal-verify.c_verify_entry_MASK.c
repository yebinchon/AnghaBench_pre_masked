
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef size_t uint64_t ;
struct TYPE_18__ {int hash; } ;
struct TYPE_17__ {TYPE_1__* items; } ;
struct TYPE_19__ {TYPE_3__ data; int mmap; TYPE_2__ entry; } ;
struct TYPE_16__ {int hash; int object_offset; } ;
typedef TYPE_4__ Object ;
typedef TYPE_4__ MMapFileDescriptor ;
typedef TYPE_4__ JournalFile ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (int ,TYPE_4__*,size_t,size_t) ;
 int FUNC_2 (TYPE_4__*,size_t,size_t) ;
 int FUNC_3 (size_t,char*) ;
 size_t FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_4__*,int ,size_t,TYPE_4__**) ;
 size_t FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(
                JournalFile *VAR_2,
                Object *VAR_3, uint64_t VAR_4,
                MMapFileDescriptor *VAR_5, uint64_t VAR_6) {

        uint64_t VAR_7, VAR_8;
        int VAR_9;

        FUNC_0(VAR_2);
        FUNC_0(VAR_3);
        FUNC_0(VAR_5);

        VAR_8 = FUNC_4(VAR_3);
        for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++) {
                uint64_t VAR_10, VAR_11;
                Object *VAR_12;

                VAR_10 = FUNC_6(VAR_3->entry.items[VAR_7].object_offset);
                VAR_11 = FUNC_6(VAR_3->entry.items[VAR_7].hash);

                if (!FUNC_1(VAR_2->mmap, VAR_5, VAR_6, VAR_10)) {
                        FUNC_3(VAR_4, "Invalid data object of entry");
                        return -VAR_0;
                }

                VAR_9 = FUNC_5(VAR_2, VAR_1, VAR_10, &VAR_12);
                if (VAR_9 < 0)
                        return VAR_9;

                if (FUNC_6(VAR_12->data.hash) != VAR_11) {
                        FUNC_3(VAR_4, "Hash mismatch for data object of entry");
                        return -VAR_0;
                }

                VAR_9 = FUNC_2(VAR_2, VAR_11, VAR_10);
                if (VAR_9 < 0)
                        return VAR_9;
                if (VAR_9 == 0) {
                        FUNC_3(VAR_4, "Data object missing from hash table");
                        return -VAR_0;
                }
        }

        return 0;
}
