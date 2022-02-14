
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint_t ;
typedef int uint8_t ;
struct TYPE_5__ {scalar_t__ avail_out; int avail_in; char* msg; int next_in; int * next_out; } ;
struct TYPE_4__ {int sec_size; int flags; TYPE_2__ zstrm; int in_buf; int rc4_key; int fp; } ;
typedef TYPE_1__ mm_recover_ctx ;


 int FUNC_0 (char*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int,int,int ) ;
 int FUNC_4 (TYPE_2__*,int ) ;
 char* FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(mm_recover_ctx *VAR_6, void *VAR_7, uint_t VAR_8)
{
    int VAR_9;

    if (VAR_8 == 0)
        return 0;

    VAR_6->zstrm.next_out = (uint8_t *) VAR_7;
    VAR_6->zstrm.avail_out = VAR_8;

    do {
        if (VAR_6->zstrm.avail_in == 0 && VAR_6->sec_size > 0) {
            VAR_9 = (VAR_6->sec_size > sizeof(VAR_6->in_buf)) ? sizeof(VAR_6->in_buf)
                                                        : VAR_6->sec_size;

            VAR_9 = FUNC_3(VAR_6->in_buf, 1, VAR_9, VAR_6->fp);
            if (VAR_9 == 0 && FUNC_2(VAR_6->fp))
                FUNC_0("Failed reading stream: %s", FUNC_5(VAR_5));
            if (VAR_9 > 0) {
                if ((VAR_6->flags & VAR_0) == 0)
                    FUNC_1(&VAR_6->rc4_key, VAR_9, VAR_6->in_buf, VAR_6->in_buf);
                VAR_6->zstrm.next_in = VAR_6->in_buf;
                VAR_6->zstrm.avail_in = VAR_9;

                VAR_6->sec_size -= VAR_9;
            }
        }

        VAR_9 = FUNC_4(&VAR_6->zstrm, VAR_2);
        if (VAR_9 != VAR_3 && VAR_9 != VAR_4)
            FUNC_0("Inflate error: %s",
                         VAR_6->zstrm.msg ? VAR_6->zstrm.msg : "Unknown");

    } while (VAR_6->zstrm.avail_out > 0 && VAR_9 != VAR_4);

    return VAR_8 - VAR_6->zstrm.avail_out;

bail:
    return VAR_1;
}
