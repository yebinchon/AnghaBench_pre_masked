
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* header; int hmac; int seal; } ;
struct TYPE_6__ {int data_hash_table_offset; int seqnum_id; int file_id; int * signature; } ;
typedef TYPE_2__ JournalFile ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int *,scalar_t__) ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

int FUNC_4(JournalFile *VAR_9) {
        int VAR_10;

        FUNC_0(VAR_9);

        if (!VAR_9->seal)
                return 0;

        VAR_10 = FUNC_2(VAR_9);
        if (VAR_10 < 0)
                return VAR_10;
        FUNC_1(VAR_9->hmac, VAR_9->header->signature, FUNC_3(VAR_0, VAR_7) - FUNC_3(VAR_0, VAR_6));
        FUNC_1(VAR_9->hmac, &VAR_9->header->file_id, FUNC_3(VAR_0, VAR_2) - FUNC_3(VAR_0, VAR_4));
        FUNC_1(VAR_9->hmac, &VAR_9->header->seqnum_id, FUNC_3(VAR_0, VAR_1) - FUNC_3(VAR_0, VAR_5));
        FUNC_1(VAR_9->hmac, &VAR_9->header->data_hash_table_offset, FUNC_3(VAR_0, VAR_8) - FUNC_3(VAR_0, VAR_3));

        return 0;
}
