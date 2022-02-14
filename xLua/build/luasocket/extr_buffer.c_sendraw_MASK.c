
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int p_timeout ;
typedef TYPE_1__* p_io ;
typedef TYPE_2__* p_buffer ;
struct TYPE_5__ {size_t sent; int tm; TYPE_1__* io; } ;
struct TYPE_4__ {int (* send ) (int ,char const*,size_t,size_t*,int ) ;int ctx; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ,char const*,size_t,size_t*,int ) ;

__attribute__((used)) static int FUNC_1(p_buffer VAR_2, const char *VAR_3, size_t VAR_4, size_t *VAR_5) {
    p_io VAR_6 = VAR_2->io;
    p_timeout VAR_7 = VAR_2->tm;
    size_t VAR_8 = 0;
    int VAR_9 = VAR_0;
    while (VAR_8 < VAR_4 && VAR_9 == VAR_0) {
        size_t VAR_10 = 0;
        size_t VAR_11 = (VAR_4-VAR_8 <= VAR_1)? VAR_4-VAR_8: VAR_1;
        VAR_9 = VAR_6->send(VAR_6->ctx, VAR_3+VAR_8, VAR_11, &VAR_10, VAR_7);
        VAR_8 += VAR_10;
    }
    *VAR_5 = VAR_8;
    VAR_2->sent += VAR_8;
    return VAR_9;
}
