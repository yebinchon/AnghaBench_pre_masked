
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vlc_http_stream {TYPE_1__* cbs; } ;
struct block_t {int dummy; } ;
struct TYPE_2__ {struct block_t* (* read ) (struct vlc_http_stream*) ;} ;


 struct block_t* FUNC_0 (struct vlc_http_stream*) ;

__attribute__((used)) static inline struct block_t *FUNC_1(struct vlc_http_stream *VAR_0)
{
    return VAR_0->cbs->read(VAR_0);
}
