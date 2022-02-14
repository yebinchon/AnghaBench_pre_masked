
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int ssize_t ;
typedef int h ;
struct TYPE_10__ {int file_id; int seqnum_id; int tail_entry_seqnum; int compatible_flags; int incompatible_flags; int header_size; int signature; } ;
struct TYPE_9__ {int compress_xz; int compress_lz4; int seal; int fd; TYPE_1__* header; } ;
struct TYPE_8__ {int tail_entry_seqnum; int seqnum_id; } ;
typedef TYPE_2__ JournalFile ;
typedef TYPE_3__ Header ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_5 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int ,TYPE_3__*,int,int ) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(JournalFile *VAR_6, JournalFile *VAR_7) {
        Header VAR_8 = {};
        ssize_t VAR_9;
        int VAR_10;

        FUNC_1(VAR_6);

        FUNC_4(VAR_8.signature, VAR_4, 8);
        VAR_8.header_size = FUNC_3(FUNC_0(sizeof(VAR_8)));

        VAR_8.incompatible_flags |= FUNC_2(
                VAR_6->compress_xz * VAR_3 |
                VAR_6->compress_lz4 * VAR_2);

        VAR_8.compatible_flags = FUNC_2(
                VAR_6->seal * VAR_1);

        VAR_10 = FUNC_6(&VAR_8.file_id);
        if (VAR_10 < 0)
                return VAR_10;

        if (VAR_7) {
                VAR_8.seqnum_id = VAR_7->header->seqnum_id;
                VAR_8.tail_entry_seqnum = VAR_7->header->tail_entry_seqnum;
        } else
                VAR_8.seqnum_id = VAR_8.file_id;

        VAR_9 = FUNC_5(VAR_6->fd, &VAR_8, sizeof(VAR_8), 0);
        if (VAR_9 < 0)
                return -VAR_5;

        if (VAR_9 != sizeof(VAR_8))
                return -VAR_0;

        return 0;
}
