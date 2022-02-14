
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ fd; scalar_t__ hmac; int fsprg_seed; int fsprg_state; int fss_file_size; scalar_t__ fss_file; int compress_buffer; int chain_cache; scalar_t__ mmap; int path; scalar_t__ close_fd; scalar_t__ defrag_on_close; scalar_t__ cache_fd; scalar_t__ post_change_timer; scalar_t__ writable; scalar_t__ seal; } ;
typedef TYPE_1__ JournalFile ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,int ,int ,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,int) ;
 int FUNC_8 (int,char*) ;
 TYPE_1__* FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (scalar_t__,scalar_t__) ;
 int FUNC_11 (scalar_t__) ;
 int FUNC_12 (scalar_t__,int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (scalar_t__) ;
 int FUNC_15 (scalar_t__) ;
 scalar_t__ FUNC_16 (scalar_t__,int *) ;

JournalFile* FUNC_17(JournalFile *VAR_1) {
        if (!VAR_1)
                return ((void*)0);
        if (VAR_1->post_change_timer) {
                if (FUNC_16(VAR_1->post_change_timer, ((void*)0)) > 0)
                        FUNC_6(VAR_1);

                FUNC_15(VAR_1->post_change_timer);
        }

        FUNC_7(VAR_1, 1);

        if (VAR_1->mmap && VAR_1->cache_fd)
                FUNC_10(VAR_1->mmap, VAR_1->cache_fd);

        if (VAR_1->fd >= 0 && VAR_1->defrag_on_close) {







                (void) FUNC_2(VAR_1->fd, 0, VAR_0, ((void*)0));
                (void) FUNC_1(VAR_1->fd);
        }

        if (VAR_1->close_fd)
                FUNC_14(VAR_1->fd);
        FUNC_3(VAR_1->path);

        FUNC_11(VAR_1->mmap);

        FUNC_13(VAR_1->chain_cache);
        return FUNC_9(VAR_1);
}
