
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint_t ;
typedef int uint8_t ;
struct mm_backup_buffer {scalar_t__ avail; scalar_t__ data; } ;
struct TYPE_3__ {int in_full; int in_avail; int buf_lock; int buf_cond; struct mm_backup_buffer* p_buf; scalar_t__ write_error; int canceled; } ;
typedef TYPE_1__ mm_backup_ctx ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (scalar_t__,int const*,scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(mm_backup_ctx *VAR_1, const void *VAR_2, uint_t VAR_3)
{
    struct mm_backup_buffer *VAR_4;
    const uint8_t *VAR_5 = (const uint8_t *) VAR_2;

    FUNC_4(&VAR_1->buf_lock);
    while (VAR_3 > 0) {
        while (VAR_1->in_full && !VAR_1->canceled && !VAR_1->write_error)
            FUNC_3(&VAR_1->buf_cond, &VAR_1->buf_lock);

        if (VAR_1->write_error) {
            FUNC_5(&VAR_1->buf_lock);
            FUNC_0("Writing thread reported error.");
            return -1;
        }

        VAR_4 = VAR_1->p_buf;

        uint_t VAR_6 = (VAR_4->avail + VAR_3 > VAR_0)
                                   ? VAR_0 - VAR_4->avail
                                   : VAR_3;
        FUNC_1(VAR_4->data + VAR_4->avail, VAR_5, VAR_6);
        VAR_3 -= VAR_6;
        VAR_4->avail += VAR_6;
        VAR_5 += VAR_6;

        VAR_1->in_avail = VAR_4->avail > VAR_0 / 4;
        VAR_1->in_full = VAR_4->avail == VAR_0;
        if (VAR_1->in_avail || VAR_1->in_full)
            FUNC_2(&VAR_1->buf_cond);
    }
    FUNC_5(&VAR_1->buf_lock);
    return 0;
}
