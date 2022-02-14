
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint_t ;
typedef int uint8_t ;
typedef int out_buf ;
struct TYPE_6__ {scalar_t__ avail_in; int avail_out; int * next_out; int next_in; } ;
struct TYPE_5__ {int in_finish; int flags; size_t sec_size; int write_error; int buf_lock; int buf_cond; TYPE_3__ zstrm; int fp; int rc4_key; scalar_t__ canceled; scalar_t__ in_full; scalar_t__ in_avail; TYPE_1__* p_buf; TYPE_1__* buffer; } ;
typedef TYPE_2__ mm_backup_ctx ;
struct TYPE_4__ {scalar_t__ avail; int data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,scalar_t__,int *,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (TYPE_3__*,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 size_t FUNC_3 (int const*,int,scalar_t__,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void *FUNC_8(void *VAR_7)
{
    mm_backup_ctx *VAR_8 = (mm_backup_ctx *) VAR_7;

    for (;;) {
        int VAR_9;

        FUNC_6(&VAR_8->buf_lock);
        {
            while (!VAR_8->in_avail && !VAR_8->in_finish && !VAR_8->canceled)
                FUNC_5(&VAR_8->buf_cond, &VAR_8->buf_lock);

            VAR_8->zstrm.next_in = VAR_8->p_buf->data;
            VAR_8->zstrm.avail_in = VAR_8->p_buf->avail;
            VAR_9 = VAR_8->in_finish;

            VAR_8->p_buf = (VAR_8->p_buf == &VAR_8->buffer[0]) ? &VAR_8->buffer[1]
                                                         : &VAR_8->buffer[0];
            VAR_8->p_buf->avail = 0;

            VAR_8->in_avail = 0;
            VAR_8->in_full = 0;
        }
        FUNC_7(&VAR_8->buf_lock);
        FUNC_4(&VAR_8->buf_cond);

        int VAR_10;
        uint8_t VAR_11[VAR_1];

        if (VAR_8->canceled)
            return ((void*)0);
        do {
            VAR_8->zstrm.next_out = VAR_11;
            VAR_8->zstrm.avail_out = sizeof(VAR_11);
            VAR_10 = FUNC_1(&VAR_8->zstrm, VAR_9 ? VAR_3 : VAR_4);
            if (VAR_10 == VAR_2)
                break;
            if (VAR_10 != VAR_5 && VAR_10 != VAR_6)
                goto bail;

            uint_t VAR_12 = sizeof(VAR_11) - VAR_8->zstrm.avail_out;
            if ((VAR_8->flags & VAR_0) == 0)
                FUNC_0(&VAR_8->rc4_key, VAR_12, VAR_11, VAR_11);

            const uint8_t *VAR_13 = VAR_11;
            while (VAR_12 > 0) {
                size_t VAR_14 = FUNC_3(VAR_13, 1, VAR_12, VAR_8->fp);
                if (VAR_14 == 0 && FUNC_2(VAR_8->fp))
                    goto bail;
                VAR_12 -= VAR_14;
                VAR_13 += VAR_14;
                VAR_8->sec_size += VAR_14;
            }
        } while (VAR_8->zstrm.avail_out == 0 && VAR_10 != VAR_6);
        if (VAR_8->zstrm.avail_in != 0)
            goto bail;

        if (VAR_10 == VAR_6)
            break;
    }
    return ((void*)0);

bail:
    FUNC_6(&VAR_8->buf_lock);
    VAR_8->write_error = 1;
    FUNC_4(&VAR_8->buf_cond);
    FUNC_7(&VAR_8->buf_lock);
    return ((void*)0);
}
