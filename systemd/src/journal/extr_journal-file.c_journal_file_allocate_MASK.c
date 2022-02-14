
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct statvfs {scalar_t__ f_bsize; scalar_t__ f_bfree; } ;
struct TYPE_6__ {scalar_t__ max_size; scalar_t__ min_size; scalar_t__ keep_free; } ;
struct TYPE_7__ {scalar_t__ last_stat_usec; int header_size; struct TYPE_7__* header; int arena_size; int fd; TYPE_1__ metrics; int cache_fd; int mmap; } ;
typedef TYPE_2__ JournalFile ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (int ,struct statvfs*) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (TYPE_2__*) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ,int ) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int ,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_11(JournalFile *VAR_5, uint64_t VAR_6, uint64_t VAR_7) {
        uint64_t VAR_8, VAR_9;
        int VAR_10;

        FUNC_3(VAR_5);
        FUNC_3(VAR_5->header);





        if (FUNC_8(VAR_5->mmap, VAR_5->cache_fd))
                return -VAR_2;

        VAR_8 =
                FUNC_7(VAR_5->header->header_size) +
                FUNC_7(VAR_5->header->arena_size);

        VAR_9 = FUNC_2(VAR_6 + VAR_7);
        if (VAR_9 < FUNC_7(VAR_5->header->header_size))
                VAR_9 = FUNC_7(VAR_5->header->header_size);

        if (VAR_9 <= VAR_8) {







                if (VAR_5->last_stat_usec + VAR_4 > FUNC_9(VAR_0))
                        return 0;

                return FUNC_6(VAR_5);
        }



        if (VAR_5->metrics.max_size > 0 && VAR_9 > VAR_5->metrics.max_size)
                return -VAR_1;

        if (VAR_9 > VAR_5->metrics.min_size && VAR_5->metrics.keep_free > 0) {
                struct statvfs VAR_11;

                if (FUNC_4(VAR_5->fd, &VAR_11) >= 0) {
                        uint64_t VAR_12;

                        VAR_12 = FUNC_1((uint64_t) VAR_11.f_bfree * (uint64_t) VAR_11.f_bsize, VAR_5->metrics.keep_free);

                        if (VAR_9 - VAR_8 > VAR_12)
                                return -VAR_1;
                }
        }


        VAR_9 = FUNC_0(VAR_9, VAR_3) * VAR_3;
        if (VAR_5->metrics.max_size > 0 && VAR_9 > VAR_5->metrics.max_size)
                VAR_9 = VAR_5->metrics.max_size;




        VAR_10 = FUNC_10(VAR_5->fd, VAR_8, VAR_9 - VAR_8);
        if (VAR_10 != 0)
                return -VAR_10;

        VAR_5->header->arena_size = FUNC_5(VAR_9 - FUNC_7(VAR_5->header->header_size));

        return FUNC_6(VAR_5);
}
