
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vlc_http_stream {TYPE_1__* cbs; } ;
struct TYPE_2__ {int (* close ) (struct vlc_http_stream*,int) ;} ;


 int FUNC_0 (struct vlc_http_stream*,int) ;

__attribute__((used)) static inline void FUNC_1(struct vlc_http_stream *VAR_0, bool VAR_1)
{
    VAR_0->cbs->close(VAR_0, VAR_1);
}
